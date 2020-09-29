/**********************************************************/
/*** Title: people.cpp                                  ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: people class                          ***/
/**********************************************************/
#include "people.h"
using namespace std;

 void People::assignPassenger(string passName, int currCredits){
     name = passName;
     credits = currCredits;
 }

void People::printPassenger(){
     cout << name;
 }

void People::assignDriver(string driverName){
     name = driverName;
 }

void People::printDriver(){
     cout << name;
 }

