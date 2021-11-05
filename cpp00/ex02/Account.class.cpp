#include "Account.class.hpp"

Account::Account(int initialdeposit) : _amount(initialdeposit) {

}

Account::~Account(){}

int
Account::getNbAccounts() {

}

int
Account::getTotalAmount() {

}

int
Account::getNbDeposits() {
    return (Account::_nbDeposits);
}

int
Account::getNbWithdrawals() {
    return (Account::_nbWithdrawals);
}

void
Account::displayAccountsInfos() {

}
