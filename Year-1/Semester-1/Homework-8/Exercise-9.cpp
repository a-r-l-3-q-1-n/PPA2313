#include "iostream"

using namespace std;

int main() {

    int n;
    int nn = 0;
    int divisors = 1;


    cout << "[+] Introduce numarul de elemente: "; cin >> n;

    if (n <= 0 || n >= 1000) {
        cout << "[~] Nu respecta conditia";
        return 0;
    }

    int listOFNumbers[n];

    int aList[n];
    int bList[n];
    int cList[n];
    int dList[n];


    for (int iter = 0; iter < n; iter++) {
        cout << "[+] Populeaza lista: "; cin >> listOFNumbers[iter];
    }


    // a)
    cout << endl << endl << "a) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOFNumbers[iter] << " ";
    }

    for (int iter = 0; iter < n; iter++) {
        if (listOFNumbers[iter] % 2 == 0) {
            aList[nn] = listOFNumbers[iter];
            nn++;
        }
    }

    cout << endl << "a) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << aList[iter] << " ";
    }

    nn = 0;


    // b)
    cout << endl << endl << "b) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOFNumbers[iter] << " ";
    }

    for (int num = 0; num < n; num++) {

        for (int divisor = 1; divisor < (listOFNumbers[num] / 2 + 1); divisor++) {
            if (listOFNumbers[num] % divisor == 0) {
                divisors++;
            }
        }

        if (divisors == 2 || divisors == 4) {
            bList[nn] = listOFNumbers[num];
            nn++;
        }

        divisors = 1;
    }

    cout << endl << "b) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << bList[iter] << " ";
    }

    nn = 0;

    // c)
    cout << endl << endl << "c) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOFNumbers[iter] << " ";
    }

    for (int iter = 0; iter < n; iter++) {
        if (listOFNumbers[iter] % 3 == 0) {
            cList[nn] = listOFNumbers[iter];
            nn++;
        }
    }

    cout << endl << "c) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << cList[iter] << " ";
    }

    nn = 0;

    // d)
    cout << endl << endl << "d) Elementele initiale: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOFNumbers[iter] << " ";
    }

    for (int num = 0; num < n; num++) {

        for (int divisor = 1; divisor < (listOFNumbers[num] / 2 + 1); divisor++) {
            if (listOFNumbers[num] % divisor == 0) {
                divisors++;
            }

            if (divisors <= 4) {
                dList[nn] = listOFNumbers[num];
                nn++;
                break;
            }
        }

        divisors = 1;
    }

    cout << endl << "d) Elementele modificate: ";
    for (int iter = 0; iter < nn; iter++) {
        cout << dList[iter] << " ";
    }


    return 0;

}