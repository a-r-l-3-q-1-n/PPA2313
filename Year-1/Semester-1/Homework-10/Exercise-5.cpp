#include "iostream"
#include "cstring"

using namespace std;

int main() {

    char phrase[80];
    char word1[20], word2[20], word3[20], word4[20];

    cout << "[+] Introduce cuvantul 1: "; cin >> word1;
    cout << "[+] Introduce cuvantul 2: "; cin >> word2;
    cout << "[+] Introduce cuvantul 3: "; cin >> word3;
    cout << "[+] Introduce cuvantul 4: "; cin >> word4;


    strcpy(phrase, word1); strcat(phrase, " ");
    strcat(phrase, word2); strcat(phrase, " ");
    strcat(phrase, word3); strcat(phrase, " ");
    strcat(phrase, word4); strcat(phrase, " ");

    cout << "[~] Fraza formata: " << phrase << endl;


    return 0;

}