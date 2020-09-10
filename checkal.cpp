#include<iostream>

using namespace std;

void solve ();

int main () 
{
    solve();
}
void solve () {

    char str[100];
    char *strPtr = str;

    cin >> str;

    while(*strPtr != '\0')
    {
        if((*strPtr<= 'Z' && *strPtr >= 'A')||(*strPtr<= 'z' && *strPtr >= 'a'))
        {
            cout << *strPtr ;
        }
        strPtr++;
    }

}