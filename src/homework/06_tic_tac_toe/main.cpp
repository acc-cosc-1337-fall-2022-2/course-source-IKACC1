#include "tic_tac_toe.h"
#include <iostream>
int main() 
{
	LOOP: string player_choice;
	std::cout<<"\n First Player! Please Enter (Capital) X or O:\t";//instructions specify capital  X or O not lowercase x or o, so I only allow those.
	std::cin>>player_choice;
	TicTacToe game;// instantiate
	if(player_choice!="X"&&player_choice!="O")//instructions say argument value must be X or O, so I Loop if not X or O.
		{
			std::cout<<"Enter (Capital) X or O to continue";
			goto LOOP;
		}
	game.start_game(player_choice);
	do //inner loop for marking board
	{	
		int position;
		std::cout<<"\n What position do you wish to play? choose 1-9:\t";
		std::cin>>position;
		game.mark_board(position);
		game.display_board();

	}
	while(game.game_over()==false);
	string continue_check;
	std::cout<<"\nDo you want to continue or exit? if you want to continue press y:\t";
	std::cin>>continue_check;
	if(continue_check=="y")//if input ==y, control will go to beginning, clear board and begin game again.
		goto LOOP;

	return 0;
}