#include<stdio.h>
// xay dung mang mot chieu
void nhapmang1c(int a [50], int n);
void xuatmang1c(int  a [50], int n);

int main()
{
	int a[50], n;
	printf("\n Nhap so phan tu cua mang := ");
	scanf("%d",&n);
	nhapmang1c(a,n);
	xuatmang1c(a,n);
return 0;	
}
// nhap mang mot chieu

void nhapmang1c(int a[50], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n Nhap phan tu thu a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
// xuat mang mot chieu
void xuatmang1c(int a[50],int n)
{
	printf("\n\n CAC PHAN TU CUA MANG LA: ");
	for(int j=0;j<n;j++)
	printf("%d      ;  ", a[j]);
}
