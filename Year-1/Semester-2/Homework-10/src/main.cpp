#include "menu.cpp"


int main() {

    int option;
    int length = 0;

    string filename;
    Drone database[MAX_DATABASE_LENGTH];

    cout << "[+] Denumirea fisierului: "; cin >> filename;

    do {
        banner();

        cout << " >_  "; cin >> option;

        switch (option) {
            case 1:
                optionDisplay(database, length);

                cout << "\nApasa o tasta pentru iesire...\n";
                getch();
                break;
            case 2:
                optionAppend(database, length);
                break;
            case 3:
                optionDelete(database, length);
                break;
            case 4:
                optionSortBy(database, length);
                break;
            case 5:
                optionSearchBy(database, length);
                break;
            case 6:
                optionFilterBy(database, length);
                break;
            case 7:
                optionSaveData(database, length, filename);
                break;
            case 0:
                break;
            default:
                optionInvalid();
        }
    } while (option != 0);

    optionExit();


    return 0;

}
