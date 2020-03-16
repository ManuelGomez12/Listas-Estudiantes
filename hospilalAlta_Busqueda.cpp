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
void buscarPaciente(nodo *, string, string, int, string, char, string, string);
void consultarpacientes(nodo *);
void bajapaciente(nodo *&, string);
//Declaracion de la clase proncipal//
int main(){
	nodo *lista=NULL;
	string numseg;
	string nombre;
	int edad,opc,a,h;
	string direccion;
	char sexo,res;
	string fecha;
	string enfermedad;
	float costo;
	int x=0;
	do{
		
		//Menu de opciones bonito xd
	system("cls");
	gotoxy(27,3);cout<<"_____________________________";
	gotoxy(27,4);cout<<"| Menu de opciones Hospital  |";
	gotoxy(27,5);cout<<"|____________________________|";
	gotoxy(27,6);cout<<"| 1) Alta del paciente       |";
	gotoxy(27,7);cout<<"|____________________________|";
	gotoxy(27,8);cout<<"| 2) Buscar paciente         |";
	gotoxy(27,9);cout<<"|____________________________|";
	gotoxy(27,10);cout<<"| 3) Consultar pacientes     |";
	gotoxy(27,11);cout<<"|____________________________|";
	gotoxy(27,12);cout<<"| 4) Baja paciente           |";
	gotoxy(27,13);cout<<"|____________________________|";
	gotoxy(27,14);cout<<"| 5) Salir                   |";
	gotoxy(27,15);cout<<"|____________________________|";
	gotoxy(27,16);cout<<"| Elige una opcion:          |";
	gotoxy(27,17);cout<<"|____________________________|";
	gotoxy(50,16);cin>>opc;
	switch(opc){
//caso 1
		case 1:
				system("cls");
				do{
			x=x+1;
			gotoxy(1,7);cout<<"_________________________________________________________________________________________________________";
			gotoxy(1,8);cout<<"|";
			gotoxy(105,8);cout<<"|";
			gotoxy(14,8);cout<<"|";
			gotoxy(29,8);cout<<"|";
			gotoxy(42,8);cout<<"|";
			gotoxy(59,8);cout<<"|";
			gotoxy(74,8);cout<<"|";
			gotoxy(89,8);cout<<"|";
				
			gotoxy(2,8);cout<<"No seguro";
			gotoxy(17,8);cout<<"Nombre";
			gotoxy(32,8);cout<<"Edad";
			gotoxy(47,8);cout<<"Calle";
			gotoxy(62,8);cout<<"Sexo";
			gotoxy(77,8);cout<<"Fecha";
			gotoxy(92,8);cout<<"Enfermedad";
			gotoxy(1,9);cout<<"|_______________________________________________________________________________________________________|";
			gotoxy(2,8+(x+1));cin>>numseg;
			gotoxy(17,8+(x+1));cin>>nombre; 			
			gotoxy(32,8+(x+1));cin>>edad;			
			gotoxy(47,8+(x+1));cin>>direccion;		
			gotoxy(62,8+(x+1));cin>>sexo;
			gotoxy(77,8+(x+1));cin>>fecha;
			gotoxy(92,8+(x+1));cin>>enfermedad;
			gotoxy(1,8+(x+1));cout<<"|";
			gotoxy(105,8+(x+1));cout<<"|";
			gotoxy(14,8+(x+1));cout<<"|";
			gotoxy(29,8+(x+1));cout<<"|";
			gotoxy(42,8+(x+1));cout<<"|";
			gotoxy(59,8+(x+1));cout<<"|";
			gotoxy(74,8+(x+1));cout<<"|";
			gotoxy(89,8+(x+1));cout<<"|";
			gotoxy(1,9+(x+1));cout<<"|_______________________________________________________________________________________________________|";
			x++;
			Altapaciente(lista,numseg,nombre,edad,direccion,sexo,fecha,enfermedad);
			cout<<"\nDesea dar de alta a otro paciente s/n: ";
			cin>>res;
		}while(res!='n');
		break;
		//caso 2
		case 2:
				system("cls");
			gotoxy(10,5);cout<<"Introduzca el numero del seguro: ";
			cin>>numseg;
            buscarPaciente(lista, numseg ,nombre,edad, direccion, sexo, fecha, enfermedad);
		
		break;
		//caso 3
		case 3:
			system("cls");
			gotoxy(2,6);cout<<"No seguro";
			gotoxy(17,6);cout<<"Nombre";
			gotoxy(32,6);cout<<"Edad";
			gotoxy(47,6);cout<<"Calle";
			gotoxy(62,6);cout<<"Sexo";
			gotoxy(77,6);cout<<"Fecha";
			gotoxy(92,6);cout<<"Enfermedad";
			consultarpacientes(lista);
		break;
		//caso 4
		case 4:
			system("cls");
			gotoxy(10,5);cout<<"Numero del seguro para dar de baja: ";
			cin>>numseg;
			bajapaciente(lista,numseg);
			gotoxy(10,10);cout<<"Continuar con el proceso: ";
			cin>>res;
			system("cls");
			
			gotoxy(10,3);cout<<"1) Canser";
			gotoxy(10,4);cout<<"2) Alzheimer";
			gotoxy(10,5);cout<<"3) SIDA";
			gotoxy(10,6);cout<<"4) Lupus";
			gotoxy(10,7);cout<<"5) Diabetes";
			gotoxy(10,8);cout<<"6) Ebola";
			gotoxy(10,9);cout<<"7) Asma";
			gotoxy(10,10);cout<<"8) Polimielitis";
			gotoxy(10,11);cout<<"9) Gripe";
			gotoxy(10,12);cout<<"10) Resfriado comun";
			gotoxy(10,14);cout<<"Elija una enfermedad de acuerdo a su estado de salud: ";
			cin>>a;
			switch(a){
				case 1:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*1500;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
				case 2:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*500;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
				case 3:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*1500;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
				case 4:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*300;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
				case 5:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*1500;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
				case 6:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*1500;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
				case 7:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*700;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
				case 8:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*500;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
				case 9:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*300;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
				case 10:
					system("cls");
					gotoxy(5,3);cout<<"introduzca los dias que estuvo en el hospital: ";
					cin>>h;
					costo=h*200;
					gotoxy(5,6);cout<<"el costo total de su caso es de: "<<costo<<" pesos";
				break;
			}
		break;
		//caso 5
		case 5:
			system("cls");
			return 0;
		break;
			
	    }
	        cout<<"\nDesea regresar al menu s/n: ";
			cin>>res;
	}while(res!='n');
}

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


void buscarPaciente(nodo *lista, string numseg , string nombre, int edad, string direccion, char sexo, string fecha, string enfermedad){		
	bool band = false;
	nodo *actual = new nodo();
	actual=lista;
	while((actual!=NULL)&&(actual->numseg<=numseg)){
		if(actual->numseg==numseg){
			band=true;
		}
		actual=actual->siguiente;
	}
	if (band==true){
	    	gotoxy(2,8);cout<<"No seguro";
			gotoxy(17,8);cout<<"Nombre";
			gotoxy(32,8);cout<<"Edad";
			gotoxy(47,8);cout<<"Calle";
			gotoxy(62,8);cout<<"Sexo";
			gotoxy(77,8);cout<<"Fecha";
			gotoxy(92,8);cout<<"Enfermedad"; 

			gotoxy(2,9);cout<<numseg;
			gotoxy(17,9);cout<<nombre; 			
			gotoxy(32,9);cout<<edad;			
			gotoxy(47,9);cout<<direccion;		
			gotoxy(62,9);cout<<sexo;
			gotoxy(77,9);cout<<fecha;
			gotoxy(92,9);cout<<enfermedad;		    
	}
	else{
	  gotoxy(24,11);cout<<"     EL PACIENTE CON EL NSS: "<<numseg<<" NO SE ENCONTRO EN LA LISTA   ";
	}
}
