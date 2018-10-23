#include<stdio.h>
void Nhapmang(int a[100],int n)
{
	for (int i=0;i<n;i++)
	 {
	   printf("a[%d]= ",i);
	   scanf("%d",&a[i]);
    }
}
int Tong(int a[100],int n)
{
	int tong=0;
	for (int i=0;i<n;i++)
	   tong=tong+a[i]; 
         return tong;	 
}
int Min(int a[100],int n)
{
     int min=a[0];
for (int i=0;i<n;i++)
	 {
	   if(min>a[i])
	      min=a[i];
	return min;
             }
}
int Max(int a[100],int n)
{
     int max=a[0];
for (int i=0;i<n;i++)
	 {
	   if(max<a[i])
	      max=a[i];
	return max;
             }
}
int main()
{
int mang[100];
int n;
printf("Nhap so phan tu cua mang:");
scanf("%d",&n);
Nhapmang(mang,n);	
printf("\nTong cac phan tu =%d",Tong(mang,n));
printf("\nSo nho nhat la: %d",Min(mang,n));
printf("\nSo lon nhat la: %d",Max(mang,n));
}
