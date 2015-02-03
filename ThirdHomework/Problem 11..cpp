#include <iostream>

using namespace std;

int main()
{
    int start,endd,s,d,p = 0;
    cin >>start;
    cin >>endd;
    for (int i =start ; i <= endd ; i++)
    {
        if (i % 5 == 0)
        {
        cout <<i<<" ";
        p++;
        }
    }
    cout <<endl<<p;


}
