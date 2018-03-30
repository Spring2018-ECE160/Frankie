#include <iostream>
#include <string>
#include <item.h>
#include <FrankiesKitchen.h>

using namespace std;

int main()
{
    string s = "Spicy Chicken Sandwich";
    double c = 5.0;
    bool m = true;
    int r = 9;
    int t = 100;
    Item item(s, c, m, r, t);

    Item items[] = {item};
    //Item items[5];
    FrankiesKitchen fk(items);


    return 0;
}
