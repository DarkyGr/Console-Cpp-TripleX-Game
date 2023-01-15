#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty){
    //Message Start
    std::cout << "\n\nYou are secret agent breaking into a level " << Difficulty << " secure server room.\n";  //Show text in terminal    
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty){
    
    PrintIntroduction(Difficulty);

    //Declare 3 variables
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print CodeSum and CodeProduct to the terminal
    std::cout << "\n+ There are 3 numbers in the code";
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
        std::cout << "\n>>> Well done agent! You have extracted a file! Keep going! <<<" << "\n---------------------------------------------------";
        return true;
    }else
    {
        std::cout << "\n>>> You entered the wrong code! Careful agent! Try again! <<<" << "\n---------------------------------------------------";
        return false;
    }    
}

int main()
{
    srand(time(NULL));  //Create new random sequence based on time of day

    int LevelDifficulty = 1;    //Level inital
    const int MaxDifficulty = 3;    //Level max

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);                
        std::cin.clear();   //Clears any errors
        std::cin.ignore();  //Discards the buffer

        //If you win the match, you level up.
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "\n\n*** Congratualtions agent!! You got all the files! Now get out of there! ***\n";

    return 0;
}