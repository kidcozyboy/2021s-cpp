#include <iostream>
#include "Member.h"
#include "VipMember.h"

using namespace std;

int main() {
    Member kenko("金子健太", 15, 75.2);
    VipMember mineya("峰屋龍次", 17, 89.2, "会費全額免除");

    double weight = kenko.getWeight();
    kenko.setWeight(weight - 3.7);
    cout << "No." << kenko.getNumber() << " : " << kenko.getName() << " (" << kenko.getWeight() << "kg) " << endl;

    weight = mineya.getWeight();
    mineya.setWeight(weight - 15.3);
    cout << "No." << mineya.getNumber() << " : " << mineya.getName() << " (" << mineya.getWeight() << "kg) " << "特典=" << mineya.getPrivilege() << endl;
}