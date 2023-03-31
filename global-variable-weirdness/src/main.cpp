#include <iostream>

#include "player.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << global_variable_weirdness::player.x << std::endl;
    std::cout << global_variable_weirdness::player.y << std::endl;
    return 0;
}