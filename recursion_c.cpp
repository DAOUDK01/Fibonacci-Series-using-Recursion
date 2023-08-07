#include <stdio.h>
int fibo(int a){
	if(a==0){
		return 0;
		
	}
	else if(a==1){
		return 1;
	}
	else{
		return fibo(a-1)+fibo(a-2);
	}

}
int main(){
	int a;
printf("ENTER LIMIT :")	;
scanf("%d",& a);
for(int y=0; y<a; y++){
	printf("%d ", fibo(y));
}
return 0;
	
	
}
