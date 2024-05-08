#include "iostream"
#include "cstring"

using namespace std;

int main() {

    char word1[20], word2[20], word3[20], word4[20];

    cout << "[+] Introduce cuvantul 1: "; cin >> word1;
    cout << "[+] Introduce cuvantul 2: "; cin >> word2;
    cout << "[+] Introduce cuvantul 3: "; cin >> word3;
    cout << "[+] Introduce cuvantul 4: "; cin >> word4;

    if (strcmp(word1, word2) > 0) {
        swap(word1, word2);
    }

    if (strcmp(word2, word3) > 0) {
        swap(word2, word3);
    }

    if (strcmp(word3, word4) > 0) {
        swap(word3, word4);
    }

    if (strcmp(word1, word2) > 0) {
        swap(word1, word2);
    }

    if (strcmp(word2, word3) > 0) {
        swap(word2, word3);
    }

    if (strcmp(word1, word2) > 0) {
        swap(word1, word2);
    }



    cout << endl << "[~] Cuvintele in ordine alfabetica sunt:";
    cout << word1 << " ";
    cout << word2 << " ";
    cout << word3 << " ";
    cout << word4 << " ";


    return 0;

}