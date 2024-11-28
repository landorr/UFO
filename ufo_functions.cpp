#include "ufo_functions.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
// Created by lando on 11/25/2024.

// Greet the player(s), explain instructions.
void greet() {
    std::cout << "\n==============================  UFO: The Game  ==============================\n";
    std::cout << "==============================================================================\n";
    std::cout << "Instructions: Guess the code word to prevent the UFO from abducting you!.\n";
    std::cout << "Player 1, will set a word, and Player 2 will guess it.\n";
    std::cout << "Then players will switch places, until someone gets abducted.\n";
    std::cout << "To succeed, players much guess the code word one character at a time.\n";
    std::cout << "If the code word does not include the character the player guessed, the player loses a point.\n";
    std::cout << "If a player runs out of points, the aliens will abduct them. The player that is abducted loses.\n";
    std::cout << "==============================================================================\n";
    std::cout << std::endl;
}

// Game start, creates vector with codeword an
std::vector<std::string> play_game() {
    std::cout << "\n=============\n";
    std::cout << "Player 1, set a codeword for Player 2 to guess: \n";
    std::vector<std::string> word_pair;
    std::string codeword;
    std::cin >> codeword;
    std::string hidden_codeword;


    for (int i = 0; i < codeword.length(); i++) {
        hidden_codeword += "_";
    }
    word_pair.push_back(codeword);
    word_pair.push_back(hidden_codeword);
    std::cout << "The hidden codeword has " << codeword.size() << " letters: ";
    std::cout << hidden_codeword << " and you have 7 guesses." << std::endl;
    return word_pair;
}

// Main section of the game. Initialized to 7 maximum tries to easily display remaining tries
void guess(std::vector<std::string>& play_game_value) {
    int guess_index = 7;
    char guess;

    // Repeat while the codeword is not guessed and there are guesses remaining
    while (play_game_value[0] != play_game_value[1] && guess_index > 0) {
        std::cout << "What's your guess?\n";
        std::cin >> guess;

        // Check codeword char by char
        for (int i = 0; i < play_game_value[0].size(); i++) {
            if (guess == play_game_value[0][i]) {
                play_game_value[1][i] = play_game_value[0][i]; // Reveal correct guess
            }
        }

        // Reduction of total guesses if the guess is incorrect
        if (!std::count(play_game_value[0].begin(), play_game_value[0].end(), guess)) {
            guess_index--; // Decrease remaining guesses
            std::cout << "Wrong guess!\n";
            std::cout << "Remaining guesses: " << guess_index << "\n" << std::endl; // Only prints remaining guesses if the number changes
        }

        // Print the current status of the codeword
        std::cout << play_game_value[1] << " \n" << std::endl;
    }

    // Final results
    if (play_game_value[0] == play_game_value[1]) {
        std::cout << "Congratulations! You guessed the word.\n";
    } else {
        std::cout << "Game over! The correct word was: " << play_game_value[0] << "\n";
    }
}

