#include "ShoppingCart.h"
#include "CartItem.h"
#include <iostream>

using namespace std;

int main(void) {
    CartItem item2 {"Kekse", 4, 1.59};
    CartItem item3 {"Milch", 1, 0.69};
    CartItem item4 {"Erdbeerenmarmelade", 3, 2.19};

    ShoppingCart sc;
    sc.add(CartItem {"Hundefutter", 6, 3.20});  // oder direkt ihr definieren
    sc.add(item2);
    sc.add(item3);
    sc.add(item4);

    cout << sc.toString() << endl;
    return 0;
}