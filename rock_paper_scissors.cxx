#include <bits/stdc++.h>
#include <iostream>
#include <string>

std::string get_RPS(int player)
{
	std::string rps;
        switch(player) {
		case 0:
			rps = "Rock";
			break;
		case 1:
			rps = "Paper";
			break;
		case 2:
			rps = "Scissors";
			break;
                       }
	return rps;
}

void who_wins(int computer, int player)
{
	if(computer == player)
	{
		std::cout << "It's a draw!" << std::endl;
	}
 	switch(player) {
		case 0:
			if (computer == 1)
				{std::cout << "You lose!" << std::endl;}
			if (computer == 2)
			        {std::cout << "You win!" << std::endl;}
			break;
		case 1:
			if (computer == 2)
                                {std::cout << "You lose!" << std::endl;}
                        if (computer == 1)
                                {std::cout << "You win!" << std::endl;}
			break;
		case 2:
			if (computer == 0)
                                {std::cout << "You lose!" << std::endl;}
                        if (computer == 1)
                                {std::cout << "You win!" << std::endl;}
                        break;
	}


	
}


int main()
{
	
	std::cout << "Welcome in the rock-paper-scissors game! You will play against the computer!" << 
		     " Now you have to type 0 (rock), 1 (paper), 2 (scissors). " << "\n";
    	
	
	
	while(true)
	{
		int player; //player choice
                std::cin >> player;

		int computer = rand() % 3;
		switch(computer) {
			case 0:
				std::cout << "(PC) Rock vs " << get_RPS(player) << " (You).";
					      who_wins(computer, player);
					      std::cout << "\n";

				break;
			case 1:
				std::cout << "(PC) Paper vs " << get_RPS(player) << " (You).";
                                              who_wins(computer, player);
					      std::cout << "\n";


				break;
			case 2:
				std::cout << "(PC) Scissors vs " << get_RPS(player) << " (You).";
                                              who_wins(computer, player);
					      std::cout << "\n";

				break;  
		}

	} 
	return 0;
}       

