/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: vehicles class                        ***/
/**********************************************************/

#include "vehicles.h"

int seatNumber;

vector<string> seatName(18);
vector<bool> seatOccupancy(18);

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: setPassengerReservation()
Input: (2) People object, int seatNumber
Output: (0)
Purpose: assigns a seat to passenger depending on seatNumber input
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::setPassengerReservation(People& player, int seatNumber) {

        if ((seatOccupancy.at(seatNumber) == false) &&
        (seatNumber < 18) && (player.credits > 4) &&
        ((seatNumber == 0) || (seatNumber == 1) || (seatNumber == 4) ||
        (seatNumber == 8) || (seatNumber == 11) || (seatNumber == 15))) {
            seatName.at(seatNumber) = player.name;
            seatOccupancy.at(seatNumber) = true;
            player.credits = player.credits - frontSeatVal;
            cout << endl <<player.name << " has reserved seat number "
            << seatNumber << " and now has " << player.credits << " credits."
            << endl << endl;
        }
        else if ((seatOccupancy.at(seatNumber) == false) &&
        (seatNumber < 18) && (player.credits > 2) &&
        (seatNumber == 2) || (seatNumber == 3) || (seatNumber == 9) ||
        (seatNumber == 10) || (seatNumber == 16) || (seatNumber == 17)) {
            seatName.at(seatNumber) = player.name;
            seatOccupancy.at(seatNumber) = true;
            player.credits = player.credits - backSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
            << " and now has " << player.credits << " credits." << endl << endl;
        }
        else if ((seatOccupancy.at(seatNumber) == false) &&
        (seatNumber < 18) && (player.credits > 1) &&
        (seatNumber == 5) || (seatNumber == 7) || (seatNumber == 12) ||
            (seatNumber == 14)) {
            seatName.at(seatNumber) = player.name;
            seatOccupancy.at(seatNumber) = true;
            player.credits = player.credits - sideBackSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
            << " and now has " << player.credits << " credits." << endl << endl;
        }
        else if ((seatOccupancy.at(seatNumber) == false) &&
        (seatNumber < 18) && (player.credits > 0) &&
        (seatNumber == 6) || (seatNumber == 13)) {
            seatName.at(seatNumber) = player.name;
            seatOccupancy.at(seatNumber) = true;
            player.credits = player.credits - middleBackSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
                << " and now has " << player.credits << " credits." << endl
                << endl;
        }

    else {
        cout << "Unable to reserve seat. The selected player either didn't "
                "have enough credits, or the seat was unavailable." << endl;
    }
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: setPassengerBySeat
Input: (2) People object, string carType
Output: (0)
Purpose: assigns a seat to a passenger by seat type
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::setPassengerBySeat(People& player, string carType) {

        if ((player.credits > 4) && (carType == "front")
            && ((seatOccupancy.at(0) == false)
            || (seatOccupancy.at(1) == false) || (seatOccupancy.at(4) == false)
            || (seatOccupancy.at(8) == false) || (seatOccupancy.at(11) == false)
            || (seatOccupancy.at(15) == false))) {
            if (seatOccupancy.at(0) == false) {
                seatNumber = 0;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(1) == false) {
                seatNumber = 1;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(4) == false) {
                seatNumber = 4;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(8) == false) {
                seatNumber = 8;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(11) == false) {
                seatNumber = 11;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(15) == false) {
                seatNumber = 15;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
                player.credits = player.credits - frontSeatVal;
                cout << endl << player.name
                << " has reserved seat number " << seatNumber
                << " and now has " << player.credits
                << " credits." << endl << endl;
        }
        else if ((player.credits > 2) && (carType == "back") &&
        ((seatOccupancy.at(2) == false) ||
        (seatOccupancy.at(3) == false) ||
        (seatOccupancy.at(9) == false) ||
        (seatOccupancy.at(10) == false) ||
        (seatOccupancy.at(16) == false) ||
        (seatOccupancy.at(17) == false))) {
            if (seatOccupancy.at(2) == false) {
                seatNumber = 2;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(3) == false) {
                seatNumber = 3;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(9) == false) {
                seatNumber = 9;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(10) == false) {
                seatNumber = 10;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(16) == false) {
                seatNumber = 16;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(17) == false) {
                seatNumber = 17;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }

            player.credits = player.credits - backSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
            << " and now has " << player.credits << " credits." << endl << endl;
        }
        else if ((player.credits > 1) && (carType == "sideBack") &&
        ((seatOccupancy.at(5) == false) ||
        (seatOccupancy.at(7) == false) ||
        (seatOccupancy.at(12) == false) ||
        (seatOccupancy.at(14) == false))) {
            if (seatOccupancy.at(5) == false) {
                seatNumber = 5;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(7) == false) {
                seatNumber = 7;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(12) == false) {
                seatNumber = 12;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(14) == false) {
                seatNumber = 14;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            player.credits = player.credits - sideBackSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
            << " and now has " << player.credits << " credits." << endl << endl;
        }
        else if ((player.credits > 0) && (carType == "middleBack") &&
        ((seatOccupancy.at(6) == false) ||
        (seatOccupancy.at(13) == false))) {
            if (seatOccupancy.at(6) == false) {
                seatNumber = 6;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            else if (seatOccupancy.at(13) == false) {
                seatNumber = 13;
                seatOccupancy.at(seatNumber) = true;
                seatName.at(seatNumber) = player.name;
            }
            player.credits = player.credits - middleBackSeatVal;
            cout << player.name << " has reserved seat number " << seatNumber
            << " and now has " << player.credits << " credits." << endl << endl;
        }
        else {
        cout << "Unable to reserve seat. The selected player either didn't "
              "have enough credits, or the seat was unavailable." << endl;
    }
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: deletePassengerReservation()
Input: (1) People object
Output: (0)
Purpose: deletes a passengers reservation
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::deletePassengerReservation(People& player) {

    for (int i = 0; i < 18; ++i) {
        if (seatName.at(i) == player.name) {
            seatName.at(i).clear();
            seatOccupancy.at(i) = false;
            seatNumber = i;
        }
    }
    if ((seatNumber == 0) || (seatNumber == 1)
    || (seatNumber == 4) || (seatNumber == 8)
    || (seatNumber == 11) || (seatNumber == 15)) {
        player.credits = player.credits + frontSeatVal;
    }
    else if ((seatNumber == 2) ||
    (seatNumber == 3) || (seatNumber == 9) ||
    (seatNumber == 10) ||
    (seatNumber == 16) || (seatNumber == 17)) {
          player.credits = player.credits + backSeatVal;
    }
    else if ((seatNumber == 5) || (seatNumber == 7)
    || (seatNumber == 12) || (seatNumber == 14)) {
          player.credits = player.credits + sideBackSeatVal;
    }
    else if ((seatNumber == 6) || (seatNumber == 13)) {
          player.credits = player.credits + middleBackSeatVal;
    }
    cout << player.name << " is no longer seated "
      << " and has " << player.credits << " credits." << endl << endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printPassengerReservation()
Input: (1) People object
Output: (0)
Purpose: prints the passenger reservation
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::printPassengerReservation(People& player) {
    int tmp = 20;
    for (int i = 0; i < 18; ++i) {
        if (seatName.at(i) == player.name) {
            tmp = i;
          }
        }
    if (tmp == 20) {
        cout << player.name << " has not reserved a seat and has "
          << player.credits << " credits." << endl;
    }
    else {
      cout << player.name << " has reserved seat #" << tmp
        << " and has " << player.credits << " credits." << endl;
    }
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printPassengerReservationToTxt()
Input: (1) People object
Output: (0)
Purpose: prints the passenger reservation
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::printPassengerReservationToTxt
    (People& player, ofstream &outputFile) {
    int tmp = 20;

    for (int i = 0; i < 18; ++i) {
        if (seatName.at(i) == player.name) {
            tmp = i;
          }
        }
    if (tmp == 20) {
        outputFile << player.name << " has not reserved a seat and has "
          << player.credits << " credits." << endl;
    }
    else {
      outputFile << player.name << " has reserved seat #" << tmp
        << " and has " << player.credits << " credits." << endl;
    }

}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: resPrint()
Input: (0)
Output: (0)
Purpose: prints data to a txt file
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::resPrint(ofstream &outputFile) {
    Vehicles vehicle;

    outputFile << endl << "Truck" << "      " << "Compact";
    outputFile << "       " << "Sedan" << "       " << endl;
    outputFile << "Purple" << "      " << "Red";
    outputFile << "          " << "Blue" << "         " << endl;
    outputFile << "(-)";

    if (seatOccupancy.at(0) == false) {
        outputFile << "(0)";
    }
    else {
        outputFile << "(x)";
    }

    outputFile << "     " << "(-) ";

    if (seatOccupancy.at(1) == false) {
        outputFile << "(1) ";
    }
    else {
        outputFile << "(x) ";
    }

    outputFile << "     " "(-)   ";

    if (seatOccupancy.at(4) == false){
        outputFile << "(4)" << endl;
    }
    else {
        outputFile << "(x)" << endl;
    }

    outputFile << "           ";

    if (seatOccupancy.at(2) == false) {
        outputFile << "(2) ";
    }
    else {
        outputFile << "(x) ";
    }

    if (seatOccupancy.at(3) == false) {
        outputFile << "(3)";
    }
    else {
        outputFile << "(x)";
    }

    outputFile << "      ";

    if (seatOccupancy.at(5) == false) {
        outputFile << "(5)";
    }
    else {
        outputFile << "(x)";
    }

    if (seatOccupancy.at(6) == false) {
        outputFile << "(6)";
    }
    else {
        outputFile << "(x)";
    }

    if (seatOccupancy.at(7) == false) {
        outputFile << "(7)" << endl << endl;
    }
    else {
        outputFile << "(x)" << endl << endl;
    }

    outputFile << "            " << "Blue";
    outputFile << "        " << "Green" << "       " << endl;

    outputFile << "           (-) ";

    if (seatOccupancy.at(8) == false) {
        outputFile << "(8)";
    }
    else {
        outputFile << "(x) ";
    }

    outputFile << "     (-)     ";

    if (seatOccupancy.at(11) == false) {
        outputFile << "(11)";
    }
    else {
        outputFile << "(x)";
    }

    outputFile << endl << "           ";

    if (seatOccupancy.at(9) == false) {
        outputFile << "(9)";
    }
    else {
        outputFile << "(x)";
    }

    if (seatOccupancy.at(10) == false) {
        outputFile << "(10)";
    }
    else {
        outputFile << "(x)";
    }

    outputFile << "     ";

    if (seatOccupancy.at(12) == false){
        outputFile << "(12)";
    }
    else {
        outputFile << "(x)";
    }

    if (seatOccupancy.at(13) == false) {
        outputFile << "(13)";
    }
    else {
        outputFile << "(x)";
    }

    if (seatOccupancy.at(14) == false) {
        outputFile << "(14)" << endl << endl;
    }
    else {
        outputFile << "(x)" << endl << endl;
    }

    outputFile << "            " << "Yellow" << "     ";
    outputFile << endl << "           ";
    outputFile << "(-) ";

    if (seatOccupancy.at(15) == false) {
        outputFile << "(15)";
    }
    else{
        outputFile << "(x)";
    }

    outputFile << endl << "           ";

    if (seatOccupancy.at(16) == false) {
        outputFile << "(16)";
    }
    else{
        outputFile << "(x)";
    }

    if (seatOccupancy.at(17) == false) {
        outputFile << "(17)" << endl << endl;
    }
    else {
        outputFile << "(x)" << endl << endl;
    }


}
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: displayVehicle()
Input: (0)
Output: (0)
Purpose: prints the vehicle availability chart
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::displayVehicle() {
    cout << endl << "Truck" << "      " << "Compact";
    cout << "       " << "Sedan" << "       " << endl;
    cout << "Purple" << "      " << "Red";
    cout << "          " << "Blue" << "         " << endl;
    cout << "(-)";

    if (seatOccupancy.at(0) == false) {
        cout << "(0)";
    }
    else {
        cout << "(x)";
    }

    cout << "     " << "(-) ";

    if (seatOccupancy.at(1) == false) {
        cout << "(1) ";
    }
    else {
        cout << "(x) ";
    }

    cout << "     " "(-)   ";

    if (seatOccupancy.at(4) == false){
        cout << "(4)" << endl;
    }
    else {
        cout << "(x)" << endl;
    }

    cout << "           ";

    if (seatOccupancy.at(2) == false) {
        cout << "(2) ";
    }
    else {
        cout << "(x) ";
    }

    if (seatOccupancy.at(3) == false) {
        cout << "(3)";
    }
    else {
        cout << "(x)";
    }

    cout << "      ";

    if (seatOccupancy.at(5) == false) {
        cout << "(5)";
    }
    else {
        cout << "(x)";
    }

    if (seatOccupancy.at(6) == false) {
        cout << "(6)";
    }
    else {
        cout << "(x)";
    }

    if (seatOccupancy.at(7) == false) {
        cout << "(7)" << endl << endl;
    }
    else {
        cout << "(x)" << endl << endl;
    }

    cout << "            " << "Blue";
    cout << "        " << "Green" << "       " << endl;

    cout << "           (-) ";

    if (seatOccupancy.at(8) == false) {
        cout << "(8)";
    }
    else {
        cout << "(x) ";
    }

    cout << "     (-)     ";

    if (seatOccupancy.at(11) == false) {
        cout << "(11)";
    }
    else {
        cout << "(x)";
    }

    cout << endl << "           ";

    if (seatOccupancy.at(9) == false) {
        cout << "(9)";
    }
    else {
        cout << "(x)";
    }

    if (seatOccupancy.at(10) == false) {
        cout << "(10)";
    }
    else {
        cout << "(x)";
    }

    cout << "     ";

    if (seatOccupancy.at(12) == false){
        cout << "(12)";
    }
    else {
        cout << "(x)";
    }

    if (seatOccupancy.at(13) == false) {
        cout << "(13)";
    }
    else {
        cout << "(x)";
    }

    if (seatOccupancy.at(14) == false) {
        cout << "(14)" << endl << endl;
    }
    else {
        cout << "(x)" << endl << endl;
    }

    cout << "            " << "Yellow" << "     ";
    cout << endl << "           ";
    cout << "(-) ";

    if (seatOccupancy.at(15) == false) {
        cout << "(15)";
    }
    else {
        cout << "(x)";
    }

    cout << endl << "           ";

    if (seatOccupancy.at(16) == false) {
        cout << "(16)";
    }
    else {
        cout << "(x)";
    }

    if (seatOccupancy.at(17) == false) {
        cout << "(17)";
    }
    else {
        cout << "(x)";
    }

    cout << endl << endl;
    cout << "You have two options to reserve a seat:" << endl << endl;
    cout << "Option 1:" << endl;
    cout << "Type the location of the seat you want in any car" << endl;
    cout << "AVAILIBLE INPUTS: front, back, sideBack, middleBack" << endl;
    cout << endl << "Option 2:" << endl;
    cout << "Input the desired seat number" << endl << endl;
    cout << "Type '1' for the first method, type '2' for the second" << endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printTruckPeople
Input: (0)
Output: (0)
Purpose: prints the seats available in the purple truck
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::printTruckPurple() {

    cout << "Purple Truck" << endl;

    cout << "(-) ";
    if (seatOccupancy.at(0) == false) {
        cout << "(0)";
    }
    else{
        cout << "(x)";
    }

    cout << endl << endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printCompactRed()
Input: (0)
Output: (0)
Purpose: prints the seats available in the red truck
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::printCompactRed() {

    cout << "Red Compact" << endl;

    cout << "(-) ";

    if (seatOccupancy.at(1) == false) {
        cout << "(1) ";
    }
    else{
        cout << "(x) ";
    }

    cout << endl;

    if (seatOccupancy.at(2) == false) {
        cout << "(2) ";
    }
    else{
        cout << "(x) ";
    }
    if (seatOccupancy.at(3) == false) {
        cout << "(3)";
    }
    else{
        cout << "(x)";
    }

    cout << endl << endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printCompactBlue()
Input: (0)
Output: (0)
Purpose: prints the seats available in the blue compact
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::printCompactBlue() {

    cout << "Blue Compact" << endl;

    cout << "(-) ";

    if (seatOccupancy.at(8) == false) {
        cout << "(8) ";
    }
    else{
        cout << "(x) ";
    }

    cout << endl;

    if (seatOccupancy.at(9) == false) {
        cout << "(9) ";
    }
    else{
        cout << "(x) ";
    }

    if (seatOccupancy.at(10) == false) {
        cout << "(10)";
    }
    else{
        cout << "(x) ";
    }
    cout << endl << endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printCompactYellow()
Input: (0)
Output: (0)
Purpose: prints the seats available in the compact yellow
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::printCompactYellow() {

    cout << "Yellow Compact" << endl;

    cout << "(-) ";

    if (seatOccupancy.at(15) == false) {
        cout << "(15)";
    }
    else{
        cout << "(x)";
    }

    cout << endl;

    if (seatOccupancy.at(16) == false) {
        cout << "(16)";
    }
    else{
        cout << "(x)";
    }

    if (seatOccupancy.at(17) == false) {
        cout << "(17)";
    }
    else{
        cout << "(x)";
    }
    cout << endl << endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printSedanBlue()
Input: (0)
Output: (0)
Purpose: prints the seats available in the blue sedan
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::printSedanBlue() {

    cout << "Blue Sedan" << endl;

    cout << "(-)   ";

    if (seatOccupancy.at(4) == false) {
        cout << "(4)";
    }
    else{
        cout << "(x)";
    }

    cout << endl;

    if (seatOccupancy.at(5) == false) {
        cout << "(5)";
    }
    else{
        cout << "(x) ";
    }

    if (seatOccupancy.at(6) == false) {
        cout << "(6)";
    }
    else{
        cout << "(x) ";
    }

    if (seatOccupancy.at(7) == false) {
        cout << "(7)";
    }
    else{
        cout << "(x)";
    }

    cout << endl << endl;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printSedanGreen()
Input: (0)
Output: (0)
Purpose: prints the seats available in the green sedan
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Vehicles::printSedanGreen() {

   cout << "Green Sedan" << endl;

    cout << "(-)    ";

    if (seatOccupancy.at(11) == false) {
        cout << "(11)";
    }
    else{
        cout << "(x)";
    }

    cout << endl;

    if (seatOccupancy.at(12) == false) {
        cout << "(12)";
    }
    else{
        cout << "(x)";
    }
    if (seatOccupancy.at(13) == false) {
        cout << "(13)";
    }
    else{
        cout << "(x)";
    }
    if (seatOccupancy.at(14) == false) {
        cout << "(14)";
    }
    else{
        cout << "(x)";
    }
    cout << endl << endl;
}
