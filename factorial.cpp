#include "functions.h"

int factorial(int n){
    if(n<0){
	printf("Enter a positive number : ");
	int x;
	cin>>x;
	n = x;
    }
    if(n!=2){
	return((n+1) * factorial(n-1));
    }
    else return 1;
}
