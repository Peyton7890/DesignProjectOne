/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for reservation class     ***/
/**********************************************************/
#ifndef RESERVATIONH
#define RESERVATIONH

#include <iostream>
#include <string>
#include <vector>
class People;
class Reservation {
public:
    void createReservation(People& player);
    void deleteReservation(People& player);
    void modifyReservation(People& player);
    void printReservation(People& player);

    int reservationNumber;
};

#endif
