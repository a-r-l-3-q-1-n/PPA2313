#include "iostream"
#include "cstring"

using namespace std;

struct Phone {
    char model[10], color[10];
    int year, price;
};

int main() {

    int count;

    cout << "[+] Introduce numarul de telefoane: "; cin >> count;

    if (count >= 10) {

        int option;
        int priceMin, priceMax;

        char model[10];

        Phone temp = {};
        Phone phones[count];

        for (int iter = 0; iter < count; iter++) {
            cout << endl;
            cout << "[+] Introduce datele pentru telefonul " << iter + 1 << ":" << endl;
            cout << "[+] Modelul   : "; cin >> phones[iter].model;
            cout << "[+] Culoarea  : "; cin >> phones[iter].color;
            cout << "[+] Anul prod.: "; cin >> phones[iter].year;
            cout << "[+] Pretul    : "; cin >> phones[iter].price;
            cout << endl;
        }

        while (true) {
            cout << endl << "[+] Introduce optiunea: "; cin >> option;

            if (option == 1) {

                cout << endl << endl << "[~] Afisarea tuturor telefoane:" << endl;
                for (int iter = 0; iter < count; iter++) {
                    cout << "[" << iter + 1 << "] Modelul   : " << phones[iter].model << endl;
                    cout << "[" << iter + 1 << "] Culoarea  : " << phones[iter].color << endl;
                    cout << "[" << iter + 1 << "] Anul prod.: " << phones[iter].year << endl;
                    cout << "[" << iter + 1 << "] Pretul    : " << phones[iter].price << endl;
                    cout << endl;
                }

            } else if (option == 2) {

                for (int x = 0; x < count - 1; x++) {
                    for (int y = x + 1; y < count; y++) {
                        if (phones[x].year > phones[y].year) {
                            temp = phones[x];

                            phones[x] = phones[y];
                            phones[y] = temp;
                        }
                    }
                }

                cout << endl << "[~] Afisarea telefonului cu cel mai mare an:" << endl;
                cout << "[1] Modelul   : " << phones[0].model << endl;
                cout << "[1] Culoarea  : " << phones[0].color << endl;
                cout << "[1] Anul prod.: " << phones[0].year << endl;
                cout << "[1] Pretul    : " << phones[0].price << endl;
                cout << endl;


            } else if (option == 3) {

                int pos;

                for (int iter = 1; iter < count; iter++) {
                    temp = phones[iter];
                    pos = iter - 1;

                    while (temp.price > phones[pos].price && pos >= 0) {
                        phones[pos + 1] = phones[pos];
                        pos--;
                    }
                    phones[pos + 1] = temp;
                }

                cout << endl << "[~] Afisarea telefoanelor dupa pret (mare -> mic):" << endl;
                for (int iter = 0; iter < count; iter++) {
                    cout << "[" << iter + 1 << "] Modelul   : " << phones[iter].model << endl;
                    cout << "[" << iter + 1 << "] Culoarea  : " << phones[iter].color << endl;
                    cout << "[" << iter + 1 << "] Anul prod.: " << phones[iter].year << endl;
                    cout << "[" << iter + 1 << "] Pretul    : " << phones[iter].price << endl;
                    cout << endl;
                }

            } else if (option == 4) {

                cout << "[+] Introduce modelul: "; cin >> model;

                cout << endl << "Au fost gasite urmatoarele rezultate: " << endl;

                for (int iter = 0; iter < count; iter++) {
                    if (strcmp(phones[iter].model, model) == 0) {
                        cout << "[~] Modelul   : " << phones[iter].model << endl;
                        cout << "[~] Culoarea  : " << phones[iter].color << endl;
                        cout << "[~] Anul prod.: " << phones[iter].year << endl;
                        cout << "[~] Pretul    : " << phones[iter].price << endl;
                        cout << endl;
                    }
                }

            } else if (option == 5) {

                cout << "[+] Introduce pretul minimal: "; cin >> priceMin;
                cout << "[+] Introduce pretul maximal: "; cin >> priceMax;

                cout << endl << "Au fost gasite urmatoarele rezultate: " << endl;

                for (int iter = 0; iter < count; iter++) {
                    if (phones[iter].price >= priceMin && phones[iter].price <= priceMax) {
                        cout << "[~] Modelul   : " << phones[iter].model << endl;
                        cout << "[~] Culoarea  : " << phones[iter].color << endl;
                        cout << "[~] Anul prod.: " << phones[iter].year << endl;
                        cout << "[~] Pretul    : " << phones[iter].price << endl;
                        cout << endl;
                    }
                }

            } else if (option == 6) {

                for (int x = 0; x < count - 1; x++) {
                    for (int y = x + 1; y < count; y++) {
                        if (phones[x].year < phones[y].year) {
                            temp = phones[x];

                            phones[x] = phones[y];
                            phones[y] = temp;
                        }
                    }
                }

                cout << endl << "[~] Afisarea telefoanelor dupa an (descrescator):" << endl;
                for (int iter = 0; iter < count; iter++) {
                    cout << "[" << iter + 1 << "] Modelul   : " << phones[iter].model << endl;
                    cout << "[" << iter + 1 << "] Culoarea  : " << phones[iter].color << endl;
                    cout << "[" << iter + 1 << "] Anul prod.: " << phones[iter].year << endl;
                    cout << "[" << iter + 1 << "] Pretul    : " << phones[iter].price << endl;
                    cout << endl;
                }

            } else if (option == 7) {

                for (int x = 0; x < count - 1; x++) {
                    for (int y = x + 1; y < count; y++) {
                        if (phones[x].model > phones[y].model) {
                            temp = phones[x];

                            phones[x] = phones[y];
                            phones[y] = temp;
                        }
                    }
                }

                cout << endl << "[~] Afisarea telefoanelor dupa model (crescator):" << endl;
                for (int iter = 0; iter < count; iter++) {
                    cout << "[" << iter + 1 << "] Modelul   : " << phones[iter].model << endl;
                    cout << "[" << iter + 1 << "] Culoarea  : " << phones[iter].color << endl;
                    cout << "[" << iter + 1 << "] Anul prod.: " << phones[iter].year << endl;
                    cout << "[" << iter + 1 << "] Pretul    : " << phones[iter].price << endl;
                    cout << endl;
                }

            } else if (option == 0) {

                cout << endl << "[~] Exit" << endl;
                break;

            } else {

                cout << endl << "[!] Alege optiunea din intervalul 1-7 sau 0" << endl;

            }
        }

    } else {

        cout << endl << "[!] Trebuie sa fie minim 10 telefoane" << endl;

    }


    return 0;

}