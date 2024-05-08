#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-3/Data/data-5.in");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int n = 0;
        int flag;
        char choice;
        string temp;

        cout << "[+] Crescator sau Descrescator (+/-): "; cin >> choice;

        string listOfWords[10];
        while (fileIn >> listOfWords[n]) {
            n++;
        }


        if (choice == '+') {

            cout << endl << "[~] Lista nesortata: ";
            for (int iter = 0; iter < n; iter++) {
                cout << listOfWords[iter] << " ";
            }


            /*
             * Bubble Sort Method (ASCENDING)
             */

            do {
                flag = 0;

                for (int iter = 0; iter < n - 1; iter++) {
                    if (listOfWords[iter][0] > listOfWords[iter + 1][0]) {
                        temp = listOfWords[iter];

                        listOfWords[iter] = listOfWords[iter + 1];
                        listOfWords[iter + 1] = temp;

                        flag = 1;
                    }
                }
            } while(flag);

            cout << endl << "[~] Lista sortata (cresc): ";
            for (int iter = 0; iter < n; iter++) {
                cout << listOfWords[iter] << " ";
            }

        } else if (choice == '-') {

            cout << endl << "[~] Lista nesortata: ";
            for (int iter = 0; iter < n; iter++) {
                cout << listOfWords[iter] << " ";
            }


            /*
             * Bubble Sort Method (DESCENDING)
             */

            do {
                flag = 0;

                for (int iter = 0; iter < n - 1; iter++) {
                    if (listOfWords[iter][0] < listOfWords[iter + 1][0]) {
                        temp = listOfWords[iter];

                        listOfWords[iter] = listOfWords[iter + 1];
                        listOfWords[iter + 1] = temp;

                        flag = 1;
                    }
                }
            } while(flag);

            cout << endl << "[~] Lista sortata (descr): ";
            for (int iter = 0; iter < n; iter++) {
                cout << listOfWords[iter] << " ";
            }

        } else {
            cout << endl << "[!] Nu exista asa optiune";
        }
    }


    return 0;

}