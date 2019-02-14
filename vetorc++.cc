#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    int v[5];

    for(int i = 0; i < 5; i++)
    {
        cout<<"Popule o vetor \n";
        cin>>v[i];
        cout<<v[i]<<"\n";
    }
    
    return 0;
}