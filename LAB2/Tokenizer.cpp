#include <iostream>
#include <fstream>
using namespace std;
void search(string arr[], int size, string token);
{
}
void tokens(string token)
{
    string keywords[] = {"int", "return"};
    string identifiers[] = {"main", "x"};
    string operators[] = {"+", "=", "-"};
    string punctuation[] = {"(", ")", "{", "}", ";"};

    int ksize = sizeof(keywords) / sizeof(keywords[0]);
    int isize = sizeof(identifiers) / sizeof(identifiers[0]);
    int osize = sizeof(operators) / sizeof(operators[0]);
    int psize = sizeof(punctuation) / sizeof(punctuation[0]);
}
void show(int f, int l, string code)
{
    string token = "";
    for (int j = f; j < l; j++)
    {
        // cout << code[j];
        token += code[j];
    }
}
void checkToken(string code)
{
    string token = "";
    int fpositon = 0;
    int lpositon = code.length();
    for (int i = fpositon; i < lpositon; i++)
    {
        if (code[i] == ' ')
        {
            lpositon = i;
            show(fpositon, lpositon, code);
            fpositon = lpositon + 1;
            lpositon = code.length();
        }
    }
}
int main()
{
    string code;

    ifstream txt("../token.txt");

    while (getline(txt, code))
    {
        checkToken(code);
    }
    txt.close();
}