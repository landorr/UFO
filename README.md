# UFO: The Game

Welcome to UFO: The Game, a two-player word-guessing game with a twist! Can you save yourself from being abducted by aliens? It's a battle of wits and survival where guessing the correct word is your only hope.

## How to Play
1. Player 1 sets a secret codeword.
2. Player 2 attempts to guess the codeword, one character at a time.
3. Each correct guess reveals part of the codeword.
4. Each incorrect guess reduces the number of remaining tries (starting at 7).
5. The game ends when:
   - The codeword is fully guessed (Player 2 wins).
   - The guess limit is reached, and the aliens abduct Player 2 (Player 1 wins).
6. Players switch roles after each round to see who can avoid abduction the longest!

## Features
### Simple Gameplay:
- A codeword is hidden, and players guess one letter at a time.
- Incorrect guesses decrease the number of remaining tries.

### Two-Player Mode:
- One player sets the word, and the other guesses.

### Victory and Defeat Conditions:
- Successfully guess the word to win.
- Fail to guess within the allowed attempts, and you'll be abducted!

## Repository Overview
### Main Functions
- **greet()**:
  - Displays the game instructions and rules to both players.

- **play_game()**:
  - Allows Player 1 to set a secret codeword.
  - Creates a hidden version of the codeword (with `_` for unrevealed letters).
  - Returns a `std::vector<std::string>` containing:
    - The original codeword.
    - The hidden version for Player 2 to guess.

- **guess(std::vector<std::string>&)**:
  - Manages the main gameplay loop.
  - Tracks guesses and updates the hidden codeword for correct guesses.
  - Decrements the remaining tries for incorrect guesses.
  - Ends the game when the word is guessed or the player runs out of guesses.

## Current Status
### Base Implementation:
- The game works with basic functionality.
- Players can set a codeword and guess letters one at a time.

### Known Limitations:
- Only supports single-character guesses.
- No error handling for invalid inputs or unexpected behavior.
- Gameplay lacks advanced features like saving progress or multiple rounds.
