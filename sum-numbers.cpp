#include <iostream>
#include <string>
using namespace std;
int main()
{

    while (1)
    {
        string str;
        cin >> str;

        if (str=="0")
        {
            break;
        }

        int i, sum = 0;
        for (i = 0; i < str.size(); i++)
        {
            sum += str[i] - '0';
        }
        cout << sum << endl;
    }
    return 0;
}
