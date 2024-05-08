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
        int temp;

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
         * Selection Sort Method (ASCENDING)
         */

        for (int x = 0; x < n - 1; x++) {
            for (int y = x + 1; y < n; y++) {
                if (listOfNumbers[x] > listOfNumbers[y]) {
                    temp = listOfNumbers[x];

                    listOfNumbers[x] = listOfNumbers[y];
                    listOfNumbers[y] = temp;
                }
            }
        }

        cout << endl << "[~] Lista sortata (cresc): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfNumbers[iter] << " ";
        }


        /*
         * Selection Sort Method (DESCENDING)
         */

        for (int x = 0; x < n - 1; x++) {
            for (int y = x + 1; y < n; y++) {
                if (listOfNumbers[x] < listOfNumbers[y]) {
                    temp = listOfNumbers[x];

                    listOfNumbers[x] = listOfNumbers[y];
                    listOfNumbers[y] = temp;
                }
            }
        }

        cout << endl << "[~] Lista sortata (descr): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfNumbers[iter] << " ";
        }

    }


    return 0;

}