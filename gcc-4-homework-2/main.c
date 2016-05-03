#include<stdio.h>
#include "include/producer.h"
#include "include/consummer.h"
int a[2];
int main()
{
	producer(a);
	consummer(a);
	return 0;
}
