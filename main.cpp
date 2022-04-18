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
File Name: main.cpp
File Description: Calling game driver file to load the game.
================================================================*/
#pragma once
#ifndef __MAIN_CPP__
#define __MAIN_CPP__

#include "tictactoe.h"
#include "test.h"

int main() {
  Test test_;
  test_.Test_Unit();
  test_.Test_Integrate();
  test_.Test_System();
  return 0;
}

#endif