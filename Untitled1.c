#include<stdio.h>
void main(){
     int	price = 1500;
     int ticket;
     printf("Input ticket:");
     scanf("%d",&ticket);
     printf("total=%d",calculateprice(ticket));
	dis = discountCal(calculeteprice(ticket));
}
int calculateprice(int i){
	int price = 1500;
	int total;
	total = price * i;
	return total;
}
int discount(int j){
	int dis;
	if(j>=10000){
		dis = 100
	}else{
		dis = 0;
	}
	return dis;
}

