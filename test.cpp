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
File Name: player.cpp
File Description: Define all player operation declared in test.h
================================================================*/
#pragma once
#ifndef __TEST_CPP__
#define __TEST_CPP__

#include "test.h"
Test::Test() : test_case_number(0) { /* nothing else */ } // constructor
//Test to see if the single units inside the matrix template class is runable and run precisely
void Test::Test_Unit() {
  test_matrix_ = 2;
  std::cout << "A.Assigned matrix's elements to 2, begin to test matrix class\n";
  
  //Below is list out multiple test cases for needed (row,  column) operators
  Test_Case(test_case_number, ".test_matrix_(2,2) == 2", NULL, test_matrix_(2,2) == 2 );
  Test_Case(test_case_number, ".test_matrix_(0,0) == 2", NULL, test_matrix_(0,0) == 2 );
  
  Test_Case(test_case_number, ".test_matrix_(2,3) != 2", NULL, test_matrix_(2,3) != 2 );
  Test_Case(test_case_number, ".test_matrix_(3,0) != 2", NULL, test_matrix_(3,0) != 2 );
  Test_Case(test_case_number, ".test_matrix_(-1,0) != 2", NULL, test_matrix_(-1,0) != 2 );
  Test_Case(test_case_number, ".test_matrix_(-1,-1) != 2", NULL, test_matrix_(-1,-1) != 2 );
  Test_Case(test_case_number, ".test_matrix_(0,-1) != 2", NULL, test_matrix_(0,-1) != 2 );
  
  //Now, let's test the getting operators at (index) options
  Test_Case(test_case_number, ".test_matrix_(8) == 2", NULL, test_matrix_(8) == 2 );
  Test_Case(test_case_number, ".test_matrix_(0) == 2", NULL, test_matrix_(0) == 2 );
  
  Test_Case(test_case_number, ".test_matrix_(9) != 2", NULL, test_matrix_(9) != 2 );
  Test_Case(test_case_number, ".test_matrix_(-1) != 2", NULL, test_matrix_(-1) != 2 );

  //Exit equalized row, column, diagonal?
  Test_Case(test_case_number, ".test_matrix_.Exist_Equalized_Column() == true", 
    NULL, test_matrix_.Exist_Equalized_Column() == true);
  Test_Case(test_case_number, ".test_matrix_.Exist_Equalized_Row() == true", 
    NULL, test_matrix_.Exist_Equalized_Row() == true);
  Test_Case(test_case_number, ".test_matrix_.Exist_Equalized_Sub_Diagonal() == true", 
    NULL, test_matrix_.Exist_Equalized_Sub_Diagonal() == true);
  Test_Case(test_case_number, ".test_matrix_.Exist_Equalized_Main_Diagonal() == true", 
    NULL, test_matrix_.Exist_Equalized_Main_Diagonal() == true);
  //no more equalized main diagonal and sub diagonal
  std::cout << "Let see what if no more crossed diagonal (sub and main ones) \n";
  Test_Case(test_case_number, ".test_matrix_.Exist_Equalized_Diagonal() == false", 
    test_matrix_(1,1)=3, test_matrix_.Exist_Equalized_Diagonal() == false);
  
  std::cout << "Finished matrix test \n";
  std::cout << "-------------------------------------------------------------\n";
}
//Let's conduct the integration test for the board game by initializing it first and test main test cases
void Test::Test_Integrate() {
  //Initialise the board game
  test_game_.Initialize_Board_Value();
  std::cout << "B.Initilized all game position as blanks, begin to test tictactoe class\n";
  
  //How to make sure it initialized correctly, test em!
  Test_Case(test_case_number, ".exist VALID element type 1?", NULL , test_game_.Get_Element(1,1) == ' ');
  Test_Case(test_case_number, ".exist VALID element type 2?", NULL , test_game_.Get_Element(9-1) == ' ');
  
  //How about there are some in-valid positions when trying to get the an element from the board  
  Test_Case(test_case_number, ".exist IN-VALID element type 1?", NULL , test_game_.Get_Element(0,-1) != ' ');
  Test_Case(test_case_number, ".exist IN-VALID element type 1?", NULL , test_game_.Get_Element(-1,-1) != ' ');
  Test_Case(test_case_number, ".exist IN-VALID element type 1?", NULL , test_game_.Get_Element(3,3) != ' ');
  Test_Case(test_case_number, ".exist IN-VALID element type 2?", NULL , test_game_.Get_Element(9) != ' ');
  Test_Case(test_case_number, ".exist IN-VALID element type 2?", NULL , test_game_.Get_Element(-1) != ' ');
  
  //How about the valid crossed row, column, diagonal?
  Test_Case(test_case_number, ".exist NO crossed row?", NULL , test_game_.Is_Cross_Row() == false );
  Test_Case(test_case_number, ".exist NO crossed column?", NULL , test_game_.Is_Cross_Column() == false );
  Test_Case(test_case_number, ".exist NO crossed diagonal?", NULL , test_game_.Is_Cross_Diagonal() == false );
  
  //Basically it is for thet tictactoe integrated with the matrix underneath
  std::cout << "Finished tictactoe test \n";
  std::cout << "-------------------------------------------------------------\n";
  }
//Now, let see if we can run the game as a whole application for real playing purposes
//Given the tictactoe game object, let's see if all flows are correctly show and work...
void Test::Test_System() {
  std::cout << "C.Initilized the program, begin to test the whole program\n";
  
  //Initialize the game object and list out the welcome sign to players
  Tictactoe game;
  cout << "-------------------------------------------" << endl;
  cout << "\t\t TIC-TAC-TOE-GAME" << endl;
  cout << "-------------------------------------------" << endl;
  //To prompt user if they want to continue playing with the game
  char is_continue = 'y';
  //Let's giving player fun time by playing game unitl they are tired!!!
  do {
    //Kindly check if player wanna play first or AI plays first
    char player_choice;
    cout << "Do you want to start the game first?(y/n):" << endl;
    cin >> player_choice;
    //...then kickstart corresponding actions
    if (player_choice == 'n' || player_choice == 'N')
      game.Play(AI);
    else if (player_choice == 'y' || player_choice == 'Y')
      game.Play(PLAYER);
    //Here is the place to check if our game object does check the invalid choices
    else
      cout << "It is an invalid choice" << endl;
    //End game, wanna end the application now?
    cout << "Do you want to quit the game now? (y/n):" << endl;
    cin >> is_continue;
  } while (is_continue == 'n' || is_continue == 'N');
  std::cout << "Finished all tests \n";
  std::cout << "-------------------------------------------------------------\n";
}

#endif
