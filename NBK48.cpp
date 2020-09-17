#include<iostream>

using namespace std;
void solve();

int main () 
{
    solve();   
}
void solve()
{
    int N,Q; 

    scanf("%d  %d",&N,&Q);

    int p[N]; long q[Q];

    for(int i=0 ; i<N ; i++)
    {
        scanf("%d",&p[i]);
    }

    for(int i=0 ; i<Q ; i++)
    {
        scanf("%d",&q[i]);
    }

    long *qPtr = q;

    int i = 0 ;
    while (i<Q)
    {
        int totalPrice = 0;
        int ep;
        for(ep = 0 ;  ; ep++)
        {
            totalPrice += p[ep];
            if(totalPrice > qPtr[i])
                break;
        }
        qPtr[i] = ep;
        cout << qPtr[i] << endl;
        i++;
    }
}
