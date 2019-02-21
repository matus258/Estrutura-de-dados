#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    int ma[4][4],soma;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout<<"Popule a linha "<<i<<" coluna "<<j<<":  ";
            cin>>ma[i][j];
        }
        
    }
    for(int i = 0; i < 4; i++)
    {
        soma += ma[i][i];
        
    }
    cout<<soma<<"\n";
    return 0;
}