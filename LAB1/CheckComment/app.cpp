#include <iostream>
using namespace std;

void checkCmt(string str)
{
    // if (str.substr(0, 2) == "//")
    // {
    //     cout << "// singleline comments" << endl;
    // }
    // if ((str.substr(0, 2) == "/*") && (str.substr(str.length() - 2) == "*/"))
    // {
    //     cout << "/* multiline comments" << endl;
    // }
    int indexB = 0;
    for (int i = 0; i < str.length() - 1; i++)

    {
        if (str[i] == '/' && str[i + 1] == '/')
        {
            indexB = i;
            cout << "// singleline comments" << endl;
        }
        if ((str[i] == '/') && (str[i + 1] == '*'))
        {
            for (int j = i + 2; j < str.length(); j++)
            {
                if (str[j] == '/' && str[j - 1] == '*')
                {
                    cout << "/* multiline comments */" << endl;
                    return;
                }
            }
            cout << "/* unclosed multiline comments" << endl;
            return;
        }
    }
}

int main()
{
    checkCmt("int x = 5 //hahaha");
    checkCmt("int x; /*amar name");
    checkCmt("int x; /*amar name*/");
}