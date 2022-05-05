#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a  = 0;
    for (auto c : s) {
        if (c == '1') a++;
    }
    cout << a << endl;
    return 0;
}