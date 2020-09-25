/**********************************************************/
/*** Title: people.h                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin and Eric Guarracina     ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for people class          ***/
/**********************************************************/
#include iostream

using namespace std;

class People {
  private:
    int numOfCredits = 20;
    string name;
  public:
    void assignPassenger(string);
    void printPassenger();

    void assignDriver(string);
    void printDriver();

}
