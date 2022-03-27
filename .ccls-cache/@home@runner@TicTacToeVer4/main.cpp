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

#include "tictactoe.h" //header file

int main()
{
	tictactoe game; //initializing variable tictactoe to game
	cout<<"--------------------------"<<endl;
	cout<<"\t\t TIC-TAC-TOE"<<endl; //write for display
	cout<<"--------------------------"<<endl;
	char cont='y';
	do //do-while loop
	{
		char choice; //making a choice
	 	cout << "Do you want to start first?(y/n):" <<endl; //Choose yes or no
	 	cin >> choice; //user can can enter what they desire

		if(choice=='n') //if they choose no
			game.play(AI); //the opponent will start first
		else if(choice=='y') //if they choose yes
			game.play(PLAYER);//the player will start first
		else //if they pick something other than yes or no
			cout << "Invalid choice" << endl; //not the right choice...try again

		cout <<"Do you want to quit(y/n):" << endl; //Do you want to give up?
		cin >> cont; //yes or no
	}
	while(cont=='n'); //they don't want to play the game
	return 0; //return the function
}

#endif
