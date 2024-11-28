#include <iostream>
#include "ufo_functions.h"
#include <vector>


int main() {
    greet();
    std::vector<std::string> word_pair = play_game();
    guess(word_pair);
    return 0;
}

