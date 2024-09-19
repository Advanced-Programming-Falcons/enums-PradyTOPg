#include <iostream>

// Declare an enum called GameMode with states Easy, Medium, and Hard
enum GameMode {
    Easy = 1,
    Medium = 25,
    Hard = 30
};

int main() {
    GameMode selectedMode = Medium;

    
    switch (selectedMode) {
        case Easy:
            std::cout << "Selected mode: Easy" << std::endl;
            std::cout << "You're playing it safe! The enemies will be easy to defeat." << std::endl;
            break;
        case Medium:
            std::cout << "Selected mode: Medium" << std::endl;
            std::cout << "Good luck! The enemies will be " << Medium << " times more challenging than easy!" << std::endl;
            break;
        case Hard:
            std::cout << "Selected mode: Hard" << std::endl;
            std::cout << "You're a daredevil! The enemies will be " << Hard << " times more challenging than easy!" << std::endl;
            break;
        default:
            std::cout << "Invalid game mode selected." << std::endl;
            break;
    }

    return 0;
}
