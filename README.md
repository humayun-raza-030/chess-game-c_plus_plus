# chess-game-c_plus_plus

# Chess Game in C++
## Overview
This project is a simple implementation of a two-player chess game in C++. The game allows players to start a new game, load a previous game, or quit the game. The chessboard is represented by a 2D array, and the game logic handles basic chess moves for all pieces.

## File Structure
chess.cpp: Contains the main game logic and functions to start and manage the game.


## Code Description:-

### Main Function:
The main function provides an entry point for the program. It presents the user with options to start a new game, load a previous game, or quit the game. Based on the user's choice, it directs the flow to the respective code blocks.
```
int main()
  {
      instruction:
      string instr;
      cout << "\t\t\t\tWelcome to Chess Game!\nFor Classic game enter 'C_game'\nFor Load previous game enter 'L_game'\nTo Quit Game enter 'Q_game'\nTo resign between game enter 'end'\nTo move one piece to another enter first location and after one space enter second location\n";
      cin >> instr;
      // Additional logic for different game states
  } 
```
### Game Initialization
When a new game is started, the main function initializes the game by opening a file to save game data. The game board is printed, and player moves are handled in a loop.
```
if (instr[0] == 'C' && instr[1] == '_' && instr[2] == 'g' && instr[3] == 'a' && instr[4] == 'm' && instr[5] == 'e')
{
    game:
    ofstream save;
    save.open("Data.txt");
    // Game initialization logic
}
```

### Move Validation and Execution
The player1 and player2 functions are responsible for validating and executing moves for the respective players. They check if the move is valid for the selected piece and update the board accordingly.
```
else if (chessboard[n1][m1] == 'K')
{
    if (diff == 1)
    {
        // Additional conditions for valid moves
    }
    else
    {
        cout << "\nInvalid Move!!!\n";
        return false;
    }
}
```
### Saving and Loading Game
The game state is saved to a file (Data.txt) after each valid move. Players can also load a previously saved game.
```
else if (instr[0] == 'L' && instr[1] == '_' && instr[2] == 'g' && instr[3] == 'a' && instr[4] == 'm' && instr[5] == 'e')
{
    ifstream save("Data.txt");
    char cb[8][8];
    if (save.is_open())
    {
        // Load game data
    }
    save.close();
    goto game;
}
```
### Exiting the Game
The player can quit the game by entering the appropriate command. The game then exits gracefully.
```
else if (instr[0] == 'Q' && instr[1] == '_' && instr[2] == 'g' && instr[3] == 'a' && instr[4] == 'm' && instr[5] == 'e')
{
    cout << "\nYou have successfully Quit the game\n";
    system("pause");
    return 0;
}
```

