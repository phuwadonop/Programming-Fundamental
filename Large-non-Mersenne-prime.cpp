#include<iostream>

using namespace std;

void printSolve (int* ) ;

int main () {
    long power;

    cin >> power ;

    int i = 1 ;

    int result[10] = {3,3,4,8,2} ;

    while(i<=power)
    {
        int q = 0 ; int digit_start = 0;

        while(digit_start <= 9)
        {
            result[digit_start] *= 2;
            result[digit_start] += q;
            q = result[digit_start]/10;
            result[digit_start] %= 10;
            digit_start++;
        }
        i++;
    }

    result[0] += 1;

    printSolve(result);
}

void printSolve (int* i) 
{
    int *iPtr = i;
    int index = 9; 
    while(index>=0)
    {
        cout << *(iPtr+index);
        index--;
    }
}