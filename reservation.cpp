/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: reservation class                     ***/
/**********************************************************/

#include <iostream>
#include <string>
#include <locale>
#include "people.h"
#include "reservation.h"

int createReservation(People playerName){

    bool loopHold = true;
    string carType;
    string carColor = "none";
    int seatNumber = 0;

    //Checks if the user has enough credits to make a reservation
    if(credits > 0) {
        cout << name << "has " << credits << "remaining";
    }else{
        cout << "Not enough credits remaining" << endl;
    }

    //The visual interface for selecting a seat
    cout << "Truck" << "        " << "Compact" << "       " << "Sedan" << "       " << endl;
    cout << "Purple" << "      " << "Red" << "          " << "Blue" << "         " << endl;

    cout << endl << endl << endl << endl;

    cout << "            " << "Blue" << "        " << "Green" << "       " << endl;

    cout << endl << endl << endl << endl;

    cout << "            " << "Yellow" << "     " << endl;

    cout << "You have two options two reserve a seat" << endl;
    cout << "Type a specific seat type to find the type of seat in any car" << endl;
    cout << "AVAILIBLE INPUTS: front, back, rightBack, leftBack" << endl;
    cout << "Or you can input, the car type, the car color, and the seat number" << endl;
    cout << "Example: sedan yellow 2" << endl;

    while(loopHold == true) {

        cin >> carType;
        cin >> carColor;
        cin >> seatNumber;

        //Checks if the the seat input is correct, if not it outputs an error
        if (carType == "back" or carType == "frontSide" or carType == "rightBack" or carType == "leftBack") {
            if (findNearestSeat(carType) == true) {
                cout << "Seat successfully reserved" << endl;

                //Assigns reservation number
                //reservationNumber.at(currentReservation) = currentReservation;

                loopHold = false;
                break;
            } else {
                cout << "Seat not availible" << endl;
            }
        }
    }


}

void modifyReservation(int reservationNumber){

}

void deleteReservation(int reservationNumber);

void printReservation(int);