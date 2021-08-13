#include <stdio.h>
#define MAX 10
void push();
void pop();
int top = -1;
int stack[10] = {0,};

int main() {
	int n,data;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&data);
			if(data==0)push();
			else if(data==1) pop();
			else break;
	}
	
	if(top != -1){
		for(int i = 0; i <= top; i++){
			printf("%d ",stack[i]);	
		}	
	}
	return 0;
}
void push(){
	int d;
	scanf("%d", &d);
	top++;
	if(top==MAX){
		printf("overflow\n");
		top--;
	}else{
		stack[top] = d;
	}
}
void pop(){
	if(top==-1){
		printf("underflow\n");
	}else{
		printf("%d\n",stack[top]);
		top--;
	}
}