#include<iostream>

int main()
{
    int favNumber;
    std::cout << "Enter your favourite number between 1 and 100: "; 
    std::cin >> favNumber;
    std::cout << "Amazing! That's my favourite number too!" << std::endl;
    std::cout << "No really, " << favNumber << " is my favourite number too!" << std::endl;
    return 0;
}