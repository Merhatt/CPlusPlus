#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c,d,sum,x1,x2;
    cin >>a;
    cin >>b;
    cin >>c;
    d = b*b - (4*a*c);
        if (d>0)
        {
        x1 = (-b - sqrt(d))/(2*a);
        x2 = (-b + sqrt(d))/(2*a);
        cout <<"x1 = "<<x1<<endl;
        cout <<"x2 = "<<x2<<endl;
        }else if (d == 0)
        {
        cout <<"x1 = x2 = "<<(-b )/(2*a);
        }else
        {
        cout <<"no real roots";
        }
}
