#include<iostream>
using namespace std;
#define MAX 500

int main ()
{
    int q,Ans[MAX]={0}; 
    Ans[0] = 1;
    int finish = 1; int num=0;
    cin >> q;

    int start = 2;

    while(start <= q)
    {
        int ans_size = 0;  
        while(ans_size < finish)
        {
            Ans[ans_size] *= start;
            Ans[ans_size] += num;
            num = Ans[ans_size]/10;
            Ans[ans_size] %= 10; 
            ans_size++;
        }
        while(num!=0)
        {
            Ans[finish] = num%10;
            num /= 10;
            finish++;
        }
        start++;
    }
    while(--finish>=0)
    {
        cout << Ans[finish];
    }

}