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
        int temp, pos;

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
         * Insertion Sort Method (ASCENDING)
         */

        for (int iter = 1; iter < n; iter++) {
            temp = listOfNumbers[iter];
            pos = iter - 1;

            while (temp < listOfNumbers[pos] && pos >= 0) {
                listOfNumbers[pos + 1] = listOfNumbers[pos];
                pos--;
            }
            listOfNumbers[pos + 1] = temp;
        }

        cout << endl << "[~] Lista sortata (cresc): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfNumbers[iter] << " ";
        }


        /*
         * Insertion Sort Method (DESCENDING)
         */

        for (int iter = 1; iter < n; iter++) {
            temp = listOfNumbers[iter];
            pos = iter - 1;

            while (temp > listOfNumbers[pos] && pos >= 0) {
                listOfNumbers[pos + 1] = listOfNumbers[pos];
                pos--;
            }
            listOfNumbers[pos + 1] = temp;
        }

        cout << endl << "[~] Lista sortata (descr): ";
        for (int iter = 0; iter < n; iter++) {
            cout << listOfNumbers[iter] << " ";
        }

    }


    return 0;

}