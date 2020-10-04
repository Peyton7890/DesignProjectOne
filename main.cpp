/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: main file for the design project      ***/
/**********************************************************/

#include "people.h"
#include <iostream>
#include <iomanip>
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
    for(int i = 0; i < drivers.size(); i++){
      drivers.at(i).assignDriver(driverNames.at(i));
    }

    //Sets all passengers as part of the people class
    for(int i = 0; i < passengers.size(); i++){
      passengers.at(i).assignPassenger(playerNames.at(i), playerCredits.at(i));
    }

    cout << "Enter 'q' to quit, 'c' to create reservation, 'm' to modify";
    cout << " reservation, and 'd' to delete" << endl;
    cin >> userInput;

    while (userInput != 'q') {
      if (userInput == 'c') {
        cout << "Enter Player to Create" << endl;
        drivers.at(1).createReservation(drivers.at(1));
      }
      else if (userInput == 'm') {
        cout << "Enter Player to Modify" << endl;
        drivers.at(1).modifyReservation(drivers.at(1));
      }
      else if (userInput == 'd') {
        cout << "Enter Player to Delete" << endl;
        drivers.at(1).deleteReservation(drivers.at(1));
      }
      else {
        cout << "Not a valid option, please try again." << endl;
      }
      cout << "Enter 'q' to quit, 'c' to create reservation, 'm' to modify";
      cout << " reservation, and 'd' to delete" << endl;
      cin >> userInput;
    }
  return 0;
}
