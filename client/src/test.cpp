#include "../inc/master.h"
#include <fstream>
using namespace std;


wstring ConvertUtf8ToWide(const string &str) //https://stackoverflow.com/questions/6693010/how-do-i-use-multibytetowidechar
{
    INT count = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
    wstring wstr(count, 0);
    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), &wstr[0], count);
    return wstr;
}

void test(int *var)
{
    if (var != NULL)
    {
        *var+=1;
    }
    else
    {
        cout << "nop" << endl;
    }
}

int main()
{
    int myvar = 10;
    test(&myvar);
    cout << myvar << endl;
    cout << "---------------------" << endl;
    test(NULL);
    cout << "test" << endl;
}