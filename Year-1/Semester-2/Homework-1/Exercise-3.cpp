#include "iostream"
#include "iomanip"
#include "fstream"
#include "climits"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-3.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-3.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int numMax = INT_MIN, numMin = INT_MAX, numMid = 0, number;

        for (int iter = 0; iter < 3; iter++) {
            fileIn >> number;

            if (number > numMax) {
                numMax = number;
            }

            if (number < numMin) {
                numMin = number;
            }
        }

        fileIn.close();

        fileIn.open("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/data-3.in");

        for (int iter = 0; iter < 3; iter++) {
            fileIn >> number;

            if (number != numMax && number != numMin) {
                numMid = number;
            }
        }

        cout << "[~] " << setw(3) << numMax << ": Maxim" << endl;
        cout << "[~] " << setw(3) << numMid << ": Mediu" << endl;
        cout << "[~] " << setw(3) << numMin << ": Minim" << endl;

        fileOut << "[~] " << setw(3) << numMax << ": Maxim" << endl;
        fileOut << "[~] " << setw(3) << numMid << ": Mediu" << endl;
        fileOut << "[~] " << setw(3) << numMin << ": Minim" << endl;

        fileIn.close();
        fileOut.close();

    }


    return 0;

}