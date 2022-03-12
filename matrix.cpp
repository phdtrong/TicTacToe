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
File Name: const.cpp
File Description: Define all matrix operators being declared in
  matrix.h
================================================================*/
#pragma once
#ifndef __MATRIX_CPP__
#define __MATRIX_CPP__

//header
#include "matrix.h"

template <class T> T& Matrix<T>::operator()(const int row, const int column) // get reference of value
{
  return mat[row][column];
}
template <class T> T Matrix<T>::operator()(const int row, const int column) const // get value
{
  return mat[row][column];
}
template <class T> T& Matrix<T>::operator()(const int array_index) // get reference of value
{
  return mat[array_index/SIDE][array_index%SIDE];
}
template <class T> T Matrix<T>::operator()(const int array_index) const // get value
{
  return mat[array_index/SIDE][array_index%SIDE];
}


#endif
