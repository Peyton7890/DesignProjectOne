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
int seatNumber;

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

void Vehicles::setPassengerBySeat(People& player, string carType) {

        if ((carType == "front") && ((seatOccupancy.at(0) == false) || (seatOccupancy.at(1) == false) || (seatOccupancy.at(4) == false) ||
          (seatOccupancy.at(8) == false) || (seatOccupancy.at(11) == false) || (seatOccupancy.at(15) == false))) {
            if (seatOccupancy.at(0) == false) {
              seatNumber = 0;
            }
            else if (seatOccupancy.at(1) == false) {
              seatNumber = 1;
            }
            else if (seatOccupancy.at(4) == false) {
              seatNumber = 4;
            }
            else if (seatOccupancy.at(8) == false) {
              seatNumber = 8;
            }
            else if (seatOccupancy.at(11) == false) {
              seatNumber = 11;
            }
            else if (seatOccupancy.at(15) == false) {
              seatNumber = 15;
            }
              player.credits = player.credits - frontSeatVal;
              cout << player.name << " has reserved seat number " << seatNumber
                << " and now has " << player.credits << " credits." << endl << endl;
        }
        else if ((carType == "back") && ((seatOccupancy.at(2) == false) || (seatOccupancy.at(3) == false) || (seatOccupancy.at(9) == false) ||
          (seatOccupancy.at(10) == false) || (seatOccupancy.at(16) == false) || (seatOccupancy.at(17) == false))) {
            if (seatOccupancy.at(2) == false) {
              seatNumber = 2;
            }
            else if (seatOccupancy.at(3) == false) {
              seatNumber = 3;
            }
            else if (seatOccupancy.at(9) == false) {
              seatNumber = 9;
            }
            else if (seatOccupancy.at(10) == false) {
              seatNumber = 10;
            }
            else if (seatOccupancy.at(16) == false) {
              seatNumber = 16;
            }
            else if (seatOccupancy.at(17) == false) {
              seatNumber = 17;
            }
              player.credits = player.credits - backSeatVal;
              cout << player.name << " has reserved seat number " << seatNumber
                << " and now has " << player.credits << " credits." << endl << endl;
        }
        else if ((carType == "sideBack") && ((seatOccupancy.at(5) == false) || (seatOccupancy.at(7) == false) || (seatOccupancy.at(12) == false) ||
          (seatOccupancy.at(14) == false))) {
            if (seatOccupancy.at(5) == false) {
              seatNumber = 5;
            }
            else if (seatOccupancy.at(7) == false) {
              seatNumber = 7;
            }
            else if (seatOccupancy.at(12) == false) {
              seatNumber = 12;
            }
            else if (seatOccupancy.at(14) == false) {
              seatNumber = 14;
            }
              player.credits = player.credits - sideBackSeatVal;
              cout << player.name << " has reserved seat number " << seatNumber
                << " and now has " << player.credits << " credits." << endl << endl;
        }
        else if ((carType == "middleBack") && ((seatOccupancy.at(6) == false) || (seatOccupancy.at(13) == false))) {
            if (seatOccupancy.at(6) == false) {
                seatNumber = 6;
            }
            else if (seatOccupancy.at(13) == false) {
                seatNumber = 13;
            }
            player.credits = player.credits - middleBackSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
              << " and now has " << player.credits << " credits." << endl << endl;
        }

        else {
      cout << "Seat not available" << endl;
    }
}

void Vehicles::displayVehicle(){
    //The visual interface for selecting a seat

    cout << endl<< "Truck" << "      " << "Compact";
    cout << "       " << "Sedan" << "       " << endl;
    cout << "Purple" << "      " << "Red";
    cout << "          " << "Blue" << "         " << endl;

    cout << "(-)";

    if(seatOccupancy.at(0) == false) {
        cout << "(0)";
    }else{
        cout << "(x)";
    }

    cout << "     " << "(-) ";

    if(seatOccupancy.at(1) == false) {
        cout << "(1) ";
    }else{
        cout << "(x) ";
    }

    cout << "     " "(-)   ";

    if(seatOccupancy.at(2) == false){
        cout << "(2)" << endl;
    }else{
        cout << "(x)" << endl;
    }

    cout << "           ";

    if(seatOccupancy.at(3) == false) {
        cout << "(3) ";
    }else{
        cout << "(x) ";
    }

    if(seatOccupancy.at(4) == false) {
        cout << "(4)";
    }else{
        cout << "(x)";
    }

   cout << "      ";

    if(seatOccupancy.at(5) == false) {
        cout << "(5)";
    }else{
        cout << "(x)";
    }

    if(seatOccupancy.at(6) == false) {
        cout << "(6)";
    }else{
        cout << "(x)";
    }

    if(seatOccupancy.at(7) == false) {
        cout << "(7)" << endl << endl;
    }else{
        cout << "(x)" << endl << endl;
    }

    cout << "            " << "Blue";
    cout << "        " << "Green" << "       " << endl;

    cout << "           (-)  ";

    if(seatOccupancy.at(8) == false) {
        cout << "(8)";
    }else{
        cout << "(x) ";
    }

    cout << "     (-)      ";

    if(seatOccupancy.at(9) == false) {
        cout << "(9)";
    }else{
        cout << "(x)";
    }

    cout << endl << "           ";

    if(seatOccupancy.at(10) == false) {
        cout << "(10)";
    }else{
        cout << "(x)";
    }

    if(seatOccupancy.at(11) == false) {
        cout << "(11)";
    }else{
        cout << "(x)";
    }

    cout << "     ";

    if(seatOccupancy.at(12) == false){
        cout << "(12)";
    }else{
        cout << "(x)";
    }

    if(seatOccupancy.at(13) == false) {
        cout << "(13)";
    }else{
        cout << "(x)";
    }

    if(seatOccupancy.at(14) == false) {
        cout << "(14)" << endl << endl;
    }else{
        cout << "(x)" << endl << endl;
    }

    cout << "            " << "Yellow" << "     ";
    cout << endl << "           ";
    cout << "(-) ";

    if(seatOccupancy.at(15) == false) {
        cout << "(15)";
    }else{
        cout << "(x)";
    }

    cout << endl << "           ";

    if(seatOccupancy.at(16) == false) {
        cout << "(16)";
    }else{
        cout << "(x)";
    }

    if(seatOccupancy.at(17) == false) {
        cout << "(17)";
    }else{
        cout << "(x)";
    }





    cout << endl << endl;

    cout << "You have two options to reserve a seat:" << endl << endl;
    cout << "Option 1:" << endl;
    cout << "Type the location of the seat you want in any car" << endl;
    cout << "AVAILIBLE INPUTS: front, back, sideBack, middleBack" << endl << endl;
    cout << "Option 2:" << endl;
    cout << "Input the desired seat number" << endl << endl;
    cout << "Type '1' for the first method, type '2' for the second" << endl;
}
