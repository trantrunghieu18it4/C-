#include<stdio.h>
#include<string.h>
void Nhapmang(int a[100],int n)
{
	for (int i=0;i<n;i++)
	 {
	   printf("a[%d]= ",i);
	   scanf("%d",&a[i]);
	   
    }
}
int gt(int a[100],int n)
{
  int i,t=1,tong=0;
  for(i=1;i<=n;i++)
    {
	if(a[i]%2==0)
    {
	  t=t*i;
     for(i=0;i<=a[i];i++)
    {
      tong=tong+t;
             }
       }
}
  return tong;
} 
int Chuoi(char chuoi[100])
{
	int i=0;
	printf("Nhap chuoi:");
	scanf("%s",chuoi);
	printf("\nChuoi la:%s ",chuoi);
       }
double Tinhtiendien(int csc,int csm)
{
	printf("Nhap chi so cu:");
	scanf("%d",&csc);
		printf("Nhap chi so moi:");
	scanf("%d",&csm);
	int cs=csm-csc;
	double tien=0;
	if(cs<150)
	   tien=cs*1500;
	   else 
	   {
	   if((cs>50&&(cs<100))
	      tien=50*1500+(cs-50)*2000;
	   else
	   tien=50*1500+(50*2000+(cs-100)*3000;
	   }
	   return tien;   
}
int main()
{	
int mang[100];
char b[100];
int n;
printf("Nhap so phan tu cua mang:");
scanf("%d",&n);
Nhapmang(mang,n);
printf("Tong giai thua cua ca so chan =%d",gt(mang,n));
Chuoi(b);
printf("tien dien =%d",Tinhtiendien(csc,csm);
}
