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
#include "reservation.h"
#include "people.h"

using namespace std;

class People;
class Vehicles : public Reservation{
private:
    string vehicleColor;
    int availableSeats;

    int frontSeatVal = 5;
    int backSeatVal = 3;
    int sideBackSeatVal = 2;
    int middleBackSeatVal = 1;


public:
    void displayVehicle();
    bool findSeat(string seatType);
    void setDriverVehicle(string driverName, int carType);
    void setPassengerReservation(People& player, int seatNumber);
    void setPassengerBySeat(People& player, string carType);
    void deletePassengerReservation(People& player);
    void printPassengerReservation(People& player);

};
