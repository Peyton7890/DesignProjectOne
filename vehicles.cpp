/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: vehicles class                        ***/
/**********************************************************/

#include "vehicles.h"

string pickupPurple;
string compactRed;
string compactBlue;
string compactYellow;
string sedanBlue;
string sedanGreen;

vector<string> seatName(18);
vector<bool> seatOccupancy(18);

//Sets the driver into their seat in each vehicle
void Vehicles::setDriverVehicle(string driverName, int carType) {
    if(carType == 1){
        pickupPurple = driverName;
    }
    else if(carType == 2){
        compactRed = driverName;
    }
    else if(carType == 3){
        compactBlue = driverName;
    }
    else if(carType == 4){
        compactYellow = driverName;
    }
    else if(carType == 5){
        sedanBlue = driverName;
    }
    else if(carType == 6){
        sedanGreen = driverName;
    }
}

void Vehicles::setPassengerReservation(People& player, int seatNumber) {

    if ((seatOccupancy.at(seatNumber) == false) && (seatNumber < 18)) {
        seatName.at(seatNumber) = player.name;
        seatOccupancy.at(seatNumber) = true;

        if ((seatNumber == 0) || (seatNumber == 1) || (seatNumber == 4) ||
          (seatNumber == 8) || (seatNumber == 11) || (seatNumber == 15)) {
              player.credits = player.credits - frontSeatVal;
        }
        else if ((seatNumber == 2) || (seatNumber == 3) || (seatNumber == 9) ||
          (seatNumber == 10) || (seatNumber == 16) || (seatNumber == 17)) {
              player.credits = player.credits - backSeatVal;
        }
        else if ((seatNumber == 5) || (seatNumber == 7) || (seatNumber == 12) ||
          (seatNumber == 14)) {
              player.credits = player.credits - sideBackSeatVal;
        }
        else if ((seatNumber == 6) || (seatNumber == 13)) {
              player.credits = player.credits - middleBackSeatVal;
        }

        cout << player.name << " has reserved seat number " << seatNumber
          << " and now has " << player.credits << " credits." << endl << endl;

    }
    else {
      cout << "Seat not available" << endl;
    }
}
