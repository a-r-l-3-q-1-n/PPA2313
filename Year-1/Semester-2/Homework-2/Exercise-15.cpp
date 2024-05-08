#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-15.in");
    ofstream fileOut("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-2/Data/data-15.out");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int countOfSpecChars = 0;
        char temp;

        while (fileIn.get(temp)) {
            if (int(temp) == 40 || int(temp) == 41 || int(temp) == 42 || int(temp) == 43 ||
                int(temp) == 45 || int(temp) == 47 || int(temp) == 91 || int(temp) == 93 ||
                int(temp) == 123 || int(temp) == 125) {
                countOfSpecChars++;
            }
        }

        cout << "[~] Numarul de caractere speciale: " << countOfSpecChars << endl;
        fileOut << "[~] Numarul de caractere speciale: " << countOfSpecChars << endl;

        fileIn.close();
        fileOut.close();

    }


    return 0;

}