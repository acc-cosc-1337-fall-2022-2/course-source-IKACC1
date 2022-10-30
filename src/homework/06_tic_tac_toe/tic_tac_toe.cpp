//cpp
#include "tic_tac_toe.h"
#include <iostream>
#include <iomanip>
void TicTacToe::start_game(string first_player)
{
if (first_player=="X"||first_player=="O")
   {
        TicTacToe::player= first_player;
        TicTacToe::clear_board(); 
   } 
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1]=player;
    TicTacToe::set_next_player();
}
string TicTacToe::get_player()const
{
    return TicTacToe::player;
}

void TicTacToe::display_board()const
  {
    for(int i=0; i<9; i++)
    {   if (i==3||i==6)
           {std::cout<<"\n";}
        std::cout<<pegs[i];
        if(i!=2&&i!=5&&i!=8)
            std::cout<<"|";
    }
    }
  void TicTacToe::set_next_player()
  {
    if(TicTacToe::player=="X")
        TicTacToe::player="O";
    else
    player="X";
  }

  bool TicTacToe::check_board_full()
  {
    bool space_checker=true;
    for(int i=0; i<9;i++)
            if(TicTacToe::pegs[i]==" ")
                space_checker=false;
    return space_checker;
  }
   void TicTacToe::clear_board()
   {
        for(int i=0; i<9;i++)
                (TicTacToe::pegs[i])=" ";
   }

  bool TicTacToe::game_over()
  {
      return check_board_full();
  }
