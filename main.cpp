/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: main file for the design project      ***/
/**********************************************************/

#include "people.h"
#include "reservation.h"
#include "vehicles.h"
#include "pickup.h"
#include "sedan.h"
#include "compact.h"

#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <vector>

using namespace std;

ofstream inputFile;
vector<string> drivers;
vector<string> players;
vector<string> playerCredits;

//Opening the list of team members
inputFile.open("quidditch_team.dat");

//Inputting all of the drivers into a vector
for(int i = 0; i < 6; i++){
    string temp;
    cin >> temp;
    drivers.push_back(temp);
}

//Inputting all of the players and their credits into vectors
for(int i = 0; i < 18; i++){
    string temp;
    string temp2;

    cin >> temp;
    cin >> temp2;
    players.push_back(temp);
    playerCredits.push_back(temp2);
}

inputFile.close("quidditch_team.dat");

People driver1;
People driver3;
People driver4;
People driver5;
People driver6;

//Specify the color of the car NEED
driver1.assignDriver(drivers.at(1), 1);
driver2.assignDriver(drivers.at(2), 2);
driver3.assignDriver(drivers.at(3), 2);
driver4.assignDriver(drivers.at(4), 2);
driver5.assignDriver(drivers.at(5), 3);
driver6.assignDriver(drivers.at(6), 3);
