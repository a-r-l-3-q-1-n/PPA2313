#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-2.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-2.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int number;

        for (int iter = 0; iter < 3; iter++) {
            fileIn >> number;

            if (number % 2 == 0) {
                cout << "[~] " << number << " : Par" << endl;
                fileOut << "[~] " << number << " : Par" << endl;
            } else {
                cout << "[~] " << number << " : Impar" << endl;
                fileOut << "[~] " << number << " : Impar" << endl;
            }
        }

        fileIn.close();
        fileOut.close();

    }


    return 0;

}