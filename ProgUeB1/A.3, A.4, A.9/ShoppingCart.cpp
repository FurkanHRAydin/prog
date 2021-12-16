#include "ShoppingCart.h"
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

ShoppingCart::ShoppingCart() {
    items = vector<CartItem>{};
}

void ShoppingCart::add(const CartItem &c) { //call by referenz ///// warum const ????
    items.push_back(c);
}

double ShoppingCart::getTotalCost() {
    double sum = 0;
    for (auto &x : items) { //&x spart unnotiges kopieren
        sum += x.getCost();
    }
    return sum;
}

int ShoppingCart::getNumbersOfItemns() {
    return items.size();
}

CartItem ShoppingCart::getItem(int i) {
    return items.at(i);
}

string ShoppingCart::toString() {
    ostringstream os;
    for(auto &x : items) {
        os << x.toString() << endl;
    }
    os << endl;
    os << setw(7) << left << "Summe :";
    os << setw(40) << right << getTotalCost();

    return os.str(); 
}
