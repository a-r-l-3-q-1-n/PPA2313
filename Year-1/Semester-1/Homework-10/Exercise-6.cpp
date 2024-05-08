#include "iostream"
#include "cstring"

using namespace std;

int main() {

    char newWord[80];
    char word1[20], word2[20], word3[20], word4[20];

    cout << "[+] Introduce cuvantul 1: "; cin >> word1;
    cout << "[+] Introduce cuvantul 2: "; cin >> word2;
    cout << "[+] Introduce cuvantul 3: "; cin >> word3;
    cout << "[+] Introduce cuvantul 4: "; cin >> word4;

    strncpy(newWord, word1, 2);
    newWord[2] = '\0';

    strncat(newWord, &word2[0], 1);
    strncat(newWord, word3, 3);
    strncat(newWord, word4, strlen(word4) / 2);

    newWord[strlen(newWord)] = '\0';

    cout << endl;
    cout << "[~] Cuvantul format: " << newWord << endl;


    return 0;

}