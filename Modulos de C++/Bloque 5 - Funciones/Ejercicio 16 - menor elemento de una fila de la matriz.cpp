/*Ejercicio 16: Realice una funcion que dada una matriz y un numero de fila de la 
matriz devuelva el menor de los elementos almacenados en dicha fila.*/
#include<iostream>
using namespace std;

void pedirDatos();
int comprobarMenorElemento();

int m[100][100], nfilas, ncol;

int main()
{
	pedirDatos();
	
	cout<<"\nEl menor elemento de la fila seleccionada es: "<<comprobarMenorElemento()<<endl;
	
	return 0;
}

void pedirDatos()
{
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;

	cout<<"Digite el numero de columnas: ";
	cin>>ncol;
	
	for(int i=0;i < nfilas; i++)
	{
		for(int j=0; j < ncol; j++)
		{
			cout<<"Digite m["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

int comprobarMenorElemento()
{
	int fila, menor = 99999;
	
	cout<<"\nDigite el numero de fila a comprobar: ";
	cin>>fila;
	
	for(int i=0; i < nfilas; i++)
	{
		for(int j=0; j < ncol; j++)
		{
			if(i == fila)
				if(m[i][j] < menor)
					menor = m[i][j];
		}
	}
	
	return menor;
}