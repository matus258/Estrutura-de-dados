#include <iostream>
using namespace std;

int somav (int xa[], int t);
int main(int argc, char *argv[]){
    int xa[5];
    for(int i = 0; i < 5; i++)
    {
        cout<<"Popule o vetor";
        cin>>xa[i];
    }

    cout<<"Soma do vetor: "<<somav(xa, 5);
    
}

int somav (int xa[], int t){

    int s = 0;
    for( int i = 0; i < t; i++)
    {
        s += xa[i];
    }
    
    return s;
}