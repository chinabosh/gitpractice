#include<stdlib.h>
#include<time.h>
void producer(int *a)
{
	time_t t;
	srand((unsigned)time(&t));
	*a=(int )random();
}
