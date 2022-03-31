#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
#include "Money.h"

class Account: 

public Money {

private: 

    std::vector<Money> makeDeposit;
    std::vector<Money> makeWithdrawals;
    int flag = {0};
    int count = {0};

public: 


    void makeDeposit(Money money);
    void makeWithdraw(Money, money);
    Money calculateBalance();

    virtual~Account();

};

#endif