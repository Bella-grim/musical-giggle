#include "Level.h"

// Static method implementation
std::string Level::displayLevel(int level) {
    switch (level) {
        case 1: return "★ ☆ ☆ ☆ ☆ (1)";
        case 2: return "★ ★ ☆ ☆ ☆ (2)";
        case 3: return "★ ★ ★ ☆ ☆ (3)";
        case 4: return "★ ★ ★ ★ ☆ (4)";
        case 5: return "★ ★ ★ ★ ★ (5)";
        default: return "☆ ☆ ☆ ☆ ☆ (0)";  // Default case for an undefined level
    }
}