/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for reservation class     ***/
/**********************************************************/
#include <iostream>
#include <string>
#include <vector>
class People;
class Reservation {
protected:
    int createReservation(People& player);

public:
    int reservationNumber;
};
