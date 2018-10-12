#include <iostream>
using namespace std;
int mcd(int a, int b);

int main(int argc, char *argv[]) {
 int n1,n2;
 cout<<"ingrese N1"<<endl;
 cin>>n1;
 cout<<"ingrese N2"<<endl;
 cin>>n2;
 
 cout<<"el resultado de mcd es:"<<mcd(n1,n2)<<endl;
 return 0;
}

int  mcd(int a, int b) {
 if(b > a) {
  return 0;
 }
 else {
  return mcd(a-b, b) + 1;
 }
}
