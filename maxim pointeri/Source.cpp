//Nicorici Adrian, 18.05.2014
/*Sa se scrie un program care citeste doua valori intregi si calculeaza
maximul dintre ele utilizand pointeri.*/

#include <iostream>
using namespace std;

void max(int *a,int *b){
	if(*a>*b){
		cout << " Maximul dintre ele este a : " << *a << endl;
	}
	else{
		cout << "Maximul dintre ele este b : " << *b << endl;
	}
}


int main(){
	int a,b;
	cout << "Introduceti a" << endl;
	cin >> a;
	cout << "Introduceti b" << endl;
	cin >> b;

	max(&a,&b);

	system("pause");
	return 0;
}