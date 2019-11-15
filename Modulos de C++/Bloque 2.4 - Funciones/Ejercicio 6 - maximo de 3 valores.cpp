/*Ejercicio 6: Escriba una plantilla de funci�n llamada maximo() que devuelva el valor 
m�ximo de tres argumentos que se transmitan a la funci�n cuando sea llamada.
Suponga que los tres argumentos ser�n del mismo tipo de datos.*/
#include<iostream>
using namespace std;

template <class T>
T maximo(T dato1, T dato2, T dato3);

int main()
{
	char dato1 = 'e', dato2 = 'f', dato3 = 'a';
	
	cout<<"El maximo valor es: "<<maximo(dato1, dato2, dato3);
	
	getchar();
	return 0;
}

template <class T>
T maximo(T dato1, T dato2, T dato3) 
{
	T max = dato1;
	if(dato2 > max) max = dato2;
	if(dato3 > max) max = dato3;

	return max;
}