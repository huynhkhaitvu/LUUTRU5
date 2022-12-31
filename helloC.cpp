#include<stdio.h>
int main()
{ 
  print("\n Thasn chso cac ban DA22TTB");
RETURN 0;
#include<stdio.h>
int main()
{
	int m,n;
	int a[50][50];
	int tong=0;
	int dem;
	// nhap,xuat mang 2 chieu
	printf("\nnhap so dong m: ");
	scanf("%d",&m);
	printf("\nnhap so cot n: ");
	scanf("%d",&n);
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\n nhap phan tu a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
		}
	
    }
    for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%3d",a[i][j]);
	    }
	    printf("\n");
	}
	// tong cac so nguyen to chia het cho 3
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==3)
			
			
			tong=tong+a[i][j];
        
      }
  }
  printf("\ntong la: %d ",tong);
