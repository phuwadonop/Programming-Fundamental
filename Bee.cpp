#include<iostream>

using namespace std;

void showAns (int* ,int* ,int* ,int,int ) ;
void workerBeeSpawn();
void solBeeSpawn();
void queenBeeSpawn();

int workerBee = 1; int newWorker = 0;
int solBee = 0;    int newSol = 0;
int queenBee = 1;

int main () {

    int nYear[25]; int yearMax=0;
    int i = 0 ;
    int Bee[25];
    int WorkBee[25];
    do 
    {
        cin >> nYear[i];

        if(nYear[i] > yearMax)
            yearMax = nYear[i];

        i++;

    }
    while( nYear[i-1] != -1);

    //cout << yearMax <<endl;

    for(int year = 1 ; year <= yearMax ; year++)
    {

        //add bee can spawn
        workerBee += newWorker;
        solBee += newSol;

        //clear newbie bee
        newWorker = 0;
        newSol = 0;

        //spawn
        workerBeeSpawn();
 
        solBeeSpawn();

        queenBeeSpawn();

        //cout << "year : " << year << " -> "<< "WorkBee : " << newWorker << " Bee : " << newWorker + newSol + queenBee << endl ;

        Bee[year] = newWorker + newSol + queenBee ;
        WorkBee[year] = newWorker ; 
    }
    
    showAns(nYear,WorkBee,Bee,i,yearMax);

}
void workerBeeSpawn ()
{   

    while(workerBee)
    {
        newWorker++;
        newSol++;

        workerBee--;
    }
 

}
void solBeeSpawn () 
{
    while(solBee)
    {
        newWorker++;
        solBee--;
    }
}
void queenBeeSpawn ()
{
    newWorker++;
}
void showAns (int* nYear,int* WorkBee,int* Bee,int i,int yearMax) 
{
    for(int index = 0 ; index < i-1 ; index++)
    {

        for(int yearWB = 1 ; yearWB <= yearMax ; yearWB++)
            if(yearWB == nYear[index])
                cout << WorkBee[nYear[index]] << " ";

        for(int yearB = 1 ; yearB <= yearMax ; yearB++)
            if(yearB == nYear[index])
                cout << Bee[nYear[index]] << "\n";        
    }
}
