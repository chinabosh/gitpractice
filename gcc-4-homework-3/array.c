

void arraymul(int a[10][10],int b[10][10],int c[10][10])
{
	int i,j,k;
	for(i=0;i<10;i++)
	   for(j=0;j<10;j++)
	      for(k=0;k<10;k++)
	        c[i][j]+=a[i][k]*b[k][j];
}
