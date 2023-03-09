#include <iostream>
using namespace std;

int Sum(int a, int b);
string TextLabel(const string& a);

int main()
{
    int c = Sum(2, 2);
    cout << c << endl;
    cout << TextLabel("Helllo there");
    return 0;
}

int Sum(int a, int b)
{
    return a + b;
}


// use const strings
string TextLabel(const string& text)
{
    return "this is a text: " + text;
}
