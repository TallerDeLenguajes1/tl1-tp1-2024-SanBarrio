<<<<<<< HEAD
#include <iostream>

using namespace std;

int main() {
    
    cout << "Hola mundo"<<endl;
    int *p_variable, variable;
    
    p_variable=&variable;
    
    cout << "Contenido del puntero: " << *p_variable << endl;
    cout << "Direccion de memoria almacenada por el puntero: " << p_variable << endl;
    cout << "Direccion de memoria de la variable: " << &variable << endl;
    cout << "Direccion de memoria del puntero: " << &p_variable << endl;
    cout << "Tamaño de memoria utilizada por la variable: " << sizeof(variable) << endl;
    return 0;
=======
#include <iostream>

using namespace std;

int main() {
    
    cout << "Hola mundo"<<endl;
    int *p_variable, variable;
    
    p_variable=&variable;
    
    cout << "Contenido del puntero: " << *p_variable << endl;
    cout << "Direccion de memoria almacenada por el puntero: " << p_variable << endl;
    cout << "Direccion de memoria de la variable: " << &variable << endl;
    cout << "Direccion de memoria del puntero: " << &p_variable << endl;
    cout << "Tamaño de memoria utilizada por la variable: " << sizeof(variable) << endl;
    return 0;
>>>>>>> cccb22e1a53d3d8764cec151ec14f37a7d4b2090
}