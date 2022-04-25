# TicTacToe
Tictactoe game with AI player
Algorithm that the AI will be using
https://www.educba.com/minimax-algorithm/

1.ORGANIZATION:
 1.1.DIRECTORY:
  |-const.h: define all constants needed for program: players/AI movements and signs, etc.
  |-matrix.h and .cpp: define matrix operator of set/get elements values, crossed events
  |-tictactoe.h and .cpp: define all board game operators: draw board, show instruction, AI playing features
  |-test.h and .cpp: implement test plan that illustrated in part 2. below
  +-main.cpp: call test cases defined and implemented in test class to test application in multiple testing levels.

 1.2.STRUCTURE:
  +--------------------------------------+        +-------------------------------------------------------------+
+>|class <type T> Matrix                 |<--+ =>>|class Tictactoe                                              |
| |--------------------------------------|   | || |-------------------------------------------------------------|
| | T matrix_[SIDE][SIDE]                |   +----| Matrix board_                                               |
| |--------------------------------------|     || |-------------------------------------------------------------|
| | &operator(row, column)               |     || | void Draw_Board()                                           |
| | &operator(index)                     |     || | void Show_Instruction()                                     |
| | opeator(row, column)                 |     || | void Initialize_Board_Value()                               |
| | operator(index)                      |     || | void Define_Winner(whose_turn)                              |
| | operator=(value)                     |     || | bool Is_Cross_Row()                                         |
| | bool Exist_Equalized_Row()           |     || | bool Is_Cross_Column()                                      |
| | bool Exist_Equalized_Column()        |     || | bool Is_Cross_Diagonal()                                    |
| | bool Exist_Equalized_Main_Diagonal() |     || | bool Is_Game_Over()                                         |
| | bool Exist_Equalized_Sub_Diagonal()  |     || | void Re_Assign_If_Bigger(&bigger, comparee)                 |
| | bool Exist_Equalized_Diagonal()      |     || | void Re_Assign_If_Smaller(&smaller, comparee)               |
| +--------------------------------------+     || | int Mini_Max(depth, is_ai)                                  |
|                                              || | int Best_Move(total_filled_cells)                           |
| +--------------------------------------+     || | void Play(int whose_turn)                                   |
| | class Test                           |     || | void Draw_A_Line()                                          |
| +--------------------------------------+     || | void Draw_Separator(j)                                      |
+=| Matrix<int> test_matrix_             |     || | void Is_A_Draw_Or_Winnable(total_filled_cells, &whose_turn) |
  | Tictactoe test_game_                 |=====++ | void List_Valid_Position()                                  |
  | int test_case_number                 |        | bool Is_Valid_Movement(input_position)                      |
  +--------------------------------------+        | void Is_Filled_Or_Out_Of_Board(input_position)              |
  | void Test_Unit()                     |        | void Next_Turn(&whose_turn, &total_filled_cells)            |
  | void Test_Integrate()                |        | void Notify_Movement(input_position, is_ai)                 |
  | void Test_System()                   |        | char Get_Element(row, column)                               |
  +--------------------------------------+        | char Get_Element(index)                                     |
                                                  +-------------------------------------------------------------+
2.TEST PLAN:
 2.1.unit test at matrix class
  - check element at (row, column) position
  - check element at (index) position
  - assign a value to an element at (row, column) position
  - assign a value to an element at (index) position
    
 2.2.integration test at tictactoe class
  - initialize the board value and test by:
    + check element at (row, column) position is empty or not
    + check element at (index) position is empty or not
  - test to see if there is any VALID crossed event along:
    + row
    + column
    + diagonal

 2.3.system and acceptance test at tictactoe class
  - call and run game at option that player plays firstly.
  - call and run game with option that AI plays firstly.
  - these 2 options are testing under acceptances conditions of:
    + is the board drawing ok?
    + is all board's initialized values are okay to be filled in
    + at any moment, the board check for:
      * VALID movement of player
      * AI can move freely and place VALID movement
      * AI can play fairly and can beat player with good intelligence of win or draw result

 3.INSTRUCTION TO RUN:
  3.1.Download the zip file, unzip file and open Terminal at that unzipped folder
  3.2.Compile and run with command make clean

 4.WORK CITED:
  4.1.“Minimax Algorithm in Game Theory: Set 1 (Introduction).” GeeksforGeeks, 24 Nov. 2021, https://www.geeksforgeeks.org/minimax-algorithm-in-game-theory-set-1-introduction/. 
  4.2.“Templates in C++.” GeeksforGeeks, 28 Jun. 2021, https://www.geeksforgeeks.org/templates-cpp/. 
  4.3.“Multidimensional Arrays in C / C++.” GeeksforGeeks, 20 Oct. 2021, https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/. 
  4.4.“How to Play Tic-Tac-Toe.” The Spruce Crafts, 12 May. 2020, https://www.thesprucecrafts.com/tic-tac-toe-game-rules-412170.
  4.5.“TicTacTo-with-AI.” Github, Prajwan-P, 29 Aug. 2020, https://github.com/Prajwal-P/TicTacToe-with-AI.
  4.6."Minimax Algorithm." Educba.com, Priya Pedamkar, 2020, https://www.educba.com/minimax-algorithm/
