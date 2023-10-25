#include <iostream>
#include <stdlib.h>


int main() {
  /* Rock, paper, scissors, lizard, spock, Game.

  Scissors cuts Paper.
  Paper covers Rock.
  Rock crushes Lizard.
  Lizard poisons Spock.
  Spock smashes Scissors.
  Scissors decapitate Lizard.
  Lizard eats Paper.
  Paper disproves Spock.
  Spock vaporizes Rock.
  (and as it always has) Rock crushes Scissors.

  */

  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

// 1 = rock, 2 = paper, 3 = scissors.
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

// asks for user input.
std::cout << "shoot! \n";
std::cin >> user;

// checks user input for valid entry.
if (user >= 1 && user <= 3) {
  
  // Displays user choice.
if (user == 1) {
  std::cout << "User chooses: ROCK!\n";
}
else if (user == 2) {
  std::cout << "User chooses: PAPER!\n";
}
else {
  std::cout << "User chooses: SCISSORS!\n";
}

// Displays the computer choice.
if (computer == 1) {
  std::cout << "Computer chooses: ROCK!\n";
}
else if (computer == 2) {
  std::cout << "Computer chooses: PAPER!\n";
}
else {
  std::cout << "Computer chooses: SCISSORS!\n";
}



// Determines the winner.
if (computer == 1 && user == 3) {
  std::cout << "Computer Wins!\n";
}
else if (computer == 2 && user == 1) {
  std::cout << "Computer Wins!\n";
}
else if (computer == 3 && user == 2) {
  std::cout << "Computer Wins!\n";
}
else if (computer == user) {
  std::cout << "Tie!\n";
}

else {
  std::cout << "User wins!\n";
}
}
else {
  std::cout << "Invalid Input\n";
}
return 0;
}
