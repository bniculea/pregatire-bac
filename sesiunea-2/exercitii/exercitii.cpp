#include <iostream>
using namespace std;

/*int counter_impar(int n);

int main()
{
	int n;
	cout << "n=";
	cin >> n;
	cout << "numere impare:" << counter_impar(n);
}

int counter_impar(int n)
{
	int impare = 0;
	int ucifra;

	while (n)
	{
		ucifra = n % 10;
		if (ucifra % 2 != 0)
		{
			impare++;
		}
		n = n / 10;
	}
	if (impare == 0)
	{
		return -1;
	}
	else
		return impare;

}


int doitrei(int n);

int main()
{
	int n;
	cin >> n;
	cout << doitrei(n);
}

int doitrei(int n)
{
	int cifra;
	while (n)
	{
		cifra = n % 10;
		if (cifra != 2 && cifra != 3)
			return 0;
		else
			n = n / 10;
	}
	return 1;
	
}



int prim(int n);

int main()
{
	int n;
	cout << "n=";
	cin >> n;
	cout << prim(n);
}
int prim(int n)
{
	for (int i = 2; i < n / 2; i++)
	{
		if (n % i != 0)
			return 1;
		else return 0;
	}
}

Exercitii Subprograme:

//Celsius to farrenheit
int transformare(int n);

int main()
{
	int n;
	cin >> n;
	cout << n << "grade celsius=" << transformare(n) << "grade farehneit";
}

int transformare(int n)
{
	int gfar = (n * 1.8) + 32;
	return gfar;
}
*/

/*
int oglinda(int n);


int main()
{
	int n;
	cin >> n;
	cout << oglinda(n);
}

int oglinda(int n)
{
	int oglinda = 0; int ucif;
	while (n)
	{
		ucif = n % 10;
		oglinda = oglinda * 10 + ucif;
		n = n / 10;
	}
	return oglinda;
}


int palindrom(int n);

int main()
{
	int n;
	cin >> n;
	cout << palindrom(n);

}

int palindrom(int n)
{
	int c = n;
	int ogl = 0;
	int ucif = 0;
	while (n)
	{
		ucif = n % 10;
		ogl = ogl * 10 + ucif;
		n = n / 10;
	}
	if (ogl == c)
		return 1;
	else return 0;

}


void numar(int n, int c1, int c2);
int v[100];
int main()
{
	
	int n;
	cin >> n;
	int c1; cin >> c1;
	int c2; cin >> c2;
	numar(n, c1, c2);
}

void numar(int n, int c1, int c2)
{
	
	int i;
	int cifre = 0;
	int copie_n=n;
	int a = 0;
	while (copie_n)
	{
		copie_n = copie_n / 10;
		cifre++;
	}
	for (i = cifre; i > 0; i--)
	{
		v[i] = n % 10;
		n = n / 10;
	}

	for (i = 1; i <= cifre; i++)
	{
		if (a == 1)
		{
			v[i] = 0;
		}

		if (v[i] == c1)
		{
			v[i] = c2;
			a = 1;
		}
		
		
	}
	for (i = 1; i <= cifre; i++)
	{
		cout << v[i];
	}
}
*/
int main()
