#pragma once

namespace global_variable_weirdness {
struct Player {
    int health;
    int x, y;
};
Player player{100, 0, 0};
}  // namespace global_variable_weirdness