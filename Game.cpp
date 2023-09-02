#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include<bits/stdc++.h>

#include "Game.h"

void User::read_choice()
{
    do
    {
        std::cout << "choose: rock \t paper \t scissor\n";
        std::cin >> choice;

        transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

    } while (choice != "rock" && choice != "paper" && choice != "scissor");

    
}

void User::random_choice()
{
    std::vector<std::string> possible_choices = {"rock", "paper", "scissor"};

    choice = possible_choices[rand() % 3];

    //std::cout << choice << std::endl;
}

void User::show_choice()
{
    if (this->choice == "rock")
    {
        std::cout << "    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n";
        return;
    }

    if (this->choice == "paper")
    {
        std::cout << "     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n";
        return;
    }

    if (this->choice == "scissor")
    {
        std::cout << "    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n";
        return;
    }


}

std::string User::fight(User bot)
{
    if (this->choice == bot.choice)
    {
        return "draw";
    }
    
    if ((this->choice == "rock" && bot.choice == "scissor") || (this->choice == "scissor" && bot.choice == "paper") || (this->choice == "paper" && bot.choice == "rock") )
    {
        return "winner";
    }
    else
    {
        return "looser";
    }
}

void possible_choices()
{
    std::cout << "rock\n" << "    _______\n---'   ____)\n      (_____)\n      (_____)\n      (____)\n---.__(___)\n" << std::endl;
    std::cout << "paper\n" << "     _______\n---'    ____)____\n           ______)\n          _______)\n         _______)\n---.__________)\n" << std::endl;
    std::cout << "scissor\n" << "    _______\n---'   ____)____\n          ______)\n       __________)\n      (____)\n---.__(___)\n" << std::endl;
}
