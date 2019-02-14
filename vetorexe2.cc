#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) 
{
    int v[20];
    for(int i = 0; i < 20; i++)
    {
        v[i]=rand();
    }
    
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            if (v[i] < v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            
        }
        
    }
    for(int i = 0; i < 20; i++)
    {
        cout<<v[i]<<"\n";
    }
    
    return 0;
}