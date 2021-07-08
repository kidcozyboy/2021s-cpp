#ifndef SHOPPING_CART0_H
#define SHOPPING_CART0_H

#include <map>
#include <string>
#include <sstream>

class ShoppingCart0 {
private:
    std::map<std::string, int> shoppingCart;
    std::map<std::string, int> valueMap {
            {"りんご", 200},
            {"みかん", 300},
            {"もも", 400}
    };

public:
    void buy(std::string item, int amount) {
        if (shoppingCart.find(item) != shoppingCart.end()) {
            shoppingCart[item] += amount;
        } else {
            shoppingCart.insert(std::make_pair(item, amount));
        }
    }

    std::string getReceipt() {
        std::stringstream ss;
        for (const std::pair<std::string, int> shoppingItem : shoppingCart) {
            if (!(valueMap.find(shoppingItem.first) != valueMap.end())) {
                ss << shoppingItem.first << ": " << shoppingItem.second << "個 エラー" << std::endl;
                continue;
            }
            ss << shoppingItem.first << ": " << shoppingItem.second << "個" << " " << shoppingItem.second * valueMap[shoppingItem.first] << "円" << std::endl;
        }
        return ss.str();
    }

    std::string str() {
        std::stringstream ss;
        for (const std::pair<std::string, int> shoppingItem : shoppingCart) {
            ss << shoppingItem.first << ": " << shoppingItem.second << "個" << std::endl;
        }
        return ss.str();
    }
};

#endif //SHOPPING_CART0_H
