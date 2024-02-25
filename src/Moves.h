#include "h.h"

class Moves {
    public:
        static vector<int> legalMoves;
        static vector<int> illegalMoves;
};

class Coordinates {

public:

    int rows = 3;
    int columns = 4;


// Declare a 2D vector (matrix)
    static vector<vector<int>> currentCoordinates;



    void setRows(int rows) {
        this->rows = rows;
    }

    void setColumns(int columns) {
        this->columns = columns;
    }
    
};

class CheckMove {
    
    public:

    static void calculateMove(void) {
        if (equal(
                Coordinates::currentCoordinates.begin(),
                Coordinates::currentCoordinates.end(),
                Moves::legalMoves.begin())) {
            // calls updateLayer() with the current coordinate
            // prints the board as well in the main function
        } else {
            cout << "your current move is an invalid move" << endl;
            printLegalMoves();
        }
   } 

   static void printLegalMoves() {
    for(auto v : Moves::legalMoves) {
        cout << "v" << endl;
    }
   }
};
