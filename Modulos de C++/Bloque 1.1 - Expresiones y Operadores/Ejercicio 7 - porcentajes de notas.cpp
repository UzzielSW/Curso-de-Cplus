/*7.La calificacion final de un estudiante es el promedio de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participacion que cuenta el 10% restante. Escriba un programa 
que lea las tres notas del alumno y escriba su nota final.
*/
#include<iostream>
using namespace std;

int main()
{
	float notapractica, notateorica, notaparticipacion;
	
	cout<<"ingrese la nota de practica: "; 		cin>>notapractica;
	cout<<"Ingrese la nota teoria: "; 			cin>>notateorica;
	cout<<"Ingrese la nota de participacion: "; cin>>notaparticipacion;
	
	notapractica *= 0.30;
	notateorica *= 0.60;
	notaparticipacion *= 0.10;
	
	cout<<"La nota final es: "<<(notapractica + notateorica + notaparticipacion)<<endl;

	return 0;
}