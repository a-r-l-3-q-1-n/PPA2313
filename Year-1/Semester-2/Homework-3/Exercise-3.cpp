#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-3/Data/data-3.in");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int n, k;
        int temp;

        cout << "[+] Introduce k: "; cin >> k;

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
         * Selection Sort Method
         */

        for (int x = 0; x < k; x++) {
            for (int y = x + 1; y < n; y++) {
                if (listOfNumbers[x] > listOfNumbers[y]) {
                    temp = listOfNumbers[x];

                    listOfNumbers[x] = listOfNumbers[y];
                    listOfNumbers[y] = temp;
                }
            }
        }

        for (int x = k; x < n - 1; x++) {
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