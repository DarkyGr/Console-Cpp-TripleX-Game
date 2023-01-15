#include <iostream>

int main()
{   
    std::cout << "You are secret agent breaking into a secure server room.";  //Show text in terminal
    std::cout << std::endl; //line break
    std::cout << "You need to enter the correct codes to continue...";

    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b +c;
    const int product = a * b * c;

    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}