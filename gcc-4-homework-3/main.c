#include<stdio.h>
#include<time.h>
#include "include/array.h"
#include "include/init.h"
int a[10][10],b[10][10],c[10][10];
double start,end;
int main()
{
	start=clock();
	init(a);
	init(b);
	arraymul(a,b,c);
	end=clock();
	printf("using time:%10.9f",(double)((end-start)/1000.0));
	return 0;
}
