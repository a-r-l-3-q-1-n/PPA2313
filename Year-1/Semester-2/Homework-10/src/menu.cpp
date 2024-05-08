#include "../headers/includes.h"
#include "../headers/drone.h"


void banner() {
    system("cls");

    cout << "   ___                     ___  ___   \n";
    cout << "  / _ \\_______  ___ ___   / _ \\/ _ )\n";
    cout << " / // / __/ _ \\/ _ / -_) / // / _  | \n";
    cout << "/____/_/  \\___/_//_\\__/ /____/____/ \n";
    cout << "\n";
    cout << "+---+--------------------------------+\n";
    cout << "| 1 | Afisare                        |\n";
    cout << "| 2 | Adaugare                       |\n";
    cout << "| 3 | Excludere                      |\n";
    cout << "| 4 | Sortare                        |\n";
    cout << "| 5 | Cautare                        |\n";
    cout << "| 6 | Filtrare                       |\n";
    cout << "| 7 | Salvare                        |\n";
    cout << "| 0 | Iesire din program             |\n";
    cout << "+---+--------------------------------+\n";
    cout << "\n";
}

void optionDisplay(const Drone *database, const int length) {
    system("cls");

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";
    cout << "| Nr. | PRODUCATOR |      MODEL      | TIMP | DIST |  PRET  | RATING |      DESCRIEREA      |\n";
    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    for (int iter = 0; iter < length; iter++) {
        cout << "| " << setw(3)  << left << iter + 1                   << " ";
        cout << "| " << setw(10) << left << database[iter].producer    << " ";
        cout << "| " << setw(15) << left << database[iter].model       << " ";
        cout << "| " << setw(4)  << left << database[iter].flightTime  << " ";
        cout << "| " << setw(4)  << left << database[iter].flightDist  << " ";
        cout << "| " << setw(6)  << left << database[iter].price       << " ";
        cout << "| " << setw(6)  << left << database[iter].rating      << " ";
        cout << "| " << setw(20) << left << database[iter].description << " ";
        cout << "|\n";
    }

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";
}

void optionAppend(Drone *database, int &length) {
    system("cls");

    int count;
    cout << "[+] Nr. drone de adaugat: "; cin >> count;

    if (count <= MAX_DATABASE_LENGTH) {

        string producer;
        string model;

        int flightTime;
        int flightDist;

        int price;
        double rating;
        string description;

        for (int iter = length; iter < (length + count); iter++) {
            cout << "+-----------------------------------+\n";
            cout << "| Drona " << iter + 1 << "/" << (length + count) << "\n";
            cout << "+------------+----------------------+\n";
            cout << "| PRODUCATOR | "; cin >> producer; database[iter].producer = producer;
            cout << "| MODEL      | "; cin >> model; database[iter].model = model;
            cout << "| TIMP       | "; cin >> flightTime; database[iter].flightTime = flightTime;
            cout << "| DIST       | "; cin >> flightDist; database[iter].flightDist = flightDist;
            cout << "| PRET       | "; cin >> price; database[iter].price = price;
            cout << "| RATING     | "; cin >> rating; database[iter].rating = rating;
            cout << "| DESCRIEREA | "; cin >> description; database[iter].description = description;
            cout << "+------------+----------------------+\n";
            cout << "\n";

        }
        length += count;
    } else {
        cout << "[!] Baza de date este limitata. Nu mai poti adauga :(\n";
    }
}

void optionDelete(Drone *database, int &length) {
    system("cls");

    optionDisplay(database, length);

    char option;
    int row;

    while (true) {
        cout << "[+] Randul care trebuie exclus: "; cin >> row;
        row--;

        if (row < 0 || row >= length) {
            cout << "[!] Rand este introdus incorect\n" << endl;
            sleep(2); system("cls");
        } else {
            for (int iter = row; iter < length - 1; ++iter) {
                database[iter] = database[iter + 1];
            }
            length--;

            cout << "[~] Randul " << row + 1 << " a fost exclus\n";
            sleep(2); system("cls");
        }

        optionDisplay(database, length);

        cout << "[~] Continui sa excluzi? (y/n): "; cin >> option;
        if (option == 'n') {
            break;
        }
    }
}

void optionSaveData(const Drone *database, const int length, const string& filename) {
    char option;

    while (true) {
        system("cls");

        cout << "[+] Sigur ca vrei sa salvezi dronele? (y/n): "; cin >> option;

        if (option == 'y') {
            ofstream file("../out/" + filename, ios::trunc);

            file << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";
            file << "| Nr. | PRODUCATOR |      MODEL      | TIMP | DIST |  PRET  | RATING |      DESCRIEREA      |\n";
            file << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

            for (int iter = 0; iter < length; iter++) {
                file << "| " << setw(3)  << left << iter + 1                   << " ";
                file << "| " << setw(10) << left << database[iter].producer    << " ";
                file << "| " << setw(15) << left << database[iter].model       << " ";
                file << "| " << setw(4)  << left << database[iter].flightTime  << " ";
                file << "| " << setw(4)  << left << database[iter].flightDist  << " ";
                file << "| " << setw(6)  << left << database[iter].price       << " ";
                file << "| " << setw(6)  << left << database[iter].rating      << " ";
                file << "| " << setw(20) << left << database[iter].description << " ";
                file << "|\n";
            }

            file << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

            cout << "[+] Dronele au fost salvate in ../out/" + filename;
            sleep(2);
            return;
        }
        if (option == 'n') {
            return;
        }

        cout << "[!] Nu exista optiunea data";
        sleep(2);
    }
}

int optionExit() {
    cout << "[~] Bye-Bye...";
    return 0;
}

void optionInvalid() {
    cout << "[!] Nu exista optiunea data";
    sleep(2); system("cls");
}


/*
 * Sort-By Functions
 */


void sortByFlightTime(Drone *database, const int length) {
    int option;

    while (true) {
        system("cls");

        cout << "+---+----------------+\n";
        cout << "| 1 | Crescator      |\n";
        cout << "| 2 | Descrescator   |\n";
        cout << "| 0 | Inapoi         |\n";
        cout << "+---+----------------+\n";
        cout << " >_  "; cin >> option;

        if (option == 1) {
            for (int iter = 1; iter < length; iter++) {
                int pos = iter - 1;
                const Drone temp = database[iter];

                while (temp.flightTime < database[pos].flightTime && pos >= 0) {
                    database[pos + 1] = database[pos];
                    pos--;
                }
                database[pos + 1] = temp;
            }
            optionDisplay(database, length);

            cout << "\nApasa o tasta pentru iesire...\n";
            getch();
        } else if (option == 2) {
            for (int iter = 1; iter < length; iter++) {
                int pos = iter - 1;
                const Drone temp = database[iter];

                while (temp.flightTime > database[pos].flightTime && pos >= 0) {
                    database[pos + 1] = database[pos];
                    pos--;
                }
                database[pos + 1] = temp;
            }
            optionDisplay(database, length);

            cout << "\nApasa o tasta pentru iesire...\n";
            getch();
        } else if (option == 0) {
            return;
        } else {
            optionInvalid();
        }
    }
}

void sortByFlightDist(Drone *database, const int length) {
    int option;

    while (true) {
        system("cls");

        cout << "+---+----------------+\n";
        cout << "| 1 | Crescator      |\n";
        cout << "| 2 | Descrescator   |\n";
        cout << "| 0 | Inapoi         |\n";
        cout << "+---+----------------+\n";
        cout << " >_  "; cin >> option;

        if (option == 1) {
            for (int iter = 1; iter < length; iter++) {
                int pos = iter - 1;
                const Drone temp = database[iter];

                while (temp.flightDist < database[pos].flightDist && pos >= 0) {
                    database[pos + 1] = database[pos];
                    pos--;
                }
                database[pos + 1] = temp;
            }
            optionDisplay(database, length);

            cout << "\nApasa o tasta pentru iesire...\n";
            getch();
        } else if (option == 2) {
            for (int iter = 1; iter < length; iter++) {
                int pos = iter - 1;
                const Drone temp = database[iter];

                while (temp.flightDist > database[pos].flightDist && pos >= 0) {
                    database[pos + 1] = database[pos];
                    pos--;
                }
                database[pos + 1] = temp;
            }
            optionDisplay(database, length);

            cout << "\nApasa o tasta pentru iesire...\n";
            getch();
        } else if (option == 0) {
            return;
        } else {
            optionInvalid();
        }
    }
}

void sortByPrice(Drone *database, const int length) {
    int option;

    while (true) {
        system("cls");

        cout << "+---+----------------+\n";
        cout << "| 1 | Crescator      |\n";
        cout << "| 2 | Descrescator   |\n";
        cout << "| 0 | Inapoi         |\n";
        cout << "+---+----------------+\n";
        cout << " >_  "; cin >> option;

        if (option == 1) {
            for (int iter = 1; iter < length; iter++) {
                int pos = iter - 1;
                const Drone temp = database[iter];

                while (temp.price < database[pos].price && pos >= 0) {
                    database[pos + 1] = database[pos];
                    pos--;
                }
                database[pos + 1] = temp;
            }
            optionDisplay(database, length);

            cout << "\nApasa o tasta pentru iesire...\n";
            getch();
        } else if (option == 2) {
            for (int iter = 1; iter < length; iter++) {
                int pos = iter - 1;
                const Drone temp = database[iter];

                while (temp.price > database[pos].price && pos >= 0) {
                    database[pos + 1] = database[pos];
                    pos--;
                }
                database[pos + 1] = temp;
            }
            optionDisplay(database, length);

            cout << "\nApasa o tasta pentru iesire...\n";
            getch();
        } else if (option == 0) {
            return;
        } else {
            optionInvalid();
        }
    }
}

void sortByRating(Drone *database, const int length) {
    int option;

    while (true) {
        system("cls");

        cout << "+---+----------------+\n";
        cout << "| 1 | Crescator      |\n";
        cout << "| 2 | Descrescator   |\n";
        cout << "| 0 | Inapoi         |\n";
        cout << "+---+----------------+\n";
        cout << " >_  "; cin >> option;

        if (option == 1) {
            for (int iter = 1; iter < length; iter++) {
                int pos = iter - 1;
                const Drone temp = database[iter];

                while (temp.rating < database[pos].rating && pos >= 0) {
                    database[pos + 1] = database[pos];
                    pos--;
                }
                database[pos + 1] = temp;
            }
            optionDisplay(database, length);

            cout << "\nApasa o tasta pentru iesire...\n";
            getch();
        } else if (option == 2) {
            for (int iter = 1; iter < length; iter++) {
                int pos = iter - 1;
                const Drone temp = database[iter];

                while (temp.rating > database[pos].rating && pos >= 0) {
                    database[pos + 1] = database[pos];
                    pos--;
                }
                database[pos + 1] = temp;
            }
            optionDisplay(database, length);

            cout << "\nApasa o tasta pentru iesire...\n";
            getch();
        } else if (option == 0) {
            return;
        } else {
            optionInvalid();
        }
    }

}

void optionSortBy(Drone *database, const int length) {
    int option;

    while (true) {
        system("cls");

        cout << "+----------------+\n";
        cout << "|  Sortare dupa  |\n";
        cout << "+---+------------+\n";
        cout << "| 1 | Timp       |\n";
        cout << "| 2 | Distanta   |\n";
        cout << "| 3 | Pret       |\n";
        cout << "| 4 | Rating     |\n";
        cout << "| 0 | Iesire     |\n";
        cout << "+---+------------+\n";
        cout << " >_  "; cin >> option;

        switch (option) {
            case 1:
                sortByFlightTime(database, length);
                break;
            case 2:
                sortByFlightDist(database, length);
                break;
            case 3:
                sortByPrice(database, length);
                break;
            case 4:
                sortByRating(database, length);
                break;
            case 0:
                return;
            default:
                optionInvalid();
        }
    }
}


/*
 * Search-By Functions
 */


void searchByProducer(const Drone *database, const int length) {
    string producer;

    cout << "[+] Introduce producatorul: "; cin >> producer;

    system("cls");

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";
    cout << "| Nr. | PRODUCATOR |      MODEL      | TIMP | DIST |  PRET  | RATING |      DESCRIEREA      |\n";
    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    for (int iter = 0; iter < length; iter++) {
        if (database[iter].producer == producer) {
            cout << "| " << setw(3)  << left << iter + 1                   << " ";
            cout << "| " << setw(10) << left << database[iter].producer    << " ";
            cout << "| " << setw(15) << left << database[iter].model       << " ";
            cout << "| " << setw(4)  << left << database[iter].flightTime  << " ";
            cout << "| " << setw(4)  << left << database[iter].flightDist  << " ";
            cout << "| " << setw(6)  << left << database[iter].price       << " ";
            cout << "| " << setw(6)  << left << database[iter].rating      << " ";
            cout << "| " << setw(20) << left << database[iter].description << " ";
            cout << "|\n";
        }
    }

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    cout << "\nApasa o tasta pentru iesire...\n";
    getch();
}

void searchByModel(const Drone *database, const int length) {
    string model;

    cout << "[+] Introduce modelul: "; cin >> model;

    system("cls");

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";
    cout << "| Nr. | PRODUCATOR |      MODEL      | TIMP | DIST |  PRET  | RATING |      DESCRIEREA      |\n";
    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    for (int iter = 0; iter < length; iter++) {
        if (database[iter].model == model) {
            cout << "| " << setw(3)  << left << iter + 1                   << " ";
            cout << "| " << setw(10) << left << database[iter].producer    << " ";
            cout << "| " << setw(15) << left << database[iter].model       << " ";
            cout << "| " << setw(4)  << left << database[iter].flightTime  << " ";
            cout << "| " << setw(4)  << left << database[iter].flightDist  << " ";
            cout << "| " << setw(6)  << left << database[iter].price       << " ";
            cout << "| " << setw(6)  << left << database[iter].rating      << " ";
            cout << "| " << setw(20) << left << database[iter].description << " ";
            cout << "|\n";
        }
    }

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    cout << "\nApasa o tasta pentru iesire...\n";
    getch();
}

void optionSearchBy(const Drone *database, const int length) {
    int option;

    while (true) {
        system("cls");

        cout << "+----------------+\n";
        cout << "|  Cautare dupa  |\n";
        cout << "+---+------------+\n";
        cout << "| 1 | Producator |\n";
        cout << "| 2 | Model      |\n";
        cout << "| 0 | Iesire     |\n";
        cout << "+---+------------+\n";
        cout << " >_  "; cin >> option;

        switch (option) {
            case 1:
                searchByProducer(database, length);
                break;
            case 2:
                searchByModel(database, length);
                break;
            case 0:
                return;
            default:
                optionInvalid();
        }
    }
}


/*
 * Filter-By Functions
 */


void filterByFlightTime(const Drone *database, const int length) {
    int min, max;

    cout << "[+] Introduce minimumul: "; cin >> min;
    cout << "[+] Introduce maximumul: "; cin >> max;

    system("cls");

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";
    cout << "| Nr. | PRODUCATOR |      MODEL      | TIMP | DIST |  PRET  | RATING |      DESCRIEREA      |\n";
    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    for (int iter = 0; iter < length; iter++) {
        if (database[iter].flightTime >= min && database[iter].flightTime <= max) {
            cout << "| " << setw(3)  << left << iter + 1                   << " ";
            cout << "| " << setw(10) << left << database[iter].producer    << " ";
            cout << "| " << setw(15) << left << database[iter].model       << " ";
            cout << "| " << setw(4)  << left << database[iter].flightTime  << " ";
            cout << "| " << setw(4)  << left << database[iter].flightDist  << " ";
            cout << "| " << setw(6)  << left << database[iter].price       << " ";
            cout << "| " << setw(6)  << left << database[iter].rating      << " ";
            cout << "| " << setw(20) << left << database[iter].description << " ";
            cout << "|\n";
        }
    }

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    cout << "\nApasa o tasta pentru iesire...\n";
    getch();
}

void filterByFlightDist(const Drone *database, const int length) {
    int min, max;

    cout << "[+] Introduce minimumul: "; cin >> min;
    cout << "[+] Introduce maximumul: "; cin >> max;

    system("cls");

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";
    cout << "| Nr. | PRODUCATOR |      MODEL      | TIMP | DIST |  PRET  | RATING |      DESCRIEREA      |\n";
    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    for (int iter = 0; iter < length; iter++) {
        if (database[iter].flightDist >= min && database[iter].flightDist <= max) {
            cout << "| " << setw(3)  << left << iter + 1                   << " ";
            cout << "| " << setw(10) << left << database[iter].producer    << " ";
            cout << "| " << setw(15) << left << database[iter].model       << " ";
            cout << "| " << setw(4)  << left << database[iter].flightTime  << " ";
            cout << "| " << setw(4)  << left << database[iter].flightDist  << " ";
            cout << "| " << setw(6)  << left << database[iter].price       << " ";
            cout << "| " << setw(6)  << left << database[iter].rating      << " ";
            cout << "| " << setw(20) << left << database[iter].description << " ";
            cout << "|\n";
        }
    }

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    cout << "\nApasa o tasta pentru iesire...\n";
    getch();
}

void filterByPrice(const Drone *database, const int length) {
    int min, max;

    cout << "[+] Introduce minimumul: "; cin >> min;
    cout << "[+] Introduce maximumul: "; cin >> max;

    system("cls");

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";
    cout << "| Nr. | PRODUCATOR |      MODEL      | TIMP | DIST |  PRET  | RATING |      DESCRIEREA      |\n";
    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    for (int iter = 0; iter < length; iter++) {
        if (database[iter].price >= min && database[iter].price <= max) {
            cout << "| " << setw(3)  << left << iter + 1                   << " ";
            cout << "| " << setw(10) << left << database[iter].producer    << " ";
            cout << "| " << setw(15) << left << database[iter].model       << " ";
            cout << "| " << setw(4)  << left << database[iter].flightTime  << " ";
            cout << "| " << setw(4)  << left << database[iter].flightDist  << " ";
            cout << "| " << setw(6)  << left << database[iter].price       << " ";
            cout << "| " << setw(6)  << left << database[iter].rating      << " ";
            cout << "| " << setw(20) << left << database[iter].description << " ";
            cout << "|\n";
        }
    }

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    cout << "\nApasa o tasta pentru iesire...\n";
    getch();
}

void filterByRating(const Drone *database, const int length) {
    double min, max;

    cout << "[+] Introduce minimumul: "; cin >> min;
    cout << "[+] Introduce maximumul: "; cin >> max;

    system("cls");

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";
    cout << "| Nr. | PRODUCATOR |      MODEL      | TIMP | DIST |  PRET  | RATING |      DESCRIEREA      |\n";
    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    for (int iter = 0; iter < length; iter++) {
        if (database[iter].rating >= min && database[iter].rating <= max) {
            cout << "| " << setw(3)  << left << iter + 1                   << " ";
            cout << "| " << setw(10) << left << database[iter].producer    << " ";
            cout << "| " << setw(15) << left << database[iter].model       << " ";
            cout << "| " << setw(4)  << left << database[iter].flightTime  << " ";
            cout << "| " << setw(4)  << left << database[iter].flightDist  << " ";
            cout << "| " << setw(6)  << left << database[iter].price       << " ";
            cout << "| " << setw(6)  << left << database[iter].rating      << " ";
            cout << "| " << setw(20) << left << database[iter].description << " ";
            cout << "|\n";
        }
    }

    cout << "+-----+------------+-----------------+------+------+--------+--------+----------------------+\n";

    cout << "\nApasa o tasta pentru iesire...\n";
    getch();
}

void optionFilterBy(const Drone *database, const int length) {
    int option;

    while (true) {
        system("cls");

        cout << "+-----------------+\n";
        cout << "|  Filtrare dupa  |\n";
        cout << "+---+-------------+\n";
        cout << "| 1 | Timp        |\n";
        cout << "| 2 | Distanta    |\n";
        cout << "| 3 | Pret        |\n";
        cout << "| 4 | Rating      |\n";
        cout << "| 0 | Iesire      |\n";
        cout << "+---+-------------+\n";
        cout << " >_  "; cin >> option;

        switch (option) {
        case 1:
            filterByFlightTime(database, length);
            break;
        case 2:
            filterByFlightDist(database, length);
            break;
        case 3:
            filterByPrice(database, length);
            break;
        case 4:
            filterByRating(database, length);
            break;
        case 0:
            return;
        default:
            optionInvalid();
        }
    }
}
