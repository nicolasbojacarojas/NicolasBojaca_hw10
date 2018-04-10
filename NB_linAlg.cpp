#include <iostream>
using std::cout;
using std::endl;
using std::cin;
double matrix_product(double matriz1 double matriz2);
int main(){
	//Vector
	double *A = new double[10];
	//Matriz
	double **mat = new double*[4];
	int i;
	for(i = 0; i<4;i++){
		mat[i] = new double[5];
	}
	cout<<**mat<<endl;
	int j;
	for (j = 0;j<4; j++){
		for (i = 0; i<4;i++){
			mat[i][j]=i*j;
			cout<<mat[i][j]<<endl;
		}

	}
	int 
	return 0;
}
double** matrix_product(double matriz1 double matriz2 int dimx1 int dimy1 int dimx2 int dimy2 ){
	int xr = dimy2;
	int yr = dimx1; 
	double **mat = new double*[xr];
	int i = 0;
	int j = 0;
	int k = 0;
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
double** get_Matrix(int M int N)
{
	double numero;
	double **mat = new double*[M];
	for (int i = 0; i < M; i++)
	{
		mat[i] = new double[N];
	}
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
