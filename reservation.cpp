/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: reservation class                     ***/
/**********************************************************/

#include <iostream>
#include <string>
#include "people.h"
#include "vehicles.h"

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: createReservation()
Input: (1) People object
Output: (0)
Purpose: allows the user to print a reservation
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Reservation::createReservation(People& player) {

    string carType;
    int seatNumber = 0;
    Vehicles vehicle;

    //Checks if the user has enough credits to make a reservation
    if (player.credits <= 0) {
        cout << "Not enough credits remaining" << endl;
    }
    else {
        cout << endl << player.name << " has "
        << player.credits << " credits remaining" << endl;

        vehicle.displayVehicle();

        int seatSelection = 0;

        cin >> seatSelection;

        //If the user inputs 1, Quick selection is selected
        //the user may now input one of many seat types to find a seat
        if (seatSelection == 1) {

            cin >> carType;

            //Checks if the the seat input is correct, if not it outputs an error
            if (carType == "front" || carType == "back"
            || carType == "sideBack" || carType == "middleBack") {
                vehicle.setPassengerBySeat(player, carType);
            }
            else {
                cout << "Invalid car type" << endl;
            }
        }
        else if (seatSelection == 2) {
            cin >> seatNumber;
            vehicle.setPassengerReservation(player, seatNumber);
        }
        //If neither 1 or 2 is inputted, it will output an error
        else {
            cout << "Invalid Selection" << endl;
        }
    }

}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: deleteReservation()
Input: (1) People object
Output: (0)
Purpose: allows the user delete a reservation
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Reservation::deleteReservation(People& player) {
    Vehicles vehicle;
    vehicle.deletePassengerReservation(player);
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: modifyReservation()
Input: (1) People Object
Output: (0)
Purpose: allows the user to modify a reservation
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Reservation::modifyReservation(People& player) {
    player.deleteReservation(player);
    player.createReservation(player);
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printPassenger()
Input: (1) People object
Output: (0)
Purpose: prints the passengers name and credits
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Reservation::printPassenger(People& player) {
    Vehicles vehicle;
    vehicle.printPassengerReservation(player);
}
