//semana 1 problema 3
//Erick Jair Hernandez Lopez
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int dentranda();
void distribucion();
int n,m,k,i,r;
int a[200000];
int b[200000];
int sum=0;
int main (){
    dentranda();
    while(m,m<=200000 && k>=0 && k<=10000000 && a[200000],b[200000]>=1 && a[2000000],b[20000000]<=10000000 ){
    distribucion();
    cout<<"Las personas aceptados son: "<<sum;
	}
	if(m,n>200000);{
		cout<<"\n el numero de apartamentos es 200000";
	}
	if(k>10000000 && k<0);{
		cout<<"\n la diferencia tiene que estar entre 0 y 10000000";}
		if (a[200000],b[200000]>10000000 && a[200000],b[200000] );{
		cout<<"\n las habitaciones tienen como limite 10000000 ";
		}

    return 0;
}
int dentranda(){
    cout<<"\n Proporcionar el numero de solicitantes, el numero de apartamentos y la diferencia maxima permitida: ";
    cin>>n>>m>>k;
    cout<<"\n Proportcionar el tamaño de apartamentos deseado: ";
	for( i=0;i<n;i++){
        cin>>a[i];
        
    
    }
    cout<<"\n Tamaño de cada aprtamiento disponible: ";
    for( r=0;r<m;r++){
        cin>>b[r];
	}    
}
void distribucion(){
	for(i=0;i<n;i++){
    	for(r=0;r<m;r++){
    		if(sum<m){
			if((abs(a[i]-b[r]))<=k){
			sum+=1;
  			a[i]=a[i+1];
			b[r]=b[r+1];
		}
			}
		}
}
}