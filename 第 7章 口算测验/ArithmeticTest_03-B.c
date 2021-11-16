#include <stdio.h>
#define N 5

int main()
{
	int number1[N] = {36, 23, 47, 7, 19};
	int number2[N] = {25,  8, 29, 16, 6};
	char opt[N] = {'+', '-', '-', '+', '+'};
	int is_right[N] = {0};	// 0：回答错误，1：回答正确 
	int input[N];
	int counter = 0;
	int i;
	
	for(i = 0;i < N;i++){
		printf("第%02d题：%2d %c %2d = ", i + 1, number1[i], opt[i], number2[i]);
		scanf("%d", &input[i]);
	}
	
	printf("\n成绩汇总：\n");
	for(i = 0;i < N;i++){
		printf("%2d %c %2d = ", number1[i], opt[i], number2[i]);
		printf("%2d", input[i]);
		if(opt[i] == '+'){
			if(input[i] == (number1[i] + number2[i])){
				is_right[i] = 1;
			}
		}else{
			if(input[i] == (number1[i] - number2[i])){
				is_right[i] = 1;
			}
		}
		if(is_right[i]){
			printf("\n");
			counter++;
		}else{
			printf(" [答案：");
			if(opt[i] == '+'){
				printf("%2d]\n", number1[i] + number2[i]);
			}else{
				printf("%2d]\n", number1[i] - number2[i]);
			}
		}	
	}
	printf("题目总数：%6d\n答对数量：%6d\n", N, counter); 
	printf("正确率：%7.2f%%\n", counter * 100.0 / N);
	
	return 0;
}
