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
template <class T> void Matrix<T>::operator=(const T value) // assign the whole matrix by 1 const value
{
  for (int i = 0; i < SIDE; i++)
    for (int j = 0; j < SIDE; j++)
      (*this)(i, j) = value;
}
template <class T> bool Matrix<T>::exist_equalized_row() const // a row with same value
{
  matrix m = *this;
	int same_value_cases=0;
  for (int i = 0; i < SIDE; i++)
	{
		same_value_cases = 0;
		for (int j = 0; j < SIDE; j++)//how many same value pairs
    	if (m(i, 0) == m(i, j))//on the same row
      	same_value_cases += 1;
		if (same_value_cases == SIDE && m(i,0) != ' ')
			return true;
	}
  return false;
}
template <class T> bool Matrix<T>::exist_equalized_column() const // a column with same value
{
	matrix m = *this;
	int same_value_cases=0;
  for (int j = 0; j < SIDE; j++)
	{
		same_value_cases = 0;
		for (int i = 0; i < SIDE; i++)//how many same value pairs
    	if (m(0, j) == m(i, j))//on the same column
      	same_value_cases += 1;
		if (same_value_cases == SIDE && m(0,j) != ' ')
			return true;
	}
  return false;
}
template <class T> bool Matrix<T>::exist_equalized_main_diagonal() const // a main diagonal with same value
{
  matrix m = *this;
	int same_value_cases=0;
  for (int i = 0; i < SIDE; i++)
		if (m(0, 0) == m(i, i))
      	same_value_cases += 1;

	if (same_value_cases == SIDE && m(0,0) != ' ')
			return true;
  return false;
}
template <class T> bool Matrix<T>::exist_equalized_sub_diagonal() const // a sub diagonal with same value
{
	matrix m = *this;
	int same_value_cases=0;
  for (int i = 0; i < SIDE; i++)
		if (m(0, SIDE-1) == m(i, SIDE-i-1))
      	same_value_cases += 1;

	if (same_value_cases == SIDE && m(0,SIDE-1) != ' ')
			return true;
  return false;
}
template <class T> bool Matrix<T>::exist_equalized_diagonal() const // a diagonal with same value
{
  return exist_equalized_main_diagonal() || exist_equalized_sub_diagonal();
}

#endif
