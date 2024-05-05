#include <iostream>

using namespace std;

int numeroCuadrado(int a);
void numeroCuadrado1(int a);

int main()
{

    int a, b;

    cin >> a;
    b = numeroCuadrado(a);
    cout << b << endl;
    numeroCuadrado1(a);
    cout << a << endl;
}

int numeroCuadrado(int a)
{
    return (a * a);
}

void numeroCuadrado1(int a){
    a=a*a;
}
