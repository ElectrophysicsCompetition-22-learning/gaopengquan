#include<stdio.h>
int main(){
	float a,b; 
	printf("这是一个实现任意两个数相加的计算器\n");
	printf("请分别输入这两个数\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("相加的结果为：%.2f",a+b);
	return 0;
}
