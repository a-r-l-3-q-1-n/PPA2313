#ifndef PPA2313_DRONE_H
#define PPA2313_DRONE_H


#include "includes.h"


const int MAX_DATABASE_LENGTH = 100;

struct Drone {
    string producer;
    string model;

    int flightTime;
    int flightDist;

    int price;
    double rating;
    string description;
};


#endif //PPA2313_DRONE_H
