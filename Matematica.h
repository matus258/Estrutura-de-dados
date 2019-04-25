#include <iostream>
using namespace std;

class Matematica{
    public:
        int a,b;

        void entradaDeDados(){
            cout<<"Digite 2 valores: ";cin>>a>>b;
        }
        int soma(){
            return a+b;
        }
        int multiplicacao(){
            return a*b;
        }
        double divisao(){
            if(b != 0)return a/b;
        }
        int subtracao(){
            return a-b;
        }
};