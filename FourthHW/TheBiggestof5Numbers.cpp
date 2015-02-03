#include <iostream>

using namespace std;

int main()
{
    double a,b,c,minn,maxx = -2222222;
    for (int i = 0 ; i < 5 ; i++)
    {
    cin >> a;
    if (a > maxx)
        {
        maxx = a;

        }
    }
    cout <<maxx;
}
