#include <stdio.h>
#define MAX 10
int stack[10] = {0,};
int top=-1;

int push(int n){
	if(MAX -1 == top){
		printf("overflow\n");
		return 0;
	}
	stack[++top] = n;
	return 0;
}
int pop(){
	if(top == -1){
		printf("underflow\n");
		return 0;
	}
	top--;
	return 0;
}

int main() {
	int a;
	scanf("%d", &a);
	for(int i =0; i < a; i++){
		int n;
		scanf("%d", &n);
		if(n == 1){ pop(); }
		else if( n == 0) { 
			int num;
			scanf("%d", &num);
			push(num);	
		}else{
			break;
		}
	}
	
	for(int i =0; stack[i] !=0; i++){
		printf("%d ", stack[i]);
	}

		return 0;
}
