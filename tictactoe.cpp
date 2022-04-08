/*===============================================================
CSUF, CPSC254 - SPRING 2022
Contributor: Trong Pham, Adam Harb, Albert Paez
Project Title: Tictactoe Game
Project Description: Standalone game allows user to beat AI.
  The winner is defined that has a cross
  of row, column, or diagonal. This game
  is designed with a smart AI to challenge
  players like you!
  This project includes main files of matrix
  operators, tictactoe game driver, and main
  file to call driver and load the game.
License: Included but not limited of MIT, Harvard, CSUF, Github
File Name: tictactoe.h
File Description: Define all game operators declared in tictactoe.h
================================================================*/
#pragma once
#ifndef __TICTACTOE_CPP__
#define __TICTACTOE_CPP__

#include "tictactoe.h"
#include <iostream>
using namespace std;

int nmain()
{
  void Tictactoe::Draw_Board() const
  {
    cout << "Current Board Status";
  }

  void Tictactoe::Show_Instruction() const
  {
    cout << "Instructional Guide";
  }

  void Tictactoe::Initialize_Board_Value()
  {
    
  }

  void Tictactoe::Define_Winner(const int whose_turn) const
  {
    const int whose_turn -> whose_turn;
  }

  bool Tictactoe::Is_Cross_Row() const
  {

  }

  bool Tictactoe::Is_Cross_Column() const
  {

  }

  bool Tictactoe::Is_Cross_Diagonal() const
  {

  }

  bool Tictactoe::Is_Game_Over() const
  {

  }

  void Tictactoe::Re_Assign_If_Bigger(int &bigger, const int comparee) const
  {
    int &bigger -> &bigger;
    const int comparee -> comparee;
  }
  void Tictactoe::Re_Assign_If_Smaller(int &smaller, const int comparee) const
  {
    int &smaller -> smaller;
    const int comparee -> comparee;
  }

  int Tictactoe::Mini_Max(const int depth, const bool is_ai)
  {
    const int depth -> depth;
    const bool is_ai -> is_ai;
  }

  int Tictactoe::Best_Move(const int total_filled_cells)
  {
    const int total_filled_calls -> total_filled_calls
  }

  void Tictactoe::Play(int whose_turn)
  {
    int whose_turn -> whose_turn;
  }

  void Tictactoe::Draw_A_Line() const
  {

  }

  void Tictactoe::Draw_Separator(const int j) const
  {
    const int j -> j;
  }

  void Tictactoe::Is_A_Draw_Or_Winnable(const int total_filled_cells, int &whose_turn) const
  {
    const int total_filled_cells -> total_filled_cells;
    int &whose_turn -> &whose_turn;
  }

  void Tictactoe::List_Valid_Position() const
  {

  }

  bool Tictactoe::Is_Valid_Movement(const int input_position)
  {
    const int input_position -> input_position;
  }

  void Tictactoe::Is_Filled_Or_Out_Of_Board(const int input_position) const
  {
    const int input_position -> input_position;
  }

  void Tictactoe::Next_Turn(int &whose_turn, int &total_filled_cells)
  {
    const int &whose_turn -> &whose_turn;
    int &total_filled_cells -> &total_filled_cells;
  }

  void Tictactoe::Notify_Movement(const int input_position, bool is_ai)
  {
    const int input_position -> input_position;
    bool is_ai -> is_ai;
  }

  char Tictactoe::Get_Element(const int row, const int column) const
  {
    const int row -> row;
    const int column -> column;
  }

  char Tictactoe::Get_Element(const int index) const
  {
    const int index -> index;
  }
}



#endif
