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
    ofstream outputFile;
    vector<string> driverNames;
    vector<string> playerNames;
    vector<int> playerCredits;
    char userInput;
    string continueProgram = "YES";
    string tempName;
    string tmp;
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
    vector<Vehicles> vehicleDrivers(6);

    //Sets all drivers as part of the people class
    for (int i = 0; i < drivers.size(); i++) {
        drivers.at(i).assignDriver
        (driverNames.at(i));
    }

    //Sets all passengers as part of the people class
    for (int i = 0; i < passengers.size(); i++) {
        passengers.at(i).assignPassenger
        (playerNames.at(i), playerCredits.at(i));
    }


    while (continueProgram == "YES") {
        //Checks if the user inputted passenger is valid in the database
        while (validName == false) {

            cout << "Enter Player to Create Reservation" << endl;
            getline(cin, tempName);

            for (int i = 0; i < playerNames.size(); i++) {
                if (playerNames.at(i) == tempName) {
                    cout << endl << "Valid User" << endl << endl;
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

        //Prompts user to enter what type of function they want to use
        cout << "Enter 'q' to quit, 'c' to create reservation, 'm' to modify";
        cout << ", 'd' to delete and 'p' to print" << endl;
        cin >> userInput;

        //Checks for user input and calls the corresponding function
        while (userInput != 'q') {
            if (userInput == 'c') {
                passengers.at(playerNumber).createReservation
                (passengers.at(playerNumber));
            }
            else if (userInput == 'm') {
                passengers.at(playerNumber).modifyReservation
                (passengers.at(playerNumber));
            }
            else if (userInput == 'd') {
                passengers.at(playerNumber).deleteReservation
                (passengers.at(playerNumber));
            }
            else if (userInput == 'p') {
                passengers.at(playerNumber).Reservation::printPassenger
                (passengers.at(playerNumber));
            }
            else {
                cout << "Not a valid option, please try again." << endl;
            }
            cout << "Enter 'q' to quit, 'c' to create reservation, 'm' to modify";
            cout << ", 'd' to delete and 'p' to print" << endl;
            cin >> userInput;
      }

      cout << "Would you like to continue with a different player?"
          << endl << endl << "Enter 'YES' to continue, and enter"
          << " anything else to quit." << endl;

      cin >> continueProgram;
      cin.ignore();
      validName = false;

  }

  //Prompts user to enter if they want to print reservation data
  cout << endl << "If you would like to print all the reservation data to a tex"
    << "t file, enter 'YES', if not enter anything else" << endl;

  //Checks for user input and calls the corresponding function
  cin >> tmp;
  if (tmp == "YES") {
      string adminPass;
      Vehicles vehicle;
      cout << "Enter the administrator password to print the reservations."
        << endl;
      cin >> adminPass;

      if (adminPass == "Password1") {

          outputFile.open("all_reservations.txt");
          if (!outputFile.is_open()) {
              cout << "Could not open file all_reservations.txt." << endl;
              return 1; // 1 indicates error
          }

          vehicle.resPrint(outputFile);

          outputFile << "List of Passengers and their seating:" << endl << endl;

          for (int i = 0; i < 18; ++i) {
              vehicle.printPassengerReservationToTxt(passengers.at(i), outputFile);
          }
          outputFile.close();
      }
      else {
        cout << "Incorrect Password";
      }

  }
  return 0;
}
