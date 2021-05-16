#include <iostream>

// Secret agent needs to guess 3 numbers based on certain attributes

int main() {
    std::cout << "You are a secret agent trying to steal valuable jewels from the Cooper Hewitt Museum in New York.";
    std::cout << std::endl;
    std::cout << "Unfortunately, the crown jewels are at the top level of the museum." << std::endl;
    std::cout << std::endl << "Enter the correct code on each floor to advance..." << std::endl;

    // Declare 3 numbers and calculate prod & sum
    const int CodeA = 7;
    const int CodeB = 3;
    const int CodeC = 5;

    
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProd = CodeA  * CodeB * CodeC;

    //Print sum and product to terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code." << std::endl;
    std::cout << "+ The codes add up to: " << CodeSum << std::endl;
    std::cout << "+ The product of the codes is: " << CodeProd << std::endl << std::endl;


// Store player guesses
    int GuessA, GuessB, GuessC;

    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProd == CodeProd) {
        std::cout << "You're correct! Advance to the next level!" << std::endl;
    } else {
        std::cout << "Incorrect. Try again";
    }

    return 0;
}
