#include <iostream>
#include <vector>
#include "operaciones_vector.hpp"
using namespace std;

//Canvi de B que provocarà conflicte

int main()
{
    char opcion;
    cout<<"Procesamiento de vectores" << endl;

    vector<int>  vNumeros = {3, 6, 5, 1, 2, 4};
    vector<int> vResult;
    
    cout << "i: suma impares, p: producto pares, d: divisibles por 3" << endl;
    cin >> opcion;
    
    switch(opcion)
    {
        case 'i': cout << "La suma de impares es " << SumaImpares(vNumeros) << endl;
        break;
        case 'p': cout << "Producto de pares es " << ProductoPares(vNumeros) << endl;
        break;
        case 'd': cout << "Divisibles por 3: " << Divisibles3(vNumeros, vResult) << endl;
                  ImprimirVector(vResult);
        break;        
        
    }
    


    return 0;
}