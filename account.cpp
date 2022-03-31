#include <numeric>
#include "account.h"

void Account::makeWithdraw(Money money){
    withdrawfunction.push_back(money);
    //some function that withdraws
    flag =1;
}

void Account::makeDeposit(Money money){
    depositfunction.push_back(money);
    //some function that deposits money
    flag=1;
}

Account Money::calculateBalance(){


    Money M;

    if(flag ==1){

        //Find the total withdrawed and deposited
        //find the diffrence and print the final balance
        //reset flag to equal zero
        flag=0;
    }
}