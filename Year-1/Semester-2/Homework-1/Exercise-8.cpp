#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-8.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-8.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int x, y;
        int number, sumPerRow = 0, sum[3];

        fileIn >> x >> y;

        cout << "[~] Matricea:" << endl;
        fileOut << "[~] Matricea:" << endl;

        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                fileIn >> number;

                cout << number << " ";
                fileOut << number << " ";

                sumPerRow += number;
            }
            cout << endl;
            fileOut << endl;

            sum[xx] = sumPerRow;
            sumPerRow = 0;
        }

        for (int xx = 0; xx < x; xx++) {
            cout << "[~] Suma de pe randul " << xx + 1 << ": " << sum[xx] << endl;
            fileOut << "[~] Suma de pe randul " << xx + 1 << ": " << sum[xx] << endl;
        }

        fileIn.close();
        fileOut.close();

    }


    return 0;

}