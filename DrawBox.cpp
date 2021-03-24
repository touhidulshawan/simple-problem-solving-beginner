// print a number x number box using * character

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int caseNumber;
    cin >> caseNumber;

    for (int i = 1; i <= caseNumber; i++)
    {
        int number;
        cin >> number;

        for (int j = 0; j < number; j++)
        {
            for (int k = 0; k < number; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}