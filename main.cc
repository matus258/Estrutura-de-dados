#include "Matematica.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    Matematica obj;
    obj.entradaDeDados();
    cout<<obj.multiplicacao()<<"\n";
    cout<<obj.soma()<<"\n";
    cout<<obj.subtracao()<<"\n";
    cout<<obj.divisao()<<"\n";
}