#include "iostream"
#include "iomanip"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-5.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-5.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int n, remedial = 0;
        double number, max = 0, min = 10;

        fileIn >> n;

        for (int numbers = 0; numbers < n; numbers++) {
            fileIn >> number;

            if (number > max) {
                max = number;
            }
            if (number < min) {
                min = number;
            }
            if (number < 5) {
                remedial++;
            }
        }

        cout << "[~] Nota maxima: " << fixed << setprecision(2) << max << endl;
        cout << "[~] Nota minima: " << fixed << setprecision(2) << min << endl;
        cout << "[~] Corigenti:   " << fixed << setprecision(2) << remedial << endl;

        fileOut << "[~] Nota maxima: " << fixed << setprecision(2) << max << endl;
        fileOut << "[~] Nota minima: " << fixed << setprecision(2) << min << endl;
        fileOut << "[~] Corigenti:   " << fixed << setprecision(2) << remedial << endl;

        fileIn.close();
        fileOut.close();

    }


    return 0;

}