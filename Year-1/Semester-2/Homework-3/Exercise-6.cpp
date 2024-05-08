#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ifstream fileIn("/home/ubuntu/Documents/MIgor-PPA2313/Year-1/Semester-2/Homework-3/Data/data-6.in");

    if (!fileIn.is_open()) {
        cout << "[!] Nu exista fisierul" << endl;
        return 0;
    } else {

        int x, y;
        int temp, flag;

        fileIn >> x >> y;

        int matrix[x][y];
        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                fileIn >> matrix[xx][yy];
            }
        }

        cout << endl << "[~] Matricea nesortata: " << endl;
        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                cout << matrix[xx][yy] << " ";
            }
            cout << endl;
        }


        /*
         * Bubble Sort Method (ASCENDING)
         */

        do {
            flag = 0;

            for (int xx = 0; xx < x - 1; xx++) {
                for (int yy = 0; yy < y; yy++) {
                    if (matrix[xx][yy] > matrix[xx + 1][yy]) {
                        temp = matrix[xx][yy];

                        matrix[xx][yy] = matrix[xx + 1][yy];
                        matrix[xx + 1][yy] = temp;

                        flag = 1;
                    }
                }
            }

        } while(flag);

        cout << endl << "[~] Matricea sortata (cresc): " << endl;
        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                cout << matrix[xx][yy] << " ";
            }
            cout << endl;
        }


        /*
         * Bubble Sort Method (DESCENDING)
         */

        do {
            flag = 0;

            for (int xx = 0; xx < x - 1; xx++) {
                for (int yy = 0; yy < y; yy++) {
                    if (matrix[xx][yy] < matrix[xx + 1][yy]) {
                        temp = matrix[xx][yy];

                        matrix[xx][yy] = matrix[xx + 1][yy];
                        matrix[xx + 1][yy] = temp;

                        flag = 1;
                    }
                }
            }

        } while(flag);

        cout << endl << "[~] Matricea sortata (descr): " << endl;
        for (int xx = 0; xx < x; xx++) {
            for (int yy = 0; yy < y; yy++) {
                cout << matrix[xx][yy] << " ";
            }
            cout << endl;
        }

    }


    return 0;

}