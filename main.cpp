/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: main file for the design project      ***/
/**********************************************************/

#include "people.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {

    ofstream inputFile;
    vector<string> driverNames;
    vector<string> playerNames;
    vector<int> playerCredits;

//Opening the list of team members
    inputFile.open("quidditch_team.dat");

//Inputting all of the drivers into a vector
    for (int i = 0; i < 6; i++) {
        string temp;
        getline(cin, temp);
        driverNames.push_back(temp);
    }

//Inputting all of the players and their credits into vectors
    for (int i = 0; i < 18; i++) {
        string temp;
        char temp2;

        getline(cin, temp);
        temp.back() = temp2;
        temp.pop_back();
        temp.pop_back();
        playerNames.push_back(temp);
        playerCredits.push_back(temp2);
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
}