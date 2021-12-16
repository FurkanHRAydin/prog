#include <vector>
#include <string>
#include "CartItem.h"
#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

using std::vector;
using std::string;

class ShoppingCart {
    private:
        vector<CartItem> items;
    public:
        ShoppingCart();
        void add(const CartItem &c); //call by referenz mit alias//// warum const???? aber & nicht notwendig
        double getTotalCost();
        int getNumbersOfItemns();
        CartItem getItem(int i); 
        string toString();
};
#endif
