#include <iostream>

using namespace std;

int numeroCuadrado(int a)
{
    return (a * a);
}
void numeroCuadrado1(int &a){
    a=a*a;
}

void Invertir(int &a,int &b){
    int aux;
    aux=a;
    a=b;
    b=aux;
}
void orden(int &a,int &b){
    if(a>b) Invertir(a,b);
}

int main()
{

    int a, b;

    cin >> a;
    b = numeroCuadrado(a);
    cout << "Dirección de memoria de variable b: "<<&b<< "\n cuadrado de la variable: "<<b<< endl;
    numeroCuadrado1(a);
    cout << "Dirección de memoria de variable a: "<<&a<< "\n cuadrado de la variable: "<<a<< endl;

    int c =5, d=10;
    Invertir(c,d);
    cout << "\nDirección de memoria de variable c: "<<&c<< "\n  variable invertida: "<<c<< endl;
    cout << "Dirección de memoria de variable: d"<<&d<< "\n variable invertida: "<<d<< endl;
    orden(c,d);
    cout << "Dirección de memoria de variable: c"<<&c<< "\n variable ordenada: "<<c<< endl;
    
    cout << "Dirección de memoria de variable: d"<<&d<< "\n variable ordenada: "<<d<< endl;
}



