#include <iostream>

int main() {
 
  double weight;
  int planet;

  // Requests user weight.
  std::cout << "What is your Earth weight in lbs: ";
  std::cin >> weight;

  // Converts your weight from lbs to kilograms.
  weight = weight / 2.2; 

  // outputs your weight in kilograms.
  std::cout << "Here is your weight converted to kilograms: " << weight << "\n";

  // outputs planet designation numbers.
  std::cout << "Here are the planet designation numbers:\n"; 
  std::cout << "1. Mercury, 2. Venus, 3. Mars, 4. Jupiter\n";
  std::cout << "5. Saturn, 6. Uranus, 7. Neptune\n\n";

  // Requests user input for planet.
  std::cout << "Enter the designated planet number you wish to fight on: ";
  std::cin >> planet;

  // selection calculates the weight for the given planet.
  if (planet == 1) {
     weight = (weight * 3.7) * 0.2244897959183673;
     std::cout << "Your weight on the following plantet is: " << weight << 
  " lbs.\n";
  }
  else if (planet == 2) {
      weight = (weight * 8.87) * 0.2244897959183673;
      std::cout << "Your weight on the following plantet is: " << weight << 
  " lbs.\n";
  }
  else if (planet == 3) {
      weight = (weight * 3.7) * 0.2244897959183673;
      std::cout << "Your weight on the following plantet is: " << weight << 
  " lbs.\n";
  }
  else if (planet == 4) {
      weight = (weight * 24.79) * 0.2244897959183673;
      std::cout << "Your weight on the following plantet is: " << weight << 
  " lbs.\n";
  }
  else if (planet == 5) {
      weight = (weight * 10.44) * 0.2244897959183673;
      std::cout << "Your weight on the following plantet is: " << weight << 
  " lbs.\n";
  }
  else if (planet == 6) {
      weight = (weight * 8.87) * 0.2244897959183673;
      std::cout << "Your weight on the following plantet is: " << weight << 
  " lbs.\n";
  }
  else if (planet == 7) {
      weight = (weight * 11.15) * 0.2244897959183673;
      std::cout << "Your weight on the following plantet is: " << weight << 
  " lbs.\n";
  }
  else {
    std::cout << "Invalid Entry.\n";

  }

// Outputs the calculated weight in lbs.
  
}
