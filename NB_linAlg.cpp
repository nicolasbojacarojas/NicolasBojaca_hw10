#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//declaración de la funcion que genera una matriz como resultado de dos matrices que se pasan por parametro
double matrix_product(double matriz1 double matriz2);
int main(){
	return 0;
}
//funcion del producto entre dos matrices dadas por parametro
double** matrix_product(double matriz1 double matriz2 int dimx1 int dimy1 int dimx2 int dimy2 ){
	//Variable que le va a dar la primeradimension de la nueva matriz a traves del segundo valor que da el usuario de la dimension de la segunda matriz	
	int xr = dimy2;
	//VAriable que da la segunda dimension de la nueva matriz a traves del primer valor que el usuario da de la primera dimesnion de la primera matriz
	int yr = dimx1; 
	//inicializacion de la matriz
	double **mat = new double*[xr];
	for (int i = 0; i < dimx1; i ++)
	{
		mat[i] = new double[dimy2];
	}
	int i = 0;
	int j = 0;
	int k = 0;
	//iteraciones sobre la nueva matriz y las dos preexistentes para realizar la multiplicacion de las matrices
	for (i = 0; i < dimx1; i++)
	{
		for (j = 0; j < dimy2; j++)
		{
			for (k = 0; k < dimy1; k++){

				mat[i][j] = matriz1[j][k]*matriz2[k][j]
			}
		}
	}

}
//Funcion para pedir los valores al usuario para asignarle a cada elemento de la matriz
double** get_Matrix(int M int N)
{
	//Variable que va a guardar el valor dado por el usuario
	double numero;
	//inicializacion de la matriz
	double **mat = new double*[M];
	for (int i = 0; i < M; i++)
	{
		mat[i] = new double[N];
	}
	//agrega los elementos a la matriz una vez pide el valor al usuario y este lo digita al programa
	for (int i = 0; i < M; i ++ )
	{
		for (int j = 0; j < N; j++)
		{
			cout << "Ingrese el elemento en la fila " << i << " columna " << j <<endl;
			cin >> numero;
			mat[i][j] = numero;	
		}
	}
	return mat;
}  
