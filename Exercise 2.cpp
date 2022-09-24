#include <stdio.h>
#include <string.h>
void upperclass (char str[]) {   //ham viet hoa ky tu trong string
	for (int i = 0; i < strlen(str); i++ ) {  
		if (str[i] >= 97 && str[i] <= 122) {
			str[i] -= 32;
		}	
	}
	
}


int main () {

	char name[100];
    printf("Enter string: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("chuoi vua nhap: ");
    puts(name);   //print string
	printf (" \n");
	upperclass(name);       
    printf ("chuoi viet hoa: " );	
     puts(name);
	printf (" \n");
}
	
