#include <iostream>

using namespace std;

int main()
{
   int n,a,b,c;
   cin >> n;
   if (n >=  1 && n <= 3)
    {
    cout <<n*10;
    }else if (n >=  4 && n <= 6)
    {
    cout <<n*100;
    }else if (n >=  7 && n <= 9)
    {
    cout <<n*1000;
    }else
    {
    cout << "invalid score";
    }
}
