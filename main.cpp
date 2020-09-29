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

People passenger1;
People passenger2;
People passenger3;
People passenger4;
People passenger5;
People passenger6;
People passenger7;
People passenger8;
People passenger9;
People passenger10;
People passenger11;
People passenger12;
People passenger13;
People passenger14;
People passenger15;
People passenger16;
People passenger17;
People passenger18;

//Specify the color of the car NEED
driver1.assignDriver(drivers.at(1), 1);
driver2.assignDriver(drivers.at(2), 2);
driver3.assignDriver(drivers.at(3), 2);
driver4.assignDriver(drivers.at(4), 2);
driver5.assignDriver(drivers.at(5), 3);
driver6.assignDriver(drivers.at(6), 3);

//Assigning Passengers
passenger1.assignPassenger(players.at(1), playerCredits.at(1));
passenger2.assignPassenger(players.at(2), playerCredits.at(2));
passenger3.assignPassenger(players.at(3), playerCredits.at(3));
passenger4.assignPassenger(players.at(4), playerCredits.at(4));
passenger5.assignPassenger(players.at(5), playerCredits.at(5));
passenger6.assignPassenger(players.at(6), playerCredits.at(6));
passenger7.assignPassenger(players.at(7), playerCredits.at(7));
passenger8.assignPassenger(players.at(8), playerCredits.at(8));
passenger9.assignPassenger(players.at(9), playerCredits.at(9));
passenger10.assignPassenger(players.at(10), playerCredits.at(10));
passenger11.assignPassenger(players.at(11), playerCredits.at(11));
passenger12.assignPassenger(players.at(12), playerCredits.at(12));
passenger13.assignPassenger(players.at(13), playerCredits.at(13));
passenger14.assignPassenger(players.at(14), playerCredits.at(14));
passenger15.assignPassenger(players.at(15), playerCredits.at(15));
passenger16.assignPassenger(players.at(16), playerCredits.at(16));
passenger17.assignPassenger(players.at(17), playerCredits.at(17));
passenger18.assignPassenger(players.at(18), playerCredits.at(18));


