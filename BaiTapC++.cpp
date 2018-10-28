#include<stdio.h>
#include<conio.h>
#include<string.h>
   void NhapMang(int a[],int n)
{
	printf("Nhap cac phan tu trong mang:");
	for(int i=1;i<=n;i++)
	{
	printf("\nPhan tu thu %d:",i);
	scanf("%d",&a[i-1]);
          }
}
   void XuatMang(int a[],int n)
{
	printf("Cac phan tu trong mang la:");
     for(int i=0;i<n;i++)
     printf("\n a[%d]=%d",i,a[i]);
 }
 int GT(int a[],int n)
 {
 int tich,tong=0;
 	for(int i=0;i<n;i++)
 	{
			for(int k=1;k<=a[i];k++)
			{
				tich=tich*k; 
			}
		tong =tong+tich;
		tich=1;
		}
 return tong;
 }
 void NhapChuoi(char b[50])
 {
 	printf("\nNhap 1 chuoi:");
 	scanf("%s",b);
 	printf("Chuoi vua nhap la:%s",b);
 }
 double TinhDien(int csc,int csm)
 {
 	double tiendien;
 	int cs;
 	cs=csm-csc;
 	if((cs>0)&&(cs<50))
 	tiendien=cs*1500;
 	else
 	{
 		if((cs>=50)&&(cs<100))
 		tiendien=50*1500+(cs-50)*2000;
 		else
 		tiendien=50*1500+50*2000+(cs-100)*3000;
 		
	 }
	 return tiendien;
 }
 int main()
 {
 	int n;
 	printf("Nhap so phan tu cua mang:");
 	scanf("%d",&n);
 	int a[n];
 	NhapMang(a,n);
 	XuatMang(a,n);
 	printf("\nTong giai thua cua cac phan tu chan la:%d",GT(a,n));
 	char b[50];
	NhapChuoi(b);
 	printf("\n----------Tinh Tien Dien----------");
 	int csc,csm;
	printf("\nNhap chi so cu:");
	scanf("%d",&csc);
	printf("\nNhap chi so moi:");
	scanf("%d",&csm);
	printf("\nTien dien=%f",TinhDien(csc,csm));	
}
