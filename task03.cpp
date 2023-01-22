#include <iostream>
using namespace std;
int totaldigits(int number);
main()
{
    int number;
    cout << "Enter number:";
    cin >> number;
    int result = totaldigits(number);
    cout << result;
}

int totaldigits(int number)
{
    int num2 = number / 10;
    for (int count = 0; count <= number; count++)
    {
        if (num2 == 0)
        {
            return count + 1;
        }
        else
        {
            num2 = num2 / 10;
        }
    }
    return 0;
}
