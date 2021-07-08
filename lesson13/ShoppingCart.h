#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <map>
#include <string>
#include <sstream>

class ShoppingCart {
private:
    std::map<std::string, int> shoppingCart;

public:
    void buy(std::string item, int amount) {
        if (shoppingCart.find(item) != shoppingCart.end()) {
            shoppingCart[item] += amount;
        } else {
            shoppingCart.insert(std::make_pair(item, amount));
        }
    }

    std::string str() {
        std::stringstream ss;
        for (const std::pair<std::string, int> shoppingItem : shoppingCart) {
            ss << shoppingItem.first << ": " << shoppingItem.second << "個" << std::endl;
        }
        return ss.str();
    }
};

#endif //SHOPPING_CART_H
