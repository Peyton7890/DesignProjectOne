/**********************************************************/
/*** Title: people.h                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for people class          ***/
/**********************************************************/

#ifndef PEOPLEH
#define PEOPLEH

#include <iostream>
#include "reservation.h"

using namespace std;

class People : public Reservation{
protected:
    int credits;
    string name;
    string vehicleType;

public:
    void assignPassenger(string passName, int currCredits);
    void printPassenger();

    friend class Reservation;

    void assignDriver(string driverName); //Int 1 = pickup, int 2 = compact, int 3 = sedan
    void printDriver();
};

#endif