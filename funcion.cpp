//crear un programa el cual simule un hospital para dar de alta baja consultar y buscar asi como dar de baja con un costo de su consulta por los dias que estuvo en este mismo
#include <iostream>
#include <conio.h>
#include "gotoxy.h"
using namespace std;
//Declaracion de estructura
struct nodo{
	string numseg;
	string nombre;
	int edad;
	string direccion;
	char sexo;
	string fecha;
	string enfermedad;
	nodo *siguiente;
};
//Declaracion de funcione
void Altapaciente(nodo *&, string , string , int , string , char , string , string );
void buscarPaciente(nodo *, string);
void consultarpacientes(nodo *);
void bajapaciente(nodo *&, string);
//Declaracion de la clase proncipal//

void Altapaciente(nodo *&lista,string nm, string n, int e, string d, char sx, string f, string en){
	int x=0;
	x=x+1;
nodo*nvo_nodo= new nodo();
nvo_nodo ->numseg=nm;
nvo_nodo ->nombre=n;
nvo_nodo ->edad=e;
nvo_nodo ->direccion=d;
nvo_nodo ->sexo=sx;
nvo_nodo ->fecha=f;
nvo_nodo ->enfermedad=en;
nodo *aux1=lista;
nodo *aux2;
while((aux1!=NULL)&&(aux1->numseg<nm)&&(aux1->nombre<n)&&(aux1->edad<e)&&(aux1->direccion<d)&&(aux1->sexo<sx)&&(aux1->enfermedad<en)){
	aux2=aux1;
	aux1=aux1->siguiente;
}
if(lista==aux1){
	lista=nvo_nodo;
}
else{
	aux2->siguiente=nvo_nodo;
}
nvo_nodo->siguiente=aux1;
gotoxy(35,21+(x+1));cout<<"\nEl Paciente: "<<n<<" ha sido ingresado satisfactoriamente al hospital";
}
