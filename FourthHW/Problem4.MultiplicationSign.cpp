#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin >>a;
    cin >>b;
    cin >>c;

    if (a > 0 && b > 0 && c > 0)
        {
        cout <<"+";
        }else if (a > 0 && b > 0 && c < 0)
        {
        cout <<"-";
        }else if (a > 0 && b < 0 && c > 0)
        {
        cout <<"-";
        }else if (a < 0 && b > 0 && c > 0)
        {
        cout <<"-";
        }else if (a == 0 || b == 0 || c == 0)
        {
        cout <<"0";
        }else if (a < 0 && b < 0 && c < 0)
        {
        cout <<"-";
        }
        else
        {
        cout <<"+";
        }
}
