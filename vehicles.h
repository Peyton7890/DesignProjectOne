/**********************************************************/
/*** Title: vehicles.h                                  ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for vehicles class        ***/
/**********************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "reservation.h"
#include "people.h"

using namespace std;

class People;
class Vehicles : public Reservation{
private:

    int frontSeatVal = 5;
    int backSeatVal = 3;
    int sideBackSeatVal = 2;
    int middleBackSeatVal = 1;


public:
    void displayVehicle();
    void setPassengerReservation(People& player, int seatNumber);
    void setPassengerBySeat(People& player, string carType);
    void deletePassengerReservation(People& player);
    void printPassengerReservation(People& player);
    void printPassengerReservationToTxt(People& player);
    void resPrint();

    void printTruckPurple();
    void printCompactRed();
    void printCompactBlue();
    void printCompactYellow();
    void printSedanBlue();
    void printSedanGreen();

};
