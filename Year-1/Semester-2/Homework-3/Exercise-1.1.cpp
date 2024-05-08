#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-3/Data/data-1.in");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int n;
        int temp, flag;

        fileIn >> n;

        int listOfNumbers[n];
        for (int iter = 0; iter < n; iter++) {
            fileIn >> listOfNumbers[iter];
        }

        cout << endl << "[~] Lista nesortata: ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfNumbers[iter] << " ";
        }


        /*
         * Bubble Sort Method (ASCENDING)
         */

        do {
            flag = 0;

            for (int iter = 0; iter < n - 1; iter++) {
                if (listOfNumbers[iter] > listOfNumbers[iter + 1]) {
                    temp = listOfNumbers[iter];

                    listOfNumbers[iter] = listOfNumbers[iter + 1];
                    listOfNumbers[iter + 1] = temp;

                    flag = 1;
                }
            }
        } while(flag);

        cout << endl << "[~] Lista sortata (cresc): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfNumbers[iter] << " ";
        }


        /*
         * Bubble Sort Method (DESCENDING)
         */

        do {
            flag = 0;

            for (int iter = 0; iter < n - 1; iter++) {
                if (listOfNumbers[iter] < listOfNumbers[iter + 1]) {
                    temp = listOfNumbers[iter];

                    listOfNumbers[iter] = listOfNumbers[iter + 1];
                    listOfNumbers[iter + 1] = temp;

                    flag = 1;
                }
            }
        } while(flag);

        cout << endl << "[~] Lista sortata (descr): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfNumbers[iter] << " ";
        }

    }


    return 0;

}