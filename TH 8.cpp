# include <stdio.h>
# include <stdlib.h>
int nhapmang2c (int *a,int n, int m);
int xuatmang2c (int *a,int n, int m);
int sx (int *a,int n, int m);
int main()
{
int *a, n, m;
a=(int *)calloc(25,sizeof(int));
printf("\n Nhap n: ");
scanf("%d",&n);
printf("\n Nhap m: ");
scanf("%d",&m);
nhapmang2c(a,n,m);
xuatmang2c(a,n,m);
printf("******\n");
sx(a,m,n);
printf("++++++\n");
xuatmang2c(a,n,m);
}
int nhapmang2c(int *a,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\n Nhap phan tu thu a[%d][%d]:\t",i,j);
			scanf("%d",(a+i*n+j));
		}
	}
}

int xuatmang2c(int *a,int n, int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\t%d",*(a+i*n+j));
		}
		printf("\n");
	}
}
int sx(int *a,int n,int m)
{
	int tam, tich=m*n;
	for(int i=0;i<tich-1;i++)
	 for(int j=0;j<tich;j++)
	  {
	  	if(*(a+i)>*(a+j))
	  	{
	  		tam=*(a+i);
	  		*(a+i)=*(a+j);
			*(a+j)=tam;
	    }
     	}
	  
}
