/**********************************************************/
/*** Title: vehicles.h                                  ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for vehicles class        ***/
/**********************************************************/
#include <iostream>
#include "reservation.h"

using namespace std;

class Vehicles : public Reservation{
private:
    string vehicleColor;
    int availableSeats;
    vector<bool> seatOccupancy = vector<bool> (18);

    int frontSeatVal = 1;
    int backSeatVal = 3;
    int sideBackSeatBal = 2;
    int middleBackSeatVal = 1;


public:
    void displayVehicle();
    bool findSeat(string seatType);
    void setVehicle(string driverName, int carType);
    
};
