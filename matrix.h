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
File Name: matrix.h
File Description: Includes all matrix operator declartions.
================================================================*/
#pragma once
#ifndef __MATRIX_H__
#define __MATRIX_H__
#include "const.h"

template <class T> class matrix
{
  private:
    //private member function which can be accessed in the class
    T mat[SIDE][SIDE];
};
#include "matrix.cpp"
#endif
/*===============================================================
Side node: This is the link to resolve linking issues that is
  associated with the separation of .h and .cpp files.
Link: https://tinyurl.com/Hehehe121
Selected solution: add .cpp file at the end of .h file as includers
Original link:www.codeproject.com/Articles/48575/
How-to-Define-a-Template-Class-in-a-h-File-and-Imp
================================================================*/
