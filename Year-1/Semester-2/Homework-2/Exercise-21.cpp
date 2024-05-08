#include "iostream"
#include "fstream"

using namespace std;

int main() {

    fstream fileIO;

    fileIO.open("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-21.in", ios::in);

    if (!fileIO.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int number;
        fileIO >> number;

        fileIO.close();
        fileIO.open("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-21.in", ios::app);

        if (number > 0 && number < 1000) {

            fileIO << endl;

            fileIO << endl << "[~] Triunghiul a)" << endl;
            for (int x = 1; x <= number; x++) {
                for (int y = 1; y < x; y++) {
                    fileIO << y;
                }
                fileIO << endl;
            }

            fileIO << endl << "[~] Triunghiul b)" << endl;
            for (int x = number; x >= 1; x--) {
                for (int y = 1; y < x; y++) {
                    fileIO << y;
                }
                fileIO << endl;
            }

            fileIO << endl << "[~] Triunghiul c)" << endl;
            for (int x = 1; x < number; x++) {
                for (int y = x; y >= 1; y--) {
                    fileIO << y;
                }
                fileIO << endl;
            }

            cout << "[~] Triunghiurile au fost adaugate" << endl;

            fileIO.close();

        } else {
            cout << "[!] Numarul este negativ sau mai mare ca 1000" << endl;
        }
    }


    return 0;

}