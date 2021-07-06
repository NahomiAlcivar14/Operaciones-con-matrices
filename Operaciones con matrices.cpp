
#include <iostream>
#include<stdlib.h>
#include "nahomi1.cpp"
#include "jared2.cpp"
#include "anthony3.cpp"
#include "jeremy4.cpp"
#include "jared5.cpp"

using namespace std;

void mostrar(float (*r)[5])
{
cout<<endl<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<r[i][j]<<" ";
	}
cout<<"\n";
	}
}

int main()
{
    int op,flag;
	float matriz1[5][5],matriz2[5][5],resultado[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	do{
	system("clear");
	cout<<"OPERACIONES CON MATRICES EN 2 DIMENSIONES"<<endl<<endl;
	cout<<"1.- Ingresar los valores de las matrices \n";
	cout<<"2.- Obtener el producto de las dos matrices \n";
	cout<<"3.- Mostrar la potencias 2 de la primera matriz \n"; 
	cout<<"4.- Mostrar la transpuesta de la primera matriz \n";
	cout<<"5.- Calcular la media y varianza y compararlas \n";
	cout<<"0.- Salir del menu \n";
        cout<<" Ingrese una opción : "; cin>>op;
	switch(op){
		case 1:
	cout<<"ESTA FUNCION PERMITE INGRESAR EL VALOR A LAS MATRICES";
		ingresar(matriz1);
		mostrar(matriz1);
		
		ingresar(matriz2);
		mostrar(matriz2);
		break;
	        case 2:
	// ESTA FUNCION PERMITE CALCULAR EL PRODUCTO ENTRE DOS MATRICES.
		producto(matriz1,matriz2,resultado);
		mostrar(resultado);
		break;
		case 3:
	// ESTA FUNCION PERMITE OBTENER LA POTENCIA 2 DE UNA MATRIZ.
		potencia(matriz1,2,resultado);
		mostrar(resultado);
		break;
		case 4:
	// ESTA FUNCION CALCULA LA TRANSPUEST DE LA PRIMERA MATRIZ
		transpuesta(matriz1,resultado);
		mostrar(resultado);
		break;
		case 5:
	//CUADO CALCULA Y MUESTRA LAS MADIA Y VARIANZA DE LAS DOS MATRICES
		mediayvarianza(matriz1);
		cout<<endl;
		mediayvarianza(matriz2);
		break;
		}
		  if(op!=0){
			    cout <<"Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);

    return 0;
}
//NAHOMI ALCIVAR//
#include <iostream>
#include<stdlib.h>

using namespace std;

void ingresar(float matriz[5][5]){
  for(int i=0;i<=6;i++){
    for(int j=0;j<=6;j++){
      matriz[i][j]=rand()%(89-2+1)+2;
    }
  }
}
//JARED BERNAL// 
#include <iostream>
#include<stdlib.h>

using namespace std;
void producto(float m1[5][5], float m2[5][5], float r[5][5]){
    for(int i=0;i<5;i++){ 
      for(int j=0;j<5;j++){
          for(int k=0;k<5;k++){
              r[i][j]=r[i][j]+(m1[i][k]*m2[k][j]);
          }
      }
  }
}
//JARED BERNAL//
include <iostream>
#include<stdlib.h>

using namespace std;

void mediayvarianza (float m1[5][5]){
    int sumatoria = 0;
    int cantidadElementos = 5*5;
    double sum[5]; // cantidad de filas = cantidad de alumnos
	double avg[5];
	double variance[5];
	double deviation[5];

    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            int elementoActual = m1[y][x];
            sumatoria = sumatoria + elementoActual;
        }
    }

    double promedio = (float) sumatoria / (float) cantidadElementos;
    cout<<"Media: "<<promedio<<endl;
    
    ////////////////////////////////////
    // varianzas
	for(int x=0; x<5; x++) {
		variance[x] = 0;
		for(int y=0; y<5; y++) {
			double range = pow(m1[x][y] - avg[x], 2);
			variance[x] += range;
		}
		variance[x] = variance[x] / 5;
		cout<<endl<<"Variaciones: "<<variance[x]<<endl;
	}
 
	
}
