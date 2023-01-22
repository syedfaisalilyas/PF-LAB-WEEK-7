#include <iostream>
using namespace std;
void printfibonacci(int length);

int main()
{
    int length;
    cout << "Eenter the length:";
    cin >> length;
    printfibonacci(length);
}

void printfibonacci(int length)
{
    int n1 = 0;
    int n2 = 1, result;
    cout << n1 << "," << n2;

    for (int count = 0; count <= length - 3; count++)
    {
        result = n1 + n2;
        cout << "," << result;
        n1 = n2;
        n2 = result;
    }
}
