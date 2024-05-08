#include "iostream"

using namespace std;

int main() {

    int number;

    cout << "[+] Introduce un numar intreg: "; cin >> number;


    for (int iter=1; iter <= 10; iter++) {
        cout << iter << " * " << " = " << iter * number << endl;
    }


    return 0;

}