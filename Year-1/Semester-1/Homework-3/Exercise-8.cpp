#include "iostream"

using namespace std;

int main() {

    int height, age;
    char gender;

    cout << "[+] Introduce inaltimea: "; cin >> height;
    cout << "[+] Introduce varsta: "; cin >> age;
    cout << "[+] Introduce sexul: "; cin >> gender;

    if (gender == 'm' || gender == 'M') {
        cout << "[~] G. masculin: " << 50 + 0.75 * float(height - 150) + float(age - 20) / 4 << "kg";
    } else if (gender == 'f' || gender == 'F') {
        cout << "[~] G. feminin: " << (50 + 0.75 * float(height - 150) + float(age - 20) / 4) - 10 << "kg";
    } else {
        cout << "[~] Nu exista";
    }


    return 0;

}