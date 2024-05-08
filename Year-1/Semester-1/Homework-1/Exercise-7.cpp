#include "iostream"

using namespace std;

int main() {

    int age, weight, height;

    cout << "[+] Varsta Mariei: "; cin >> age;

    weight = 2 * age + 8;
    height = 5 * age + 80;

    cout << "[~] Greutatea medie pentru Maria: " << weight << endl;
    cout << "[~] Inaltimea medie pentru Maria: " << height << endl;


    return 0;

}