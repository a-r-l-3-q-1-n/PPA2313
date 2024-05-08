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
        int flag;
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
         * Bubble Sort Method (ASCENDING)
         */

        do {
            flag = 0;

            for (int iter = 0; iter < n - 1; iter++) {
                if (listOfChars[iter] > listOfChars[iter + 1]) {
                    temp = listOfChars[iter];

                    listOfChars[iter] = listOfChars[iter + 1];
                    listOfChars[iter + 1] = temp;

                    flag = 1;
                }
            }
        } while(flag);

        cout << endl << "[~] Lista sortata (cresc): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfChars[iter] << " ";
        }


        /*
         * Bubble Sort Method (DESCENDING)
         */

        do {
            flag = 0;

            for (int iter = 0; iter < n - 1; iter++) {
                if (listOfChars[iter] < listOfChars[iter + 1]) {
                    temp = listOfChars[iter];

                    listOfChars[iter] = listOfChars[iter + 1];
                    listOfChars[iter + 1] = temp;

                    flag = 1;
                }
            }
        } while(flag);

        cout << endl << "[~] Lista sortata (descr): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfChars[iter] << " ";
        }

    }


    return 0;

}