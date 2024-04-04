#include "iostream"
using namespace std;
void intercambiar(int a, int b){
   int  temp = a;
a= b ;
b= temp;

}



int main(){
int x=5; int y=10;
    cout<<"ingrese el 1er valor: ";
    cout<<"Primer valor "<<x<<"\n";


    cout<<"ingrese el 2ndo valor: ";
    cout<<"Primer valor "<<y<<"\n";

    intercambiar(x,y);
    cout<<"despues del intercambio : \n";
    cout<<"el primer valor es: "<<x<<"\n";
    cout<<"el segundo valor es: "<<y<<"\n";
    return 0;
}