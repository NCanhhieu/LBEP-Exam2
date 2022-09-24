#include <stdio.h>
# include <conio.h>
#include <math.h>
bool ktsoam(float n){
	if(n<0) { return true ;}
	return false; }

bool ktcanh(float a, float b, float c) {
	return (a+b)> c && (a+c) > b && (b+c) > a ;
 }	

double dientich(float a, float b, float c){
	double p2 = (a + b + c)/2.0;
	double s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	return s;
	}
   
int main () {
    printf ("nhap lan luot cac canh cua tam giac a,b,c :  \n");
	float i, j, k;
	scanf("%f", &i);
	scanf("%f", &j);
	scanf("%f", &k);
    if( ktsoam(i)) {
		printf ("error \n canh a = %f am nen khong hop le , khong phai la canh cua tam giac \n", i );}
	if( ktsoam(j)) {
		printf ("error \n canh b = %f am nen khong hop le, khong phai la canh cua tam giac \n", j );}
	if( ktsoam(k)) {
		printf ("error \n canh c = %f am nen khong hop le, khong phai la canh cua tam giac \n", k );}
	if (ktsoam(i) == false && ktsoam(j)== false && ktsoam(k)== false){
	   if (ktcanh(i,j,k)) { printf(" %f , %f , %f la canh cua tam giac \n", i, j ,k); 
    	printf(" dien tich tam giac la %lf \n" , dientich(i,j,k));
    	} else { printf("error \n %f , %f , %f ko la canh cua tam giac \n", i, j ,k);
		  if ( (i+j) <= k) { printf ("canh c = %f  khong hop le do lon hon tong 2 canh con lai \n",k);} 
		  if ( (i+k) <= j) { printf ("canh b = %f  khong hop le do lon hon tong 2 canh con lai \n",j);} 
		  if ( (k+j) <= i) { printf ("canh a = %f  khong hop le do lon hon tong 2 canh con lai \n",i);} 
		
		}
    	printf ("\n");
	}
	return 0;
	}
