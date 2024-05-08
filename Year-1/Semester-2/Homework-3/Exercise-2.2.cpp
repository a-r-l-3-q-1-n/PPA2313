#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-3/Data/data-2.in");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int n = 10;
        int pos;
        char temp;

        char listOfChars[n];
        for (int iter = 0; iter < n; iter++) {
            fileIn >> listOfChars[iter];
        }

        cout << endl << "[~] Lista nesortata: ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfChars[iter] << " ";
        }


        /*
         * Insertion Sort Method (ASCENDING)
         */

        for (int iter = 1; iter < n; iter++) {
            temp = listOfChars[iter];
            pos = iter - 1;

            while (temp < listOfChars[pos] && pos >= 0) {
                listOfChars[pos + 1] = listOfChars[pos];
                pos--;
            }
            listOfChars[pos + 1] = temp;
        }

        cout << endl << "[~] Lista sortata (cresc): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfChars[iter] << " ";
        }


        /*
         * Insertion Sort Method (DESCENDING)
         */

        for (int iter = 1; iter < n; iter++) {
            temp = listOfChars[iter];
            pos = iter - 1;

            while (temp > listOfChars[pos] && pos >= 0) {
                listOfChars[pos + 1] = listOfChars[pos];
                pos--;
            }
            listOfChars[pos + 1] = temp;
        }

        cout << endl << "[~] Lista sortata (descr): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfChars[iter] << " ";
        }

    }


    return 0;

}