#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-16.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-16.out");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int temp;

        cout << "[~] Numerele pare sunt: ";
        fileOut << "[~] Numerele pare sunt: ";
        while (fileIn >> temp) {
            if (temp % 2 == 0) {
                cout << temp << " ";
                fileOut << temp << " ";
            }
        }

        fileIn.close();
        fileOut.close();

    }


    return 0;

}