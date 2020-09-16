#include<iostream>

using namespace std;

void draw_X (int* );
void draw_Xunder(int*);

int main () 
{
    int R[2];
    int *Rptr = R;
    
    cin >> R[0];

    R[1] = R[0];

    draw_X(Rptr);

    Rptr++;

    draw_Xunder(Rptr);

}

void draw_X (int* R)
{
    *R = *R-1;
    for(int y = *R ; y >= -*R; y-- )
    {
        for(float x = 2*(-*R) ; x <= 2*(*R) ; x++)
        {
            if(y==x/2)
                cout << "*";
            else if (y == -x/2) 
                cout << "*";
            else 
                cout << " ";
        }
        printf("\n");
    }
}
void draw_Xunder (int* R)
{
    *R = *R-1;
    for(int y = *R-1 ; y >= -*R; y-- )
    {
        for(float x = 2*(-*R) ; x <= 2*(*R) ; x++)
        {
            if(y==x/2)
                cout << "*";
            else if (y == -x/2) 
                cout << "*";
            else 
                cout << " ";
        }
        printf("\n");
    }
}