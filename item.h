#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class Item{

public:
    string name;
    double cost;
    bool makeItHot;
    int rating;
    int temperature;

    Item() {cout << "EMPTY CONSTR" << endl;};

    Item(string n, double c, bool m,
         int r, int t) : name(n), cost(c),
         makeItHot(m), rating(r), temperature(t) 
         {cout << "CONSTRUCTOR" << endl;};

    ~Item() {cout << "DESTRUCTOR" << endl;};

    Item (const Item &i) {cout << "COPY CONSTRUCTOR" << endl;}

};

#endif // ITEM_H
