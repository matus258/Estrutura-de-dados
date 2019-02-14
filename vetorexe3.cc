#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    int v1[10],v2[10],res[10];
    char ar[10];

    for(int i = 0; i < 10; i++)
    {
        cout<<"Digite o primeiro numero \n";
        cin>>v1[i];
        cout<<"Digite o segundo numero \n";
        cin>>v2[i];
        cout<<"Qual operação? + (adição) - (subtração) / (divisão) * (multiplicação) \n";
        cin>>ar[i];

        if (ar[i] == '+'){
            res[i] = v1[i]+v2[i];
        }
        if (ar[i] == '-'){
            res[i] = v1[i]-v2[i];
        }
        if (ar[i] == '/'){
            res[i] = v1[i]/v2[i];
        }
        if (ar[i] == '*'){
            res[i] = v1[i]*v2[i];
        }        
        cout<<res[i]<<"\n";
    }
    
    return 0;
}