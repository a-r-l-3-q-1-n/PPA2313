#include "iostream"
#include "fstream"
#include "climits"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-7.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-7.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int x, y, temp;
        int maxVal = INT_MIN, maxX, maxY;
        fileIn >> x >> y;

        cout << "[~] Matricea:" << endl;
        fileOut << "[~] Matricea:" << endl;

        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                fileIn >> temp;

                cout << temp << " ";
                fileOut << temp << " ";

                if (temp > maxVal) {
                    maxVal = temp;
                    maxX = xx;
                    maxY = yy;
                }
            }
            cout << endl;
            fileOut << endl;
        }

        cout << endl << "[~] Pozitia valorii maxime: [" << maxX << ", " << maxY << "]" << endl;
        fileOut << endl << "[~] Pozitia valorii maxime: [" << maxX << ", " << maxY << "]" << endl;

        fileIn.close();
        fileOut.close();

    }


    return 0;

}