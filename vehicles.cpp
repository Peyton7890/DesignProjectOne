/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: vehicles class                        ***/
/**********************************************************/

#include "vehicles.h"

vector<string> pickupPurple(2);
vector<string> compactRed(4);
vector<string> compactBlue(4);
vector<string> compactYellow(4);
vector<string> sedanBlue(5);
vector<string> sedanGreen(5);

//Sets the driver into their seat in each vehicle
void Vehicles::setDriverVehicle(string driverName, int carType) {
    if(carType == 1){
        pickupPurple.at(1) = driverName;
        seatOccupancy.at(1) = true;
    }
    if(carType == 2){
        compactRed.at(1) = driverName;
        seatOccupancy.at(1) = true;
    }
    if(carType == 3){
        compactBlue.at(1) = driverName;
        seatOccupancy.at(1) = true;
    }
    if(carType == 4){
        compactYellow.at(1) = driverName;
        seatOccupancy.at(1) = true;
    }
    if(carType == 5){
        sedanBlue.at(1) = driverName;
        seatOccupancy.at(1) = true;
    }
    if(carType == 6){
        sedanGreen.at(1) = driverName;
        seatOccupancy.at(1) = true;
    }
}
