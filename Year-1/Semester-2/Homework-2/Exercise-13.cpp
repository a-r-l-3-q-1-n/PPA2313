#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-13.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-13.out");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        char temp;
        int countOfNums = 0;

        while (fileIn.get(temp)) {
            if (int(temp) >= 48 && int(temp) <= 57) {
                countOfNums++;
            }
        }

        cout << "[~] Numarul de cifre este: " << countOfNums;
        fileOut << "[~] Numarul de cifre este: " << countOfNums;

        fileIn.close();
        fileOut.close();

    }


    return 0;

}