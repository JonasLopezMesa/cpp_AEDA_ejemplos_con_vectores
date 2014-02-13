#include <iostream>
using namespace std;

int main () {
	//EJERCICIO 1///////////////////////////////////////////////////////////////////////////////////
	
	int a[4][7];
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			a[i][j] = i + j;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	//EJERCICIO 5///////////////////////////////////////////////////////////////////////////////////
	
	const int N = 30;
	char a[N];
	cin.getline(a, N);

	int i = N;
	while (i != -1) {
		cout << a[i];
		i--;
	}
	
	//EJERCICIO 6///////////////////////////////////////////////////////////////////////////////////
	
	float n;
	int a[20];
	int x[10] = {0};
	int i = 0;
	int aa;
		
	for (int m = 0; m < 10; m++) {
		cout << x[m];
	}
		cout << endl;
	
	while (n != -1) {
		cout << "Escribe la nota del alumno número: " << i << endl;
		cout << "Si escribe un -1 habrá terminado." << endl;
		cin >> n;
		a[i] = n / 1;
		i++;
	}
	int j = 0;
	int k = 0;
	while (a[j] != -1) {
		for (k = 0; k < 10; k++) {
			if (a[j] == k) {
				x[k]++;
			}
		}
		j++;
	}
	cout << "       FRECUENCIA" << endl;
	cout << "VALOR  0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  16  17  18  19  20" << endl;
	for (int w = 0; w < 10; w++) {
		cout << w << "      "; 
		aa = 0;
		while (aa <= x[w]) {
			cout << "*  ";
			aa++;
		}
		cout << endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
