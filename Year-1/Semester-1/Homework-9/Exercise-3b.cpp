#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    int x = 3, y = 3;

    int matrix[x][y];
    int newMatrix[x + 1][y];

    cout << endl << "[+] Populeaza matricea: " << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << "[" << xx << "][" << yy << "] = "; cin >> matrix[xx][yy];
        }
    }

    cout << endl << "[~] Elementele matricei:" << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << matrix[xx][yy] << " ";
        }
        cout << endl;
    }

    // b)
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
        newMatrix[xx][yy] = matrix[xx][yy];
        }
    }

    for (int yy = 0; yy < y; yy ++) {
        int sumFromColumn = 0;

        for (int xx = 0; xx < x; xx ++) {
            sumFromColumn += matrix[xx][yy];
        }
        newMatrix[x][yy] = sumFromColumn;
    }

    cout << endl << "[~] Matricea cu suma de pe fiecare coloana:" << endl;
    for (int xx = 0; xx < x+1; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << newMatrix[xx][yy] << " ";
        }
        cout << endl;
    }


    return 0;

}