#include "iostream"

using namespace std;

int main() {
    
    int a, b, c;
    int size;

    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;
    cout << "C: "; cin >> c;

    cout << "[+] Cate numere doresti sa adaugi? "; cin >> size;
    cout << endl << endl;
    
    int list_of_numbers[size];

    for (int iter = 0; iter < size; iter++) {
        cout << "[+] Introduce numarul: "; cin >> list_of_numbers[iter];
    }
    
    cout << endl << endl;
    for (int iter = 0; iter < size; iter++) {
        if ((list_of_numbers[iter] % a == 0 || list_of_numbers[iter] % b == 0) && list_of_numbers[iter] < c) {
            cout << "[~] Au fost gasite: " << list_of_numbers[iter] << endl;
        }
    }


    return 0;

}