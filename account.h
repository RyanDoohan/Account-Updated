#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account {
    private:
        int accountNumber;
        std::string username, password;

    public:
        Account(std::string usrname, std::string passwrd) { // Default constructor to assign a username and password to a new Account.
            username = usrname;
            password = passwrd;

            accountNumber = 1;
        }

        bool signIn() {
            bool signedIn = false;
            std::string usrname, passwrd;

            while(signedIn == false) {
                std::cout << "Enter your username here: ";

                std::getline(std::cin, usrname);

                if(usrname == username) {
                    std::cout << "Enter your password here: ";

                    std::getline(std::cin, passwrd);

                    while(passwrd != password) {
                        std::cout << "Incorrect password for " << username << ".\nEnter your password here: ";
                        
                        std::getline(std::cin, passwrd);
                    }

                    if(passwrd == password) {
                        std::cout << "Succesfully signed in!";
                        signedIn = true;
                        return signedIn;
                    }
                }
                std::cout << "User not found!";
            }
            return signedIn;
        }
};



#endif ACCOUNT_H_