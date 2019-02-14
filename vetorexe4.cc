#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    int v1[3],v2[3],res[6],i =0,j=1;

    for(int i = 0; i < 3; i++)
    {
        cout<<"Popule o vetor 1 \n";
        cin>>v1[i];
        cout<<"Popule o vetor 2 \n";
        cin>>v2[i];

        res[i] = v1[i];
        res[i+1]=v2[i];

    }
    for(int i = 0; i < 6; i++)
    {
        cout<<res[i]<<"\n";
    }
    
    return 0;
}