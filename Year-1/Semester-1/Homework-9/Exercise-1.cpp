#include "iostream"

using namespace std;

int main() {

    int x, y;
    int a, b;

    cout << "[+] Introduce coloane: "; cin >> x;
    cout << "[+] Introduce linii: "; cin >> y;

    cout << "[+] Introduce a: "; cin >> a;
    cout << "[+] Introduce b: "; cin >> b;

    if (y > 10) {
        cout << "[!] Nu respecta conditia.";
        return 0;
    }

    int matrix[x][y];

    cout << endl << "[+] Populeaza matricea: " << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << "[" << xx << "][" << yy << "] = "; cin >> matrix[xx][yy];
        }
    }

    // a)
    cout << endl << "[~] Elementele matricei:" << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << matrix[xx][yy] << " ";
        }
        cout << endl;
    }

    // b)
    int evenNumbers = 0;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            if (matrix[xx][yy] % 2 == 0 && matrix[xx][yy] < 10) {
                evenNumbers++;
            }
        }
    }
    cout << endl << "[~] Numarul de elementele pare (x < 10): " << evenNumbers << endl;

    // c)
    int oneDigitNumbers = 0;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            if (matrix[xx][yy] >= 0 && matrix[xx][yy] < 10) {
                oneDigitNumbers++;
            }
        }
    }
    cout << endl << "[~] Numarul de elementele dintr-o cifra: " << oneDigitNumbers << endl;

    // d)
    int maxNumber = INT_MIN;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            if (matrix[xx][yy] > maxNumber) {
                maxNumber = matrix[xx][yy];
            }
        }
    }

    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            if (matrix[xx][yy] % 3 == 0) {
                matrix[xx][yy] = maxNumber * 3;
            }
        }
    }

    cout << endl << "[~] Elementele modificate: " << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << matrix[xx][yy] << " ";
        }
        cout << endl;
    }

    // e)
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            if (matrix[xx][yy] % 2 == 0) {
                matrix[xx][yy] = maxNumber * 2;
            }
        }
    }

    cout << endl << "[~] Elementele modificate: " << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << matrix[xx][yy] << " ";
        }
        cout << endl;
    }

    // f)
    cout << "[~] Elementul de pe [2][1]: " << matrix[2][1] << endl;

    // g)
    cout << "[~] Elementul de pe [1][2]: " << matrix[1][2] << endl;

    // h)
    cout << "[~] Elementul de pe [a][b]: " << matrix[a][b] << endl;


    return 0;

}