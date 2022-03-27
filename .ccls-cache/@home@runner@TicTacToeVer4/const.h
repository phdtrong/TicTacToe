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
File Name: const.h
File Description: Includes all constant of the project
================================================================*/

#pragma once
#ifndef __CONST_H__
#define __CONST_H__
#include <iostream>
using namespace std;

//Artificial Intelligece like CPU; the opponent in the game
#define AI 1
#define PLAYER 2

//Length of the board
#define SIDE 3

#define NEGATIVE_INFINITY -9999
#define POSITIVE_INFINITY 10000
//Symbol of AI movement(AI_MOVE) or PLAYER movement(PLAYER_MOVE)
#define AI_MOVE 'O'
#define PLAYER_MOVE 'X'

#endif
