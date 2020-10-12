#include<iostream>

using namespace std;

void changPos(int* ,int );

int main () 
{
    int naggetNum[6] = {6,9,20,15,26,29};
    int n;
    cin >> n;

    int i=0; int nAns=0;
    int ans[100];
    while(i<6)
    {
        for(int j=1 ; naggetNum[i]*j <= n ; j++)
        {
            bool check = 0;
            if(nAns == 0)
            {
                ans[nAns] = naggetNum[i]*j;
                nAns++;
            }
            else 
            {
                for(int k = 0 ; k < nAns ; k++)
                {
                    if(ans[k] == naggetNum[i]*j)
                    {
                        check = 1;
                        break;
                    }
                }
                if(check == 0)
                {
                    ans[nAns] = naggetNum[i]*j;
                    nAns++;
                }
            }
        }
        i++;
    }
    if(nAns != 0)
    {
        changPos(ans,nAns);
        for(int j=0 ; j < nAns ; j++)
            cout << ans[j] << endl;
    }
    else 
    {
        cout << "no" << endl;
    }
}
void changPos(int* ans,int nAns)
{
    for(int i=0 ; i < nAns ; i++ )
    {
        for(int j = i+1 ; j < nAns ; j++)
        {
            if(ans[i]>ans[j])
            {
                swap(ans[i],ans[j]);
            }
        }
    }
}