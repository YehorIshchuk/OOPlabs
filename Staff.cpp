#include "Staff.h"

Staff::Staff(int valuex, bool boolean) {
       priceofdelivery = valuex;
        if (boolean) {
            freecars = 1;
        } else {
            cout << "No cars available" << endl;
        }
    }
 