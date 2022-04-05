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
File Name: player.h
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
  if( test_expression == false ) { std::cout << ".FAILED "; \
  } \
  else { std::cout << ".Passed "; \
  } \
  std::cout << test_case_description << " "; \
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