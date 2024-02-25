/**
 * Board.cpp
 */

#include "h.h"

using namespace std;

class Board {

  void static checkMove(void) {
    if (currentCoordinate == legalMoves) {
      // calls updateLayer() with the current coordinate
      // prints the board as well in the main function
    } else {
      cout << "your current move is an invalid move" << endl;
      printLegalMoves();
     }
   } 

    void static printLegalMoves(void) {
      cout << "you can only move to ";
      for(int v : legalMoves) {
        cout << "v" << endl;  
      }
    } 

}





