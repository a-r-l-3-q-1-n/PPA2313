#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce coloane: "; cin >> x;
    cout << "[+] Introduce linii: "; cin >> y;

    int matrix[x][y];

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

    int idxOfLine;
    int sumMax = 0;

    for (int xx = 0; xx < x; xx ++) {
        int sumFromLine = 0;
        for (int yy = 0; yy < y; yy ++) {
            sumFromLine += matrix[xx][yy];
        }

        if (sumFromLine > sumMax) {
            sumMax = sumFromLine;
            idxOfLine = xx;
        }
    }

    cout << endl << "[~] Linia suma elementelor carora este maxima:" << endl;
    for (int yy = 0; yy < y; yy ++) {
        cout << setw(2) << matrix[idxOfLine][yy] << " ";
    }


    return 0;

}