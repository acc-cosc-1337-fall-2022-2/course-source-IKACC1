#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
int main() 
{
	LOOP: string player_choice;
	std::cout<<"\n First Player! Please Enter (Capital) X or O:\t";//instructions specify capital  X or O not lowercase x or o, so I only allow those.
	std::cin>>player_choice;
	std::cin.clear();
	TicTacToe game;// instantiate
	if(player_choice!="X"&&player_choice!="O")//instructions say argument value must be X or O, so I Loop if not X or O.
		{
			std::cout<<"Enter (Capital) X or O to continue";
			goto LOOP;
		}
	game.start_game(player_choice);
	vector <int> previous_positions(10,0);//track previous moves for input validation.
	do //inner loop for marking board
	
	{	
		Position_Loop:int position;//will loop to here for bad input.
		std::cout<<"\n What position do you wish to play? Choose 1-9:\t";
		std::cin>>position;
		std::cin.clear();
		std::cin.sync();
		//input validation: if input not in proper range get new input.
		if (position!=1 && position!=2 && position!=3 && position!=4 && position!=5 && position!=6 && position!=7 && position!=8 && position!=9)
		{
			std::cout<<"\nPlease enter a single digit number between 1 & 9 to play\n";
			goto Position_Loop;
		}
		//bool repeat_flag=false;
		for(int i=0; i<previous_positions.size();i++)// instructions said to include input validation, so added loop that prevents playing previously played position.
			{
				if (previous_positions[i]==position)
					{
						std::cout<<"You can't play that position-- someone already did.";
						goto Position_Loop;
					}
				
			}
		previous_positions.push_back(position);// move has passed validation. add to list of accepted moves.
		game.mark_board(position);//mark board with accepted move
		game.display_board();// display board with updated moves
		if (game.game_over()==true)
			{
				string final_victor= game.get_winner();
				std::cout<<"\nThe Winner Is:\t"<<final_victor;
			}
	}
	while(game.game_over()==false);
	
	string continue_check;
	std::cout<<"\nDo you want to continue or exit? If you want to continue enter (Capital) Y. Enter any other key to exit:\t";
	std::cin>>continue_check;
	if(continue_check=="Y")//if input ==Y, control will go to beginning, clear board and begin game again.
		goto LOOP;

	return 0;
}