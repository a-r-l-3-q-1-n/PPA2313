#include "iostream"
#include "fstream"
#include "climits"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-9.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-9.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int x, y;
        int number, minPerRow = INT_MAX, min[3];

        fileIn >> x >> y;

        cout << "[~] Matricea:" << endl;
        fileOut << "[~] Matricea:" << endl;

        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                fileIn >> number;

                cout << number << " ";
                fileOut << number << " ";

                if (number < minPerRow) {
                    minPerRow = number;
                }
            }
            cout << endl;
            fileOut << endl;

            min[xx] = minPerRow;
            minPerRow = INT_MAX;
        }

        for (int xx = 0; xx < x; xx++) {
            cout << "[~] Minimumul de pe randul " << xx + 1 << ": " << min[xx] << endl;
            fileOut << "[~] Minimumul de pe randul " << xx + 1 << ": " << min[xx] << endl;
        }

        fileIn.close();
        fileOut.close();

    }


    return 0;

}