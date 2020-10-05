#include<iostream>
#include<cmath>

using namespace std; 
float dtPoint (int, int, int, int);
char checkqc () ;

int main () 
{
    int W;
    cin >> W;

    char ans[10]; char *ansPtr = ans;

    for(int i = 0 ; i<W ; i++)
    {
        *(ansPtr+i) = checkqc();
    }
    for(int i = 0 ; i<W ; i++)
    {
       cout << *(ans + i) << "\n";
    }
 

}
char checkqc () 
{   
    int N,R,D;
    scanf_s("%d %d %d",&N,&R,&D);
    long x[1000],y[1000];
    for(int i=0 ; i<N ;i++)
    {
        scanf_s("%d %d",&x[i],&y[i]);
    }
    char ans;
    for(int i=0 ; i<N ; i++)
    {
        for(int j=0 ; j<N ; j++)
        {
            if(i==j) continue;
            if(dtPoint(x[i],y[i],x[j],y[j]) < (2*R) + D)
                return ans = 'N';
        }
        i++;
    }
    return ans = 'Y';
}
float dtPoint (int x1, int y1, int x2, int y2)
{
    int D;

    D = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    
    return D;
}
