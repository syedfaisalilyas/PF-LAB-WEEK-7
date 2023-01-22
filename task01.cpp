#include <iostream>
using namespace std;
void printtable(int number);

int main()
{
    int number;
    cout << "Enter number:";
    cin >> number;
    printtable(number);
}

void printtable(int number)
{
    for (int x = 1; x <= 10; x++)
    {
        cout << number << "X" << x << "=" << x * number << endl;
    }
}
