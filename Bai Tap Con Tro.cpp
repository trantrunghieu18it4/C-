#include<stdio.h>
#include<malloc.h>
void NhapMang(int*arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
  		scanf("%d",arr+i);
	}
}
void InMang(int*arr,int n)
{
	printf ("  Cac phan tu vua nhap la:");
	for(int i=0;i<n;i++)
    printf("\narr[%d]=%d",i,*(arr+i));	
}
int TimSo(int *arr,int n)
{
	int m;
	for(int i=0;i<n;i++)
	{
		if((*(arr+i))<0)
		  {
		  m=(*(arr+i));
		    break;
		}
		else 
	       m=-1;
	}
	return m;
}
int Dem(int*arr,int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if((*(arr+i))<10)
		 dem++;
	}
	return dem;
}
int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int*p=(int*)malloc(n*sizeof(int));
	NhapMang(p,n);
	InMang(p,n);
    printf("\nPhan tu am la:",TimSo(p,n));
    printf("\nCo ",TimSo(p,n)," phan tu am");
    delete []p;
}

		
