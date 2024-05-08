#include "iostream"

using namespace std;

struct Date {
    int day, month, year;
};

struct Child {
    char name[10];
    struct Date birthday;
};

int main() {

    int flag;

    Child temp = {};
    Child children[3] = {};

    for (int iter = 0; iter < 3; iter++) {
        cout << endl << "[~] Copilul " << iter + 1 << ":" << endl;

        cout << "[+] Numele: ";
        cin >> children[iter].name;

        cout << "[+] Data nasterii (d/m/y): ";
        cin >> children[iter].birthday.day >> children[iter].birthday.month >> children[iter].birthday.year;
    }

    do {
        flag = 0;

        for (int iter = 0; iter < 2; iter++) {
            if (
                    children[iter].birthday.day +
                    children[iter].birthday.month * 30 +
                    children[iter].birthday.year * 360 <

                    children[iter + 1].birthday.day +
                    children[iter + 1].birthday.month * 30 +
                    children[iter + 1].birthday.year * 360
            ) {
                temp = children[iter];

                children[iter] = children[iter + 1];
                children[iter + 1] = temp;

                flag = 1;
            }
        }
    } while(flag);

    cout << endl;
    cout << "[~] Cel mai mic: " << children[0].name << endl;
    cout << "[~] Cel mijlociu: " << children[1].name << endl;
    cout << "[~] Cel mai mare: " << children[2].name << endl;


    return 0;

}