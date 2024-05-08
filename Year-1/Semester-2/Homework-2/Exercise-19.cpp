#include "iostream"
#include "iomanip"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-19.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-19.out");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int count = 0;
        double number, sum = 0;

        while (fileIn >> number) {
            count++;
        }

        fileIn.clear();
        fileIn.seekg(0, ios::beg);

        for (int iter = 0; iter < count; iter++) {
            fileIn  >> number;

            if (iter > count - 3) {
                sum += number;
            }
        }

        cout << "[~] Media ultimelor 2 numere: " << fixed << setprecision(2) << sum / 2 << endl;
        fileOut << "[~] Media ultimelor 2 numere: " << fixed << setprecision(2) << sum / 2 << endl;

        fileIn.close();
        fileOut.close();

    }


    return 0;

}