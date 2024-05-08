#include "iostream"
#include "cstring"

using namespace std;

int main() {

    char array[100];

    int number;
    bool foundEvenNumber = false;

    cout << "[+] Introduce caractere: "; gets(array);



    for (int iter = 0; iter < strlen(array); ++iter) {
        number = number * 10 + (array[iter] - '0');

        if (number % 2 == 0) {
            foundEvenNumber = true;
            break;
        }
    }

    if (foundEvenNumber) {
        cout << "[~] A fost gasit numar par" << endl;
    } else {
        cout << "[~] Nu a fost gasit numar par" << endl;
    }


    return 0;

}