#include "iostream"


using namespace std;

int main() {

    int t1, t2, t3, t4, t5, t6, t7;
    int total;

    cout << "[+] Introduce ora: "; cin >> t1;
    cout << "[+] Introduce ora: "; cin >> t2;
    cout << "[+] Introduce ora: "; cin >> t3;
    cout << "[+] Introduce ora: "; cin >> t4;
    cout << "[+] Introduce ora: "; cin >> t5;
    cout << "[+] Introduce ora: "; cin >> t6;
    cout << "[+] Introduce ora: "; cin >> t7;

    total = t1 + t2 + t3 + t4 + t5 + t5 + t6;

    if (total < 20) {
        cout << "[~] Nu va fi pedepsit";
    } else {
        cout << "[~] Va fi pedepsit";
    }


    return 0;

}
