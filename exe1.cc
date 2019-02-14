#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    int a,b, med, ma;
    b=0;

    for(int i = 0; i < 10; i++)
    {
        cout << "Digite uma nota: \n";
        cin>> a;

        b= b+a;

        if (i==0) 
            ma=a;
        else if (a>ma) 
            ma=a;
             
    }
    cout<< "Maior nota eh "<<ma<<"\n";
    cout<< "media eh "<<b/10<<"\n";
    
    return 0;
}