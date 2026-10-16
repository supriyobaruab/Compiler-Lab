#include <iostream>
#include <fstream>
using namespace std;
string search(string arr[], int size, string token, string arrName)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == token)
        {
            return arrName;
        }
    }
    return "Unknown";
}
void tokens(string token)
{
    string keywords[] = {"int", "float", "return", "cout"};
    string identifiers[] = {"main", "x", "y"};
    string operators[] = {"+", "=", "-", "/", "<<", "/"};
    string puntuations[] = {"(", ")", "{", "}", ";"};
    string constant[] = {"0", "10"};

    int ksize = sizeof(keywords) / sizeof(keywords[0]);
    int isize = sizeof(identifiers) / sizeof(identifiers[0]);
    int osize = sizeof(operators) / sizeof(operators[0]);
    int psize = sizeof(puntuations) / sizeof(puntuations[0]);
    int csize = sizeof(constant) / sizeof(constant[0]);

    string result = search(keywords, ksize, token, "keywords");

    if (result == "Unknown")
    {
        result = search(identifiers, isize, token, "identifiers");
    }
    if (result == "Unknown")
    {
        result = search(operators, osize, token, "operators");
    }
    if (result == "Unknown")
    {
        result = search(puntuations, psize, token, "puntuations");
    }
    if (result == "Unknown")
    {
        result = search(constant, csize, token, "constant");
    }
    if (result == "Unknown")
    {
        result = "invalid token";
    }

    cout << token << " : " << result << endl;
}
void show(int f, int l, string code)
{
    string token = "";
    for (int j = f; j < l; j++)
    {
        // cout << code[j];
        token += code[j];
    }
    tokens(token);
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