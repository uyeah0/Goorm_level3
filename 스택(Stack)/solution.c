#include <stdio.h>
#define MAX 10
int stack[MAX] = {0,};
int top=-1;

void push(int n){
	if(MAX - 1 == top){
		printf("overflow\n");
		return;
	}
	stack[++top] = n;
}
void pop(){
	if(top == -1){
		printf("underflow\n");
		return;
	}
	top--;
}

int main() {
	int a;
	scanf("%d", &a);
	for(int i =0; i < a; i++){
		int n;
		scanf("%d", &n);
		if(n != 1 && n != 0) {
			break;
		}
		
		if(n == 0){ 
			int num;
			scanf("%d", &num);
			push(num);	
		}
		else{ 
			pop();
		}
	}
	
	for(int i =0; stack[i] !=0; i++){
		printf("%d ", stack[i]);
	}

		return 0;
}
