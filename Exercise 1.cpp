#include <stdio.h>
# include <conio.h>
#include <math.h>
bool ktsoam(int n){
	if(n<0) { return true ;}
	return false; }

bool ktcanh(int a, int b, int c) {
	return (a+b)> c && (a+c) > b && (b+c) > a ;
 }	

double dientich(int a, int b, int c){
	double p2 = (a + b + c)/2.0;
	double s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	return s;
	}
   
int main () {
    printf ("nhap lan luot cac canh cua tam giac a,b,c :  \n");
	int i, j, k;
	scanf("%d", &i);
	scanf("%d", &j);
	scanf("%d", &k);
    if( ktsoam(i)) {
		printf ("canh %d am nen khong hop le , khong phai la canh cua tam giac \n", i );}
	if( ktsoam(j)) {
		printf ("canh %d am nen khong hop le, khong phai la canh cua tam giac \n", j );}
	if( ktsoam(k)) {
		printf ("canh %d am nen khong hop le, khong phai la canh cua tam giac \n", k );}
	if (ktsoam(i) == false && ktsoam(j)== false && ktsoam(k)== false){
	   if (ktcanh(i,j,k)) { printf(" %d , %d , %d la canh cua tam giac \n", i, j ,k); 
    	printf(" dien tich tam giac la %lf \n" , dientich(i,j,k));
    	} else { printf(" %d , %d , %d ko la canh cua tam giac \n", i, j ,k);
		  if ( (i+j) <= k) { printf ("canh %d  khong hop le do nho hon tong 2 canh con lai \n",k);} 
		  if ( (i+k) <= j) { printf ("canh %d  khong hop le do nho hon tong 2 canh con lai \n",j);} 
		  if ( (k+j) <= i) { printf ("canh %d  khong hop le do nho hon tong 2 canh con lai \n",i);} 
		
		}
    	printf ("\n");
	}
	return 0;
	}
