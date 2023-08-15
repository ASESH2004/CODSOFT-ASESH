#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));  // Seed the random number generator with current time
    int secretNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100
    int userGuess;
    int numberOfGuesses = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    
    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        numberOfGuesses++;

        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << numberOfGuesses << " guesses.\n";
        }
    } while (userGuess != secretNumber);

    return 0;
}