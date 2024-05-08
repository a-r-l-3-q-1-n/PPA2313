#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    int n, dimension = 3;

    int matrix[dimension][dimension];

    // a)
    n = 2;
    for (int x = 0; x < dimension; x ++) {
        for (int y = 0; y < dimension; y ++) {
            matrix[x][y] = n;
            n += 2;
        }
    }

    cout << endl << "[~] Matricea cu numere pare:" << endl;
    for (int x = 0; x < dimension; x ++) {
        for (int y = 0; y < dimension; y ++) {
            cout << setw(2) << matrix[x][y] << " ";
        }
        cout << endl;
    }

    // b)
    n = 1;
    for (int x = 0; x < dimension; x ++) {
        for (int y = 0; y < dimension; y ++) {
            matrix[x][y] = n;
            n += 2;
        }
    }

    cout << endl << "[~] Matricea cu numere impare:" << endl;
    for (int x = 0; x < dimension; x ++) {
        for (int y = 0; y < dimension; y ++) {
            cout << setw(2) << matrix[x][y] << " ";
        }
        cout << endl;
    }

    // c)
    n = 5;
    for (int x = 0; x < dimension; x ++) {
        for (int y = 0; y < dimension; y ++) {
            if (n % 5 == 0) {
                matrix[x][y] = n;
            }
            n += 5;
        }
    }

    cout << endl << "[~] Matricea cu numere divizibile cu 5:" << endl;
    for (int x = 0; x < dimension; x ++) {
        for (int y = 0; y < dimension; y ++) {
            cout << setw(2) << matrix[x][y] << " ";
        }
        cout << endl;
    }


    return 0;

}