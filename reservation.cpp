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

//Creates a reservation
void Reservation::createReservation(People& player){

    bool loopHold = true;
    string carType;
    string carColor = "none";
    int seatNumber = 0;

    //Checks if the user has enough credits to make a reservation
    if(player.credits <= 0) {
        cout << "Not enough credits remaining" << endl;
    }
    else{
        cout << endl << player.name << " has " << player.credits << " credits remaining" << endl;

        //The visual interface for selecting a seat
        cout << endl<< "Truck" << "      " << "Compact" << "       " << "Sedan" << "       " << endl;
        cout << "Purple" << "      " << "Red" << "          " << "Blue" << "         " << endl;

        cout << endl << endl << endl << endl;

        cout << "            " << "Blue" << "        " << "Green" << "       " << endl;

        cout << endl << endl << endl << endl;

        cout << "            " << "Yellow" << "     " << endl << endl;

        cout << "You have two options to reserve a seat" << endl;
        cout << "Type a specific seat type to find the type of seat in any car" << endl;
        cout << "AVAILIBLE INPUTS: front, back, rightBack, leftBack" << endl;
        cout << "Or you can input, the car type, the car color, and the seat number" << endl;
        cout << "Example: sedan yellow 2" << endl;
        cout << "Type 1 for the first method, type 2 for the second" << endl;

        int seatSelection = 0;

        cin >> seatSelection;

        //If the user inputs 1, Quick selection is selected
        //the user may now input one of many seat types to find a seat
        if(seatSelection == 1) {
            while (loopHold == true) {

                cin >> carType;

                //Checks if the the seat input is correct, if not it outputs an error
                if (carType == "back" || carType == "frontSide" || carType == "rightBack" || carType == "leftBack") {
                    //if (findNearestSeat(carType) == true) {
                    if (4 == 4) {
                        cout << "Seat successfully reserved!" << endl;

                        //Assigns reservation number
                        //reservationNumber.at(currentReservation) = currentReservation;
                        loopHold = false;
                        break;
                    }
                    else {
                        cout << "Seat not availible" << endl;
                    }
                }
            }

            //If the user inputs 2, the second type of selection is chosen, the user will input a specific seat
        }
        else if(seatSelection == 2) {

            cin >> carType;
            cin >> carColor;
            cin >> seatNumber;

            //Write specifying a specific seat

        }
        //If neither 1 or 2 is inputted, it will output an error
        else{
            cout << "Invalid Selection" << endl;
        }
    }

}

//Allows the user to delete a reservation
void Reservation::deleteReservation(People& player){
    cout << "Reservation successfully deleted!" << endl;
    //Give back credits
}

//Allows the user to modify a reservation
void Reservation::modifyReservation(People& player){
    player.deleteReservation(player);
    player.createReservation(player);
}

//Allows the user to print a reservation
void Reservation::printReservation(People& player){
    cout << "print";
}
