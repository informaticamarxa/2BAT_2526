#include "operaciones_vector.hpp"
#include <iostream>
using namespace std;



int SumaImpares(const vector<int> &v)
{
    int suma_imp = 0;

    for (int num: v)   //for (int i = 0; i < v.size(); i++)
    {
        if (num % 2 == 1)  //Es impar?
        {
            suma_imp = suma_imp + num;
        }
    }
    return suma_imp;
}


int ProductoPares(const vector<int> &v)
{
    int prod_pares = 1;

    for (int num: v)   //for (int i = 0; i < v.size(); i++)
    {
        if (num % 2 == 0)  //Es par?
        {
            prod_pares = prod_pares * num;
        }
    }
    return prod_pares;
}

int Divisibles3(const vector<int> &v, vector<int> &vResultado)
{
    int cont = 0;
    

    for (int num: v)   
    {
        if (num % 3 == 0)  //Es divisible por 3?
        {
            vResultado.push_back(num);
            cont = cont + 1;
        }
    }
    return cont;
}

void ImprimirVector(const vector<int> &v)
{
    for (int num: v)
    {
        cout << num << " ";
    }
    cout << endl;
}
