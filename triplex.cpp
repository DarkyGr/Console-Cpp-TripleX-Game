#include <iostream>

int main()
{   
    //Message Start
    std::cout << "You are secret agent breaking into a secure server room.";  //Show text in terminal
    std::cout << std::endl; //line break
    std::cout << "You need to enter the correct codes to continue..." << std::endl;

    
    //Declare 3 variables
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;
    

    //Getting user input
    int GuessA , GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;    //Store text
    std::cout << "+ You entered: " << GuessA << " " << GuessB << " " << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!" << std::endl;
        std::cout << "+ The guess and codes add-up to: " << GuessSum << std::endl;
        std::cout << "+ The guess and codes multiply to give: " << GuessProduct << std::endl;
    }else
    {
        std::cout << "You lose!" << std::endl;
    }
    

    return 0;
}