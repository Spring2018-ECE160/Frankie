#include <string>
#include <item.h>
#include <iostream>

using namespace std;

class FrankiesKitchen{

public:
    Item *items;
    int itemCount;
    string *staff;
    int staffCount;

    FrankiesKitchen(Item i[]) {items = i; cout << "FK CONSTRUCTOR" << endl;};
    ~FrankiesKitchen() {cout << "FK DESTRUCTOR" << endl;};

};
