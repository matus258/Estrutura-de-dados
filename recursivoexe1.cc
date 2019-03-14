#include <iostream>
using namespace std;

long fatorial(int n);
int main(int argc, char *argv[]){
    cout<<fatorial(5);
}

long fatorial(int n){

    if (n<=1) {
        return(1);
    }
    else
    {
        return n * fatorial(n-1);   
    }  
}