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
License: Copyright (C) 2022 by
 Adam Harb, adamharb1999@csu.fullerton.edu
 Albert Paez, albertzeap@csu.fullerton.edu
 Trong Pham, phdtrong@csu.fullerton.edu
This game is a free software: you can redistribute it 
and/or modify it under the terms of the GNU General Public 
License as published by the Free Software Foundation.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
File Name: test.h
File Description: Declare all test operators/characteristic
================================================================*/
#pragma once
#ifndef __TEST_H__
#define __TEST_H__

#include "tictactoe.h"

/* Test_Case macro: utilize macro feature to:
   - execute an expression, 
   - then evaluate test_expression as Passed/FAILED result 
   - structure: 
     Test_Case(test_case_number, test_case_description, execute_expresion, test_expression)
*/

#define Test_Case(test_case_number, test_case_description, execute_expression, test_expression) \
  std::cout << " " << ++test_case_number << "\t"; \
  execute_expression; \
  if( test_expression == false ) { \
    std::cout << ".FAILED "; \
  } \
  else { \
    std::cout << ".Passed "; \
  } \
  std::cout << test_case_description; \
  std::cout << std::endl;

class Test {
private:
  Matrix<int> test_matrix_;
  Tictactoe test_game_;
  int test_case_number;

public:
  Test(); //constructor
  void Test_Unit(); //unit test at matrix level
  void Test_Integrate(); //integration test at game level
  void Test_System(); //system and acceptance test at application level
};
#endif
