#include<iostream>

using namespace std;

int st_len (char* );

int main() 
{
    char text[100];
    
    cin >> text;

    int L = st_len(text);
    int mid = L/2;
    char *textPtr;
    textPtr = text;
    int i=0;

    while(i<=mid)
    {   
        int j = L - 1 -i;
        if(textPtr[i] != textPtr[j])
        {
            cout << "Not Palindrome" << endl;
            return 0;
        }
        i++;
    }
    cout << "Palindrome" << endl;
    return 0;
}
int st_len (char x[100])
{
    int i = 0;
    while(x[++i]!='\0');
    return i;
}
