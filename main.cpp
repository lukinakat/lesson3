#include <iostream>
using namespace std;
int main()
{
    int result = 0;
    for(int i = 5; i <= 25; i++)
    {
        if (i % 2 == 0)
        {
            result += i;
        }
    }
    cout << result;
}
