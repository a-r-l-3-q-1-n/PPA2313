#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int x, y;
    int column;

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


    cout << endl << "[+] Introduce coloana: "; cin >> column;
    for (int xx = 0; xx < x; xx ++) {
        matrix[xx][column -1] += 15;
    }

    cout << endl << "[~] Elementele matricei modificate:" << endl;
    for (int xx = 0; xx < x; xx ++) {
        for (int yy = 0; yy < y; yy ++) {
            cout << setw(2) << matrix[xx][yy] << " ";
        }
        cout << endl;
    }


    return 0;

}