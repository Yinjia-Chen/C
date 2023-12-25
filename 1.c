#include<stdio.h>

int main(){
	
	int n;
	
	scanf("%d",&n);
	
	n=dectobin(n);
	return 0;
}

int dectobin(int n){              //十进制转二进制函数 
	int sum=0;
	int yushu,xishu=1;
	for(;n!=0;n/=2){
		yushu=n%2;
		sum+=x*y;
		x*=10;
	}
	return sum;
}
