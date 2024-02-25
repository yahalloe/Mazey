/**
 * Board.cpp
 */

#include "h.h"
#include "Moves.h"

using namespace std;

class Board {
  
  public:

    static void printLegalMoves(void) {
      cout << "you can only move to ";
      for(auto v : Moves::legalMoves) {
        cout << "v" << endl;  
      }
    } 

};





