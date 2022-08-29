#include "functions.h"

int factorial(int n){
    if(n<0){
	cout<<"Enter a positive number : ";
	int x;
	cin>>x;
	n = x;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
