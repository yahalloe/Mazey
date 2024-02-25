#include "h.h"
#include "Board.h"
#include "Moves.h"

int main(void) {

    Coordinates::currentCoordinates;

    Coordinates::currentCoordinates.push_back({1,1});

    Moves moves;

    CheckMove::calculateMove();

}