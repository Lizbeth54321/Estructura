#include <iostream>
using namespace std;
 struct personas {
 	char nombres[20];
 	int edad;
 } persona1,persona2;
 int main(int argc,char**argv){
    cout<<"nombre:";
    cin.getline(persona2.nombres,20,'\n');
    cout<<"edad:";
    cin>>persona2.edad;
    cout<<persona2.nombres;
    cout<<persona2.edad;
    system("pause");
    return 0;

 }
 
