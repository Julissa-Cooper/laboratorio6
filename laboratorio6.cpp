#include <iostream>
using namespace std;



int main()  {

int numero, suma=0 , contador=0;
 cout << "Ingrese un numero"<<endl;
    cin >> numero;
for(int i=1; i <=numero; i+=2){               
   suma = suma + i;
   contador++;
}
cout << "La suma de los numeros impares es "<<suma<< endl;
cout << "la cantidad de los numeros impares es "<<contador<<endl;
return 0; 
}
 
