#include <iostream>
#include <string>

#include "account.h"

struct User {
    std::string username, password;
};

void generateNewUser(User & aUser);

int main () {
    User newAccount;

    generateNewUser(newAccount);

    Account testAccount(newAccount.username, newAccount.password);

    testAccount.signIn();

    return 0;
}

void generateNewUser(User & aUser) {
    std::cout << "To create a new account enter a username here: ";
    std::getline(std::cin, aUser.username);

    std::cout << "Enter a password for your account: ";
    std::getline(std::cin, aUser.password);
}