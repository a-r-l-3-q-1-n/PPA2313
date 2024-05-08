#include "iostream"

using namespace std;

int main() {

    int distance, time;

    cout << "[+] Input distance: "; cin >> distance;
    cout << "[+] Input time: "; cin >> time;

    cout << "[~] Viteza medie: " << (distance / (time / 60)) << "km/h" << endl;


    return 0;

}