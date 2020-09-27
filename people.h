/**********************************************************/
/*** Title: people.h                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for people class          ***/
/**********************************************************/

//#ifndef PEOPLEH
//#define PEOPLEH

#include <iostream>

using namespace std;

class People {
  private:
    int numOfCredits = 20;
    string name;
    string vehicleType;

  public:
    void assignPassenger(string passName);
    void printPassenger();

    void assignDriver(string driverName, int type); //Int 1 = pickup, int 2 = compact, int 3 = sedan
    void printDriver();

}
