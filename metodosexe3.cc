#include <iostream>
using namespace std;
double res;
double n1,n2;

double multiplicacao();
double adicao();
double divisao();
double sub();
int main(int argc, char *argv[]){
    int o;
    cout<<"2 n:  ";
    cin>>n1>>n2;
    cout<<"m-1 d-2, a-3, s-4: ";
    cin>>o;

    switch (o)
    {
        case 1:
            cout<< multiplicacao();
            break;
        case 2:
            cout<< divisao();
            break;
        case 3:
            cout<< adicao();
            break;
        case 4:
            cout<< sub();
            break;
        default:
            cout<<"Volte para a logica 9";
            break;
    }
    return 0;
}
double multiplicacao(){

    res =n1*n2;
    return res;
}
double adicao(){

    res =n1+n2;
    return res;
}
double divisao(){

    res =n1/n2;
    return res;
}
double sub(){

    res =n1-n2;
    return res;
}