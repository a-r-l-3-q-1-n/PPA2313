#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce coloane: "; cin >> x;
    cout << "[+] Introduce linii: "; cin >> y;

    int matrix[x][y];
    int newMatrix[x][y];

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

    // a)
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            if (xx == yy) {
                newMatrix[xx][yy] = matrix[xx][yy] + 5;
            } else {
                newMatrix[xx][yy] = matrix[xx][yy];
            }
        }
    }

    cout << endl << "[~] Matricea cu diagonala + 5:" << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << newMatrix[xx][yy] << " ";
        }
    cout << endl;
    }


    return 0;

}