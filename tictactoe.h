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
File Description: Declare all game operators
================================================================*/
#pragma once
#ifndef __TICTACTOE_H__
#define __TICTACTOE_H__

#include "const.h"
#include "matrix.h"
using namespace std;

class Tictactoe
{
  private:
    Matrix<char> board_;

  public:
    // Display current board status
    void Draw_Board() const;
    // Display the game's guide
    void Show_Instruction() const;
    // Initialize the board
    void Initialize_Board_Value();
    // Who is the winner?
    void Define_Winner(const int whose_turn) const;
    // Is a player has a row crossed
    bool Is_Cross_Row() const;
    // Is a player has a column crossed
    bool Is_Cross_Column() const;
    // Is a player has a diagonal crossed
    bool Is_Cross_Diagonal() const;
    // Is the game over yet?
    bool Is_Game_Over() const;
    // Support re-assignor functions for comparing 2 numbers
    void Re_Assign_If_Bigger(int &bigger, const int comparee) const;
    void Re_Assign_If_Smaller(int &smaller, const int comparee) const;
    // For a specific movement, what is the score for that movement?
    int Mini_Max(const int depth, const bool is_ai);
    // What is the best movement
    int Best_Move(const int total_filled_cells);
    // Driver to play the game: human vs AI
    void Play(int whose_turn);
    // Draw a line with SIDE cell in each row
    void Draw_A_Line() const;
    // Draw a separator between 2 cell of a row
    void Draw_Separator(const int j) const;
    // Is game a DRAW or who actually won?
    void Is_A_Draw_Or_Winnable(const int total_filled_cells,
    int &whose_turn) const;
    // List out all current valid position
    void List_Valid_Position() const;
    // If the selected position is a valid movement
    bool Is_Valid_Movement(const int input_position);
    // Test if the selected position is filled or out out board
    void Is_Filled_Or_Out_Of_Board(const int input_position) const;
    // Move to next turn: redraw the board also
    void Next_Turn(int &whose_turn, int &total_filled_cells);
    // Notify the movenent to the screen
    void Notify_Movement(const int input_position, bool is_ai);
    // Fot testing purpose of getting an element value
    char Get_Element(const int row, const int column) const;
    char Get_Element(const int index) const;
  };

  #endif
