/*Rima Fitri Juliana 3411151104*/
/*Meryana P. Ramadani 3411151088*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#define nmax 100
#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	float x[200];
	float y[200];
	float pre[nmax+1], error[nmax+1];
	float n,totalx,totaly,totalxy,totalxkuadrat,kuadrattotalx,sigmaerror,err;
	float m,c;
	int i;
	
	
	cout << "Menghitung nilai y= mx + c\n";

	
	do
	{
		totalx=0,totaly=0,totalxy=0,totalxkuadrat=0;
		cout <<endl;
		cout <<"Masukan jumlah n :";
		cin >>n;
		cout << endl;
		
		for (i=0;i<n;i++)
		{
			cout <<"Masukkan Nilai X-"<< i+1<<":";
			cin >> x[i];
			cout <<"Masukkan Nilai Y-"<< i+1<<":";
			cin >> y[i];
			cout << endl;
		}
		
		
		//menghitung XY
		
		for (i=0;i<n;i++)
		{
			totalx=totalx+x[i];
			totaly=totaly+y[i]; 
			
		}
		
		//menghitung total x^
		for (i=0;i<n;i++)
		{
			totalxkuadrat=totalxkuadrat+(x[i]*x[i]);
			
			
		}
		//mrnghitung kuadrat total X
		for (i=0;i<n;i++)
		
		{
			kuadrattotalx=totalx*totalx;
		}
		
		//menghitung nilai m / gradien
		 m=-((n*totalxy)-(totalx*totaly)) / ((n*totalxkuadrat)-pow(totalx, 2));
		 cout <<"M = "<<m<<endl;
		
		//menghitung nilai c
		c=((totaly*totalxkuadrat)-(totalx*totalxy)) / ((n*totalxkuadrat)-pow(totalx, 2));
		cout <<"C = "<<c<<endl;
		
		//menampilkan hasil
	
		cout <<"Persamaan Y="<<m<<"x"
		<<setiosflags(ios::showpos)<<c<<endl;
		
		//menghitung prediksi
 		
 	
  		for (i=1; i<=n;i++)
		  {
      		pre[i]=(m*x[i])+c;
      		
		 }
		
		//menghitung error
  		 for (i=1; i<=n;i++)
	  	 {
  	 		error[i]=y[i]-pre[i];
  		 		if (error[i]<0)
				   {
         			 error[i]=pre[i]-y[i];
		 			 }
         	 		sigmaerror=sigmaerror + error[i];
   			}
    	
			
   
  		//tampil error tiap prediksi
    
   		printf ("\nSelisih Error\n");
   			for (i=1; i<=n;i++)
			   {
    			printf ("\nJika f(x)=%.2f yaitu %.2f \n", pre[i], error[i]);
				}
   		//menghitung error
   			err=i/n;
  			printf ("\nERROR %f",err);

	}
	while(i<n);
}
