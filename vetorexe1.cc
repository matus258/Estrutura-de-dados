#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) 
{
    int v[10],t=0;
    int c =0;
    int num =0;
    do
    {

        cin>>num;
        if (num != 0){
            v[c]=num;
            c = c+1;
        }
        
    } while (c < 10 && num != 0);

    for(int i = 0; i < c; i++)
    {
        if (v[i] == v[c-1]) {
            t += 1;
        }
        
    }
    
    cout<<t;
    return 0;
}