#include <iostream>

using namespace std;

int main()
{
    int result = 0;
    for(int i = 6; i <= 24; i++)
    {
        if (i % 2 == 0)
        {
            result += i;
        }
    }
    cout << result;
}
