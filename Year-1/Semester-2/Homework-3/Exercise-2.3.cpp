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
         * Selection Sort Method (ASCENDING)
         */

        for (int x = 0; x < n - 1; x++) {
            for (int y = x + 1; y < n; y++) {
                if (listOfChars[x] > listOfChars[y]) {
                    temp = listOfChars[x];

                    listOfChars[x] = listOfChars[y];
                    listOfChars[y] = temp;
                }
            }
        }

        cout << endl << "[~] Lista sortata (cresc): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfChars[iter] << " ";
        }


        /*
         * Selection Sort Method (DESCENDING)
         */

        for (int x = 0; x < n - 1; x++) {
            for (int y = x + 1; y < n; y++) {
                if (listOfChars[x] < listOfChars[y]) {
                    temp = listOfChars[x];

                    listOfChars[x] = listOfChars[y];
                    listOfChars[y] = temp;
                }
            }
        }

        cout << endl << "[~] Lista sortata (descr): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfChars[iter] << " ";
        }

    }


    return 0;

}