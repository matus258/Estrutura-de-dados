
#include <iostream>
using namespace std;

double celsius(double f){
    double c = (f - 32)*5/9;

    return c;
}
double fahrenheit(double c){
    double f = (c *9/5)+32;
    
    return f;
}
int main(int argc, char *argv[]){
    double c,f;

    cout<< "Entre com um valor em Fahrenheit \n";
    cin>>f;
    cout<< "Entre com um valor em Celsius \n";
    cin>>c;

    cout<<"Valor "<<f<<" em Celsius "<<celsius(f)<<"\n";
    cout<<"Valor "<<c<<" em Fahrenheit "<<fahrenheit(c)<<"\n";

}

