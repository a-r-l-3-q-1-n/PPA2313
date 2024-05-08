#include "iostream"

using namespace std;

int main() {

    int school_1, school_2;
    int *pSchool_1 = &school_1, *pSchool_2 = &school_2;

    cout << "[+] Scoala 1: "; cin >> *pSchool_1;
    cout << "[+] Scoala 2: "; cin >> *pSchool_2;
    cout << "[~] Total: " << 7 + *pSchool_1 + *pSchool_2;


    return 0;

}