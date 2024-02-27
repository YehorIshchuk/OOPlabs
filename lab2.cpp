#include <iostream>
using namespace std;
#include "Staff.h"
#include "Customer.h"
#include "Menu.h"


int main() {
    Staff a(350, true);
    a.Print();

    Customer b;
    b.Print();

    Menu myMenu;
    myMenu.Print();

    return 0;
}
