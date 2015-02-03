#include <iostream>

using namespace std;

int main()
{
    cout << "Please chose a type" << endl;
    cout << "1 --> int" << endl;
    cout << "2 --> double" << endl;
    cout << "3 --> string" << endl;
    int n,i;
    double d;
    string s;
    cin >>n;
    if (n == 1)
        {
        cout << "Please enter a integer" << endl;
        cin >>i;
        cout <<i+1;
        }else if (n == 2)
        {
        cout << "Please enter a double" << endl;
        cin >>d;
        cout <<d+1;
        }else if (n == 3)
        {
        cout << "Please enter a string" << endl;
        cin >>s;
        cout <<s<<"*";
        }
}
