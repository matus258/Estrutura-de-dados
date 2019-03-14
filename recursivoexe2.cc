#include <iostream>
using namespace std;

int fib(int n);
int main(int argc, char *argv[]){
    cout<<fib(6);
}
/* Fn = Fn-1+Fn-2;
    1 1 2 3  5 8
*/
int fib(int n){

    if (n==1 || n ==2) {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);   
    }  
}