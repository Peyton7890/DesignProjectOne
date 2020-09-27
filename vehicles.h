/**********************************************************/
/*** Title: vehicles.h                                  ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for vehicles class        ***/
/**********************************************************/
#include <iostream>

using namespace std;

class Vehicles {
  private:
    string vehicleColor;
    int availableSeats;
    vector<bool> seatOccupancy 18;

    int frontSeatVal = 1;
    int backSeatVal = 3;
    int sideBackSeatBal = 2;
    int middleBackSeatVal = 1;


  public:
    void displayVehicle();
    
}
