#include <iostream>
using namespace std;

int primo(int i){
    int res=1;
    if (i != 2 && i%2==0) {
        res =0;
    }else{
        for(int j = 3; j < i; j++)
        {
            if(i%j == 0){
                res=0;
                break;
            }
        }
    }
    return res;
}
int main(int argc, char *argv[]){
    int i;
    cout<<"Digite um numero: ";
    cin>>i;

    cout<<primo(i);
}