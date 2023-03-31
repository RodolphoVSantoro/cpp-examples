#include "player.h"

namespace global_variable_weirdness {
void damagePlayer(int damage) {
    player.health -= damage;
}
}  // namespace global_variable_weirdness