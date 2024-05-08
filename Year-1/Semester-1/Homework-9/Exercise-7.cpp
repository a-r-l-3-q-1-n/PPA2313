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

    int idxOfColumn;
    int sumMax = 0;

    for (int yy = 0; yy < y; yy ++) {
        int sumFromColumn = 0;
        for (int xx = 0; xx < x; xx ++) {
            sumFromColumn += matrix[xx][yy];
        }

        if (sumFromColumn > sumMax) {
            sumMax = sumFromColumn;
            idxOfColumn = yy;
        }
    }

    cout << endl << "[~] Linia suma elementelor carora este maxima:" << endl;
    for (int xx = 0; xx < x; xx ++) {
        cout << setw(2) << matrix[xx][idxOfColumn] << endl;
    }


    return 0;

}