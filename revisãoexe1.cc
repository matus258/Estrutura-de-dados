#include <iostream>
using namespace std;
int cont=0;
int n = 0;
bool parPositivo(int n);
int qntParPositivo();
int main(int argc, char *argv[]){
    int n=0;
    cout<<"\n"<<qntParPositivo()<<"\n";
}

bool parPositivo(int n){
    if(n%2==0 && n > 0){
        return true;
    }else{
        return false;
    }
}
int qntParPositivo(){
    do
    {
        cout<<"Digite um numero: ";
        cin>>n;
        cont +=1;
    } while (parPositivo(n));
    return cont-1;
}