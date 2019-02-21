#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    int ma[2][3],tra[3][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<"Popule a linha "<<i<<" coluna "<<j<<":  ";
            cin>>ma[i][j];
        }
        
    }
    for(int i = 0; i < 3; i++)
    {
        for( int j = 0; j < 2; j++)
        {
           tra[i][j]= ma[j][i]; 
           cout<<tra[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    return 0;
}