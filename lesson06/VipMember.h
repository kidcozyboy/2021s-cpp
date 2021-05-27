#ifndef VIP_MEMBER_H_
#define VIP_MEMBER_H_

#include "Member.h"

class VipMember: public Member {
private:
    std::string privilege;

public:
    VipMember(const std::string& name, int no, double w, const std::string& prv):
            Member(name, no, w) {
        setWeight(w);
        setPrivilege(prv);
    }

    std::string getPrivilege() const { return privilege; } // 特典取得
    void setPrivilege(const std::string & prv) { // 特典設定
        privilege = prv != "" ? prv : "未登録";
    }
};


#endif //VIP_MEMBER_H_
