#include <iostream>
#include <string>

using namespace std;

void fillWithM(string& text)
{
    for (int i = 0; i < text.length(); ++i)
    {
        text.replace(i, 1, "m");
    }
}

int main()
{
    string str = "dominik";
    fillWithM(str);
    cout << str << endl;
    return 0;
}
