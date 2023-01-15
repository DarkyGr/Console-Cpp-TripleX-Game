#include <iostream>

void PrintIntroduction(int Difficulty){
    //Message Start
    std::cout << "\n\nYou are secret agent breaking into a level " << Difficulty << " secure server room.\n";  //Show text in terminal    
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty){
    
    PrintIntroduction(Difficulty);

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
    std::cout << "\n\n-->Type the codes: "; 
    std::cin >> GuessA >> GuessB >> GuessC;    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win! :D" << "\n---------------------------------------------------";
        return true;
    }else
    {
        std::cout << "\nYou lose! X.X" << "\n---------------------------------------------------";
        return false;
    }    
}

int main()
{    
    int LevelDifficulty = 1;

    while (true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);                
        std::cin.clear();   //Clears any errors
        std::cin.ignore();  //Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }    

    return 0;
}