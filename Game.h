#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

class User
{
    private:
        std::string choice;
    public:
        User()
        {
            choice = " ";
        }
        ~User()
        {
            choice = "";
        }

        void read_choice();

        void random_choice();

        void show_choice();

        std::string fight(User bot);

};

void possible_choices();

#endif