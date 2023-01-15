#include <iostream>

void PrintIntroduction(){
    //Message Start
    std::cout << "You are secret agent breaking into a secure server room.\n";  //Show text in terminal    
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

void PlayGame(){
    
    PrintIntroduction();

    //Declare 3 variables
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct;
    
    //Store player guess
    int GuessA , GuessB, GuessC;
    std::cout << std::endl; //line break
    std::cin >> GuessA >> GuessB >> GuessC;    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win!";
    }else
    {
        std::cout << "\nYou lose!";
    }    
}

int main()
{    
    PlayGame();

    return 0;
}