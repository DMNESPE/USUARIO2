#include <iostream>
 
using namespace std;
 
int main()
{
    int num,positivo,negativo,cant,i;
    positivo=0;
    negativo=0;
    cout<<"Introduzca Cantidad de Numeros a Evaluar:";
    cin>>cant;
    for(i=1; i<=cant;i++)
    {
        cout<<"Introduzca un Numero Entero:";
        cin>>num;
        if (num>0)
        {
            positivo+=+1;
        }
        else
        if(num<0)
        {
            negativo+=+1;
        }
    }
    cout<<"\nLa Cantidad de Positivos Son:"<<positivo<<endl;
    cout<<"\nLa Cantidad de Negativos Son:"<<negativo<<endl;
    cout<<"\nEl mayor numero positivo:"<<positivo<<endl;
    cout<<"\nEl mayor numero negativo:"<<negativo<<endl;
    return 0;
}
