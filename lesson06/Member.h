#ifndef MEMBER_H_
#define MEMBER_H_

#include <string>

class Member {
private:
    std::string full_name;
    int number;
    double weight;

public:
    Member(const std::string& name, int no, double w): full_name(name), number(no) {
        setWeight(w);
    }

    std::string getName() const { return  full_name; } // 氏名取得
    int getNumber() const { return number; } // 会員番号取得
    double getWeight() const {return weight; } // 体重取得
    void setWeight(double w) { // 体重設定
        weight = w > 0 ? w : 0;
    }

};


#endif //MEMBER_H_
