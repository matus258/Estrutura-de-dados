#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    int ma[3][5],soma[3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout<<"Popule a linha "<<i<<" coluna "<<j<<":  ";
            cin>>ma[i][j];
        }
        
    }
    for(int i = 0; i < 3; i++)
    {
        soma[i]=0;
        for( int j = 0; j < 5; j++)
        {
           soma[i]+= ma[i][j]; 
        }
        cout<<soma[i]<<"\n";
    }
    
    return 0;
}