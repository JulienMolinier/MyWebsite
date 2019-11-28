#include <iostream>
using namespace std;
int main()
{
    string s = "toto";
    cout << s << endl;
    string *pt_s;
    cout << pt_s << endl;
    cout << (*pt_s) << endl;
    cout << &pt_s << endl;
    pt_s = &s;
    cout << pt_s << endl;
    cout << (*pt_s) << endl;
    cout << &pt_s << endl;
    return 0;
}