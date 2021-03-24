// print number 1000 to 1
// In each row there will be 5 number and every number will have a tab character

// - SOLUTION
#include <iostream>

int main()
{
    int temp = 0;
    for (int i = 1000; i >= 1; i--)
    {
        std::cout << i << "\t";
        temp++;

        if (temp % 5 == 0)
        {
            std::cout << std::endl;
            temp = 0;
        }
    }
    return 0;
}