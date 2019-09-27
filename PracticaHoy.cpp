#include <iostream> 
using namespace std;

void pasar();
int a,b,opcion;

int suma(){
	return a+b;
}

void pasar (int a, int b){
	b=a;
}

int main (){
	
        cout << " \t 1 .- PASO POR REF Y PASO POR VAL " << endl;
        cout << " \t 2 .- RECURSIVIDAD " << endl;
        cout << " \t 3 .- Salir " << endl;
        cout << " Elije una opcion: " ;
        cin >> opcion;
	
	switch(opcion){
		case 1:
			cout<<"PASO POR REF Y PASO POR VAL...."<<endl;
	
			cout<<"Ingresa el valor 1 ";
			cin>>a;
			cout<<"Ingresa el valor 2 ";
			cin>>b;
	
			cout<<"Valores dados..."<<a<<" "<<b<<endl;
			pasar(a,b);
			cout<<"Valores nuevos..."<<a<<" "<<a<<endl;
			break;
			
		case 2:
			int producto,w,q;
			{
			cout<<"Ingresa el valor 1 ";
			cin>>w;
			cout<<"Ingresa el valor 2 ";
			cin>>q;
			producto=w*q;
			return producto; }
			break;
		default:
			cout<<"HASTA LUEGO MACHO APLHA....";
			break;
	}//fin switch
	return 0;
}//fin main
