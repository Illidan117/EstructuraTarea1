// stack::push/pop+
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top(); ;
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size();
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty())
    {
        if (mi_pila.top() == str)
        {
            return true;
        }
        mi_pila.pop();
    }
    return false;
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int mayor = -999; //se define la variable mayor
    while(!mi_pila.empty()) //se recorre mi_pila
    {

        int num; //variable num para almacenamiento
        num = mi_pila.top(); //se le da valor a la variable num
        if(mayor<num){ //cpmparacion entre la variable mayor y el numero almacenado
            mayor = num; //de ser num mayor que mayor, mayor adquiere el valor de num
        }
        mi_pila.pop(); //se pasa al siguiente valor
    }
    return mayor; //se devuelve el mayor
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
       int menor = 999; //se define la variable menor
    while(!mi_pila.empty()) //se recorre mi_pila
    {
        int num; //variable num para almacenamiento
        num = mi_pila.top(); //se le da valor a la variable num
        if(menor>num){ //cpmparacion entre la variable menor y el numero almacenado
            menor = num; //de ser num menor que menor, menor adquiere el valor de num
        }
        mi_pila.pop(); //se pasa al siguiente valor
    }
    return menor; //retorna el menor
}

//devuelve la cantidad de veces que se encuentra la letra 'a' minuscula en "mi_pila"
int contarLetraA(stack<char> mi_pila)
{
    int contador =0; //se inicializa el contador
    while(!mi_pila.empty())//se recorre mi_pila
    {
        char a = mi_pila.top();//se le da valor a la variable a;
        char b = 'a'; //se define el valor a buscar
        if(a==b) //se hace la comparacion
        {
        contador++; // de ser verdadera la condicion, se le adhiere +1  al contador
        }
        mi_pila.pop(); //se pasa al siguiente valor
    }
    return contador; //retorna contador
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
