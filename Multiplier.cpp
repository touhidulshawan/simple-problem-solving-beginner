// find all multipliers of a number;

#include <iostream>

int main()
{
    int caseNumber;
    std::cin >> caseNumber;

    for (int i = 1; i <= caseNumber; i++)
    {
        int number;
        std::cin >> number;

        std::cout << "Case " << i << ":";

        for (int j = 1; j <= number; j++)
        {
            if (number % j == 0)
            {
                std::cout << " " << j;
            }
        }

        std::cout << std::endl;
    }
}