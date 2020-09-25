/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for reservation class     ***/
/**********************************************************/
#include iostream

using namespace std;

class Reservation {
  private:
    vector<int> reservationNumber 18;

  public:
    int createReservation(string);
    void modifyReservation(int);
    void deleteReservation(int);
    void printReservation(int);
}
