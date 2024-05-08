#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-10.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-1/Data/data-10.out");


    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int upper = 0;
        char temp;

        while (fileIn >> temp) {
            if ((int)temp > 65 && (int)temp < 90) {
                upper++;
            }
        }

        cout << "[~] Numarul de majuscule: " << upper << endl;
        fileOut << "[~] Numarul de majuscule: " << upper << endl;

        fileIn.close();
        fileOut.close();

    }


    return 0;

}