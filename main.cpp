#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <unordered_map>
#include <functional>

struct Player {
    int sector;
    int energy;
};

// Function that gets the random sector number where the signal is
int sectorSignal() {
    int sectorNum = (std::rand() % 8) + 1;

    if (sectorNum >= 5) {
       sectorNum++;
    }

    return sectorNum;
}

// Move player to left sector and decrease energy by 1
void moveLeft(Player& player) {
    if (player.sector > 1) {
        player.sector = player.sector - 1;
        player.energy -= 1;
    } else {
        std::cout << "You are already in the leftmost sector. Cannot move left." << std::endl;
    }
}
// Move player to right sector and decrease energy by 1
void moveRight(Player& player) {
    if (player.sector < 9) {
        player.sector = player.sector + 1;
        player.energy -= 1;
    } else {
        std::cout << "You are already in the rightmost sector. Cannot move right." << std::endl;
    }
}

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Create a player object and initialize its sector and energy
    Player player;
    player.sector = 5;
    player.energy = 12;

    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    moveLeft(player);
    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    moveLeft(player);
    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    moveLeft(player);
    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    moveLeft(player);
    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    moveLeft(player);
    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    moveLeft(player);
    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    moveLeft(player);
    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    moveLeft(player);
    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    moveLeft(player);
    std::cout << "Current Sector: " << player.sector << "\n" << "Current Energy: " << player.energy << std::endl;
    return 0;
}