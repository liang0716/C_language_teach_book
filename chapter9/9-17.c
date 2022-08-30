//9-17 9-18 9-19 9-20 9-21 9-22
#include <stdio.h>
#include <stdlib.h>
#include "../function_list/leon_head.h"

#define ROW 3
#define COL 2

int min(int a[]);
void sq(int arr[]);
void count(int arr[]);
double avg(int arr[][COL]);
void add(int a[][COL], int b[][COL], int c[][COL]);

int main(void)
{
	int a[6] = {6, 7, 8, 0, 1, 3};
	
	int b[3][2] ={
					{ 0, 1},
					{ 2, 3},
					{ 4, 5}
				};
	int c[3][2] ={
					{ 1, 1},
					{ 2, 2},
					{ 3, 3}
				};	
	
	int d[3][2];
	
	printf("min(a) idx=%d\n", min(a));
	printf("\n");
	sq(a);
	printf("\n");
	count(a);
	printf("\n");
	avg(b);
	printf("\n");
	add(b,c,d);
	
	printf("\n");
	system("pause");
	return 0;
}

int min(int a[])//哀 若在fuction傳陣列當引數時，在function 內的size永遠會變成固定8(32bit) 
{
	int i, min = a[0], min_idx = 0;
	//printf("sz:%d\n ", (sizeof(a)));//哀 若在fuction傳陣列當引數時，在function 內的size永遠會變成固定8(32bit)
	
	for(i = 0; i < 6; i++)
	{
		//printf("%d ", a[i]);
		if(a[i] < min)
		{
			min = a[i];
			min_idx =i;
		}
	}
	return min_idx;
}

void sq(int arr[])
{
	int i;
	for(i = 0; i < 6; i++)
	{
		printf("%d ", pow_int(arr[i], 2));
	}
}

void count(int arr[])
{
	int i, j, odd_cnt=0;
	for(i = 0; i < 6; i++)
	{	if(arr[i]%2)
		{	
			odd_cnt++;
			printf("odd:%d ,", arr[i]);
		}
		else
		{
			printf("even:%d ,", arr[i]);
		}
		
	}
	printf("\neven_cnt:%d, odd_cnt:%d\n", 6 - odd_cnt, odd_cnt);
}

double avg(int arr[][COL])
{
	int sum = 0, cnt =0;
	int i, j;
	
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			sum += arr[i][j];
			cnt++;
		}
	}
	printf("avger:%5.2f\n", (float)sum/cnt);
}

void add(int a[][COL], int b[][COL], int c[][COL])
{
	int i,j;
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
		for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("%d ,", c[i][j]);
		}
		printf("\n");
	}
}
