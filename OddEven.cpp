// problem: find even or odd number

#include <iostream>

int main()
{
    int numberOfInput;
    std::cin >> numberOfInput;
    int number[numberOfInput];

    // take input
    for (int i = 0; i < numberOfInput; i++)
    {
        std::cin >> number[i];
    }

    // check if number is odd or even and print it
    for (int i = 0; i < sizeof(number) / sizeof(number[0]); i++)
    {
        if (number[i] % 2 == 0)
        {
            std::cout << "even" << std::endl;
        }
        else
        {
            std::cout << "odd" << std::endl;
        }
    }
}