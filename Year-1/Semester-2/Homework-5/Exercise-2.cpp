#include "iostream"

using namespace std;

int main() {

    int count;
    int *pCount = &count;

    cout << "[+] Introduce numarul de mere: "; cin >> *pCount;
    cout << "[~] Primul copil are " << *pCount - 2 << " mere" << endl;
    cout << "[~] Al doilea copil are " << *pCount + 1 << " mere" << endl;


    return 0;

}