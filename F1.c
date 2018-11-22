#include<stdio.h>
void main(){
	mystar();
	int total;
	total = mysum(10,25);
	printf("\n mystar=%d",mysum(10,25));
	mystar();
	
}
void mystar(){
	printf("\n********************************");
}

int mysum(int i,int j){
	int total=0;
	total = i+j;
	return total;
}
