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

vector<bool> seatOccupancy(18);

//Sets the driver into their seat in each vehicle
void Vehicles::setDriverVehicle(string driverName, int carType) {
    if(carType == 1){
        pickupPurple.at(0) = driverName;
        seatOccupancy.at(0) = true;
    }
    if(carType == 2){
        compactRed.at(0) = driverName;
        seatOccupancy.at(0) = true;
    }
    if(carType == 3){
        compactBlue.at(0) = driverName;
        seatOccupancy.at(0) = true;
    }
    if(carType == 4){
        compactYellow.at(0) = driverName;
        seatOccupancy.at(0) = true;
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

void Vehicles::setPassengerReservation(People& player, string carType, string carColor, int seatNumber) {
    //Lowercase all the strings
    if ((carType == "pickup") && (carColor == "purple")) {
        if ((seatOccupancy.at(seatNumber) == false) && (seatNumber < 2 && seatNumber > 0)) {
            pickupPurple.at(seatNumber) = player.name;
            seatOccupancy.at(seatNumber) = true;
            player.credits = player.credits - frontSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
              << " and now has " << player.credits << " credits." << endl << endl;

        }
        else {
          cout << "Seat not available" << endl;
        }
    }
    else if ((carType == "compact") && (carColor == "red")) {
        if ((seatOccupancy.at(seatNumber) == false) && (seatNumber < 6 && seatNumber > 2)) {
            compactRed.at(seatNumber) = player.name;
            seatOccupancy.at(seatNumber) = true;
            player.credits = player.credits - frontSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
              << " and now has " << player.credits << " credits." << endl << endl;

        }
        else {
          cout << "Seat not available" << endl;
        }
    }
    else if ((carType == "pickup") && (carColor == "purple")) {
        if ((seatOccupancy.at(seatNumber) == false) && (seatNumber < 2 && seatNumber > 0)) {
            pickupPurple.at(seatNumber) = player.name;
            seatOccupancy.at(seatNumber) = true;
            player.credits = player.credits - frontSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
              << " and now has " << player.credits << " credits." << endl << endl;

        }
        else {
          cout << "Seat not available" << endl;
        }
    }

}
