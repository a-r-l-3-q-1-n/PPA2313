#include "../headers/includes.h"
#include "../headers/drone.h"


void setProducer(Drone &drone) {
    char producer[255];

    while (true) {
        system("clear");
        cout << "[+] Producatorul: "; cin >> producer;

        if (strlen(producer) > MAX_DATABASE_LENGTH) {
            cout << "[!] 'Denumirea' - Input invalid";
            sleep(1);
        } else {
            drone.producer = producer;
            break;
        }
    }
}

void setModel(Drone &drone) {
    string model;

    while (true) {
        system("clear");
        cout << "[+] Modelul: "; cin >> model;

        if (model.length() > MAX_DATABASE_LENGTH) {
            cout << "[!] 'Modelul' - Input invalid";
            sleep(1);
        } else {
            drone.model = model;
            break;
        }
    }
}



void setFlightTime(Drone &drone) {
    int flightTime;

    while (true) {
        system("clear");
        cout << "[+] Timpul de zbor: "; cin >> flightTime;

        if (flightTime < MIN_FLIGHT_TIME) {
            cout << "[!] 'Timpul de zbor' - Input invalid";
            sleep(1);
        } else {
            drone.flightTime = flightTime;
            break;
        }
    }
}

void setFlightDist(Drone &drone) {
    int flightDist;

    while (true) {
        system("clear");
        cout << "[+] Distanta de zbor: "; cin >> flightDist;

        if (flightDist < MIN_FLIGHT_DIST) {
            cout << "[!] 'Distanta de zbor' - Input invalid";
            sleep(1);
        } else {
            drone.flightDist = flightDist;
            break;
        }
    }
}

void setPrice(Drone &drone) {
    int price;

    while (true) {
        system("clear");
        cout << "[+] Pretul: "; cin >> price;

        if (price < MIN_PRICE) {
            cout << "[!] 'Pretul' - Input invalid";
            sleep(1);
        } else {
            drone.price = price;
            break;
        }
    }
}

void setRating(Drone &drone) {
    double rating;

    while (true) {
        system("clear");
        cout << "[+] Ratingul: "; cin >> rating;

        if (rating < MIN_RATING) {
            cout << "[!] 'Ratingul' - Input invalid";
            sleep(1);
        } else {
            drone.rating = rating;
            break;
        }
    }
}

void setDescription(Drone &drone) {
    string description;

    while (true) {
        system("clear");
        cout << "[+] Descrierea: "; cin >> description;

        if (description.length() > MAX_DATABASE_LENGTH) {
            cout << "[!] 'Descrierea' - Input invalid";
            sleep(1);
        } else {
            drone.description = description;
            break;
        }
    }
}