/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: main file for the design project      ***/
/**********************************************************/

#include "people.h"
#include "vehicles.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {

    ifstream inputFile;
    vector<string> driverNames;
    vector<string> playerNames;
    vector<int> playerCredits;
    char userInput;
    string continueProgram = "YES";
    string tempName;
    int playerNumber;
    bool validName = false;

//Opening the list of team members
    inputFile.open("quidditch_team.dat");

    if (!inputFile.is_open()) {
        cout << "Could not open file quidditch_team.dat." << endl;
        return 1; // 1 indicates error
   }

//Inputting all of the drivers into a vector
    for (int i = 0; i < 6; i++) {
        string temp;
        getline(inputFile, temp);
        driverNames.push_back(temp);
    }

//Inputting all of the players and their credits into vectors
    for (int i = 0; i < 18; i++) {
        string name, first, last;
        int credit;

        inputFile >> first >> last >> credit;
        name = first + " " + last;
        playerNames.push_back(name);
        playerCredits.push_back(credit);
    }

    inputFile.close();

    vector<People> drivers(6);
    vector<People> passengers(18);

    //Sets all drivers as part of the people class
    for(int i = 0; i < drivers.size(); i++) {
        drivers.at(i).assignDriver(driverNames.at(i));
    }

    //Sets all passengers as part of the people class
    for(int i = 0; i < passengers.size(); i++) {
        passengers.at(i).assignPassenger(playerNames.at(i), playerCredits.at(i));
    }

    //Sets all drivers into their respective seats
    for(int i = 0; i < 5; i++) {
       // drivers.at(i).setDriverVehicle(drivers.at(i), i);
    }


    while (continueProgram == "YES") {
        //Checks if the user inputted passenger is valid in the database
        while (validName == false) {

            cout << "Enter Player to Create Reservation" << endl;
            getline(cin, tempName);

            for (int i = 0; i < playerNames.size(); i++) {
                if (playerNames.at(i) == tempName) {
                    cout << "Valid User" << endl;
                    playerNumber = i;
                    validName = true;
                    break;
                  }
            }
            if (validName == false) {
                cout << "Invalid Player Name" << endl;
            }
        }
        tempName.clear();

        //Face of interface, prompts user what type of function they want to use
        cout << "Enter 'q' to quit, 'c' to create reservation, 'm' to modify";
        cout << " reservation, and 'd' to delete" << endl;
        cin >> userInput;

        //Checks for user input and calls the corresponding function
        while (userInput != 'q') {
            if (userInput == 'c') {
                passengers.at(playerNumber).createReservation(passengers.at(playerNumber));
            }
            else if (userInput == 'm') {
                passengers.at(playerNumber).modifyReservation(passengers.at(playerNumber));
            }
            else if (userInput == 'd') {
                passengers.at(playerNumber).deleteReservation(passengers.at(playerNumber));
            }
            else {
                cout << "Not a valid option, please try again." << endl;
            }
            cout << "Enter 'q' to quit, 'c' to create reservation, 'm' to modify";
            cout << " reservation, and 'd' to delete" << endl;
            cin >> userInput;
      }

      cout << "Would you like to continue with a different player?" << endl;
      cout << "Enter 'YES' to continue, and enter anything else to quit." << endl;

      cin >> continueProgram;
      validName = false;

  }
  return 0;
}
