#include "iostream"

using namespace std;

int main() {

    int count;

    cout << "[+] Introduce numarul de mere: "; cin >> count;

    cout << "[~] Primul copil are " << count - 2 << " mere" << endl;
    cout << "[~] Al doilea copil are " << count + 1 << " mere" << endl;


    return 0;

}
