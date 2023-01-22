#include <iostream>
using namespace std;
void printPercentage(int number, int total);

int main()
{
    int n;
    cout << "Enter the total number of integers: ";
    cin >> n;
    printPercentage(n, n);
    return 0;
}
void printPercentage(int number, int total)
{
    int under200 = 0, between200and399 = 0, between400and599 = 0, between600and799 = 0, over800 = 0;
    for (int i = 0; i < number; i++)
    {
        int temp;
        cin >> temp;
        if (temp < 200)
        {
            under200++;
        }
        else if (temp >= 200 && temp < 400)
        {
            between200and399++;
        }
        else if (temp >= 400 && temp < 600)
        {
            between400and599++;
        }
        else if (temp >= 600 && temp < 800)
        {
            between600and799++;
        }
        else
        {
            over800++;
        }
    }
    cout << "Percentage of integers under 200: " << (under200 * 100.0) / total << "%" << endl;
    cout << "Percentage of integers between 200 and 399: " << (between200and399 * 100.0) / total << "%" << endl;
    cout << "Percentage of integers between 400 and 599: " << (between400and599 * 100.0) / total << "%" << endl;
    cout << "Percentage of integers between 600 and 799: " << (between600and799 * 100.0) / total << "%" << endl;
    cout << "Percentage of integers over 800: " << (over800 * 100.0) / total << "%" << endl;
}
