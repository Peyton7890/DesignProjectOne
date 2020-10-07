/**********************************************************/
/*** Title: people.cpp                                  ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: People Class                          ***/
/**********************************************************/
#include "people.h"

using namespace std;

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: assignPassenger()
Input: (2) string passName, int currCredits
Output: (0)
Purpose: assigns passenger and credits inside the People class
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void People::assignPassenger(string passName, int currCredits){
    name = passName;
    credits = currCredits;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printPassenger()
Input: (0)
Output: prints (string) name
Purpose: allows the user to call a function to print the passengers name
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void People::printPassenger(){
    cout << name;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: assignPassenger()
Input: (1) string driverName
Output: assigns
Purpose: assigns the driver their name inside the class
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void People::assignDriver(string driverName){
    name = driverName;
}


