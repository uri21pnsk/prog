#include <iostream>
using namespace std;

int main(){

int num;;
cout << "Cuantos ńumeros quieres guardar?\n";
cin >> num;
int a[num];
int i=0;
while(i<num){
    cout << "Dame el numero";
    cin >> a[i];
    i=i+1;
}

i=0;
int mayor=a [0];
while (i<num){ 
if (a[i]>mayor){
    mayor=a[i];
}
i++;
}
i=1;
int temp
int mayor=a[0];
int menor=a[0];
while (i<num){

if (a[i]<menor){
    menor=a[i];
    posmenor=i;
}
i++;
}
temp=a[0];
menor [0]=a[posmenor];
a[posmenor]=temp;
temp=a[num-1];


}