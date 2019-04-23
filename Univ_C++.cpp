#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	float valor=0;
	float valor1=0;
	float valor2=0;
	float compras;
	int contador=0;
	int contador1=0;
	int contador2=0;
	float t;
 
	
	cout<<"Bienvenido a tiendas la Universal"<<endl;
	do{
		
		cout<<"          Ingrese el valor de la compra realizada"<<endl;
		cout<<"          Para finalizar ingreso de compras dijite 0"<<endl;
		cin>>compras;
		
		if(compras>1000){
			valor=valor+compras;
			contador+=1;		
		}else if(compras>500 && compras<=1000){
			valor1=valor1+compras;
			contador1+=1;
		}else if(compras<=500&&compras>0){
			valor2=valor2+compras;
			contador2+=1;
		}
	} while(compras!=0);
	
		cout<<"Tiene: "<< contador <<" de compras mayores a 1000 = "<<valor<<endl;
		cout<<"Tiene: "<< contador1 <<" de compras mayores a 500 pero menores o iguales a 1000 ="<<valor1<<endl;
		cout<<"Tiene: "<< contador2 <<" de compras menores o iguales a 500 ="<< valor2 <<endl;
		t=valor+valor1+valor2;
		cout<<"El total de compras vendidas es: "<<t<< endl;
		
		return 0;
}
