#include <iostream>
using namespace std;

void checkOperator(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)

    {
        if (str[i] == '+')
        {
            cout << "Operator " << count + 1 << ": " << "+" << endl;
            count++;
        }
        else if (str[i] == '-')
        {
            cout << "Operator " << count + 1 << ": " << "-" << endl;
            count++;
        }
        else if (str[i] == '*')
        {
            cout << "Operator " << count + 1 << ": " << "*" << endl;
            count++;
        }
        else if (str[i] == '/')
        {
            cout << "Operator " << count + 1 << ": " << "/" << endl;
            count++;
        }
        else if (str[i] == '%')
        {
            cout << "Operator " << count + 1 << ": " << "%" << endl;
            count++;
        }
        else if (str[i] == '=')
        {
            cout << "Operator " << count + 1 << ": " << "=" << endl;
            count++;
        }
    }
}

int main()
{
    checkOperator("2+3/4*3%4=5");
}