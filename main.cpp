#include <iostream>
#include <string>
#include <time.h>
#include <bits/stdc++.h>

#include "Game.h"

int main (void)
{
    srand(time(NULL)); 

    User player = User();
    User bot = User();
    bool game_is_on = true;
    std::string result_of_fight, continue_game_wish;

    possible_choices();

    while (game_is_on)
    {
        player.read_choice();

        bot.random_choice();

        std::cout << "\nROCK vs PAPER vs SCISSOR\n";
        std::cout << "\tG A M E  I S  O N\n";
        std::cout << "\n\tplayer choice is\n";
        player.show_choice();
        std::cout << "\n\tbot choice is \n";
        bot.show_choice();
        
        result_of_fight = player.fight(bot);
        std::cout << "\n\nResult of the game for you is " << result_of_fight << "." << std::endl;

        if (result_of_fight == "draw" || result_of_fight == "looser")
        {
            do{
                std::cout << "\nDo you want revenge? Yes / No\t";
                std::cin >> continue_game_wish;
                
                transform(continue_game_wish.begin(), continue_game_wish.end(), continue_game_wish.begin(), ::tolower);
            }while(continue_game_wish != "no" && continue_game_wish != "yes");

            if (continue_game_wish == "no")
            {
                game_is_on = false;
            }
        }
        else
        {
            do{
                std::cout << "Congratulation!\nDo you want another game? Yes / No\t";
                std::cin >> continue_game_wish;
                
                transform(continue_game_wish.begin(), continue_game_wish.end(), continue_game_wish.begin(), ::tolower);
            }while(continue_game_wish != "no" && continue_game_wish != "yes");
            
            if (continue_game_wish == "no")
            {
                game_is_on = false;
            }    
        }
        system("cls");
    }

    return 0;
};
