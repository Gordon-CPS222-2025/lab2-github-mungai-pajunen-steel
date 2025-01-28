// Tests for tictactoe.cc
//
// Author (starting point): Russ Tuck
// Authors (everything else: Benjamin Pajunen

#include <iostream>
using std::cout;
using std::endl;

#include "tictactoe.h"

bool tttb_winner_vertical_test() {
    TictactoeBoard b;
    b.set(0, 0, TictactoeXO::X);
    b.set(1, 0, TictactoeXO::X);
    if (TictactoeXO::X == b.winner()) {
        cout << "tttb_winner_vertical_test() failed for 2 in a row" << endl;
        return false;
    }
    b.set(2, 0, TictactoeXO::X);
    if (TictactoeXO::X != b.winner()) {
        cout << "tttb_winner_vertical_test() failed for 3 in a row" << endl;
        return false;
    }
    return true;
}

// Added by Benjamin Pajunen
bool tttb_winner_horizontal_test() {
    TictactoeBoard b;
    b.set(0, 0, TictactoeXO::O);
    b.set(0, 1, TictactoeXO::O);
    if (TictactoeXO::O == b.winner()) {
        cout << "tttb_winner_horizontal_test() failed for 2 in a row" << endl;
        return false;
    }
    b.set(0, 2, TictactoeXO::O);
    if (TictactoeXO::O != b.winner()) {
        cout << "tttb_winner_vertical_test() failed for 3 in a row" << endl;
        return false;
    }
    return true;
}

// Runs tests above, and prints a message if they all pass.
// If any fail, they print their own failure messages.
int main() {
    bool result = true;
    result &= tttb_winner_vertical_test();
    result &= tttb_winner_horizontal_test();        // Added by Benjamin Pajunen
    if (result) {
        cout << "All tests passed." << endl;
        return(0);
    }
    return(-1);
}
