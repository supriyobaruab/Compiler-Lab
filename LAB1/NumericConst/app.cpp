#include <iostream>
using namespace std;
void check(string string)
{
    bool flag = true;
    int count = 0;

    for (int i = 0; i < string.length(); i++)
    {

        if ((int)string[i] > 47 && (int)string[i] < 58)
        {
        }
        else if ((int)string[i] == 46)
        {
            count++;
            if (count > 1)
            {
                flag = false;
                break;
            }
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << string << " is Numerical" << endl;
    }
    else
    {
        cout << string << " is not Numerical" << endl;
    }
}
int main()
{
    check("1100");
    check("11.00");
    check("1100.");
    check("1.1.00");
    check("11A00");
}