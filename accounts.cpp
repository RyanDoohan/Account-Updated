#include <iostream>
#include <string>

#include "account.h"

int main () {
    Account testAccount("Ryan", "BigBust");

    testAccount.signIn();

    return 0;
}