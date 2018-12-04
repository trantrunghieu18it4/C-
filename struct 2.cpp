#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct book{
	char name[50];
	char author[50];
	float price;
	int edn;
};


void NhapSach(struct book b[],int n){
	for(int i = 0; i < n; i ++){
		fflush(stdin); 
		printf("Nhap ten sach b[%d] : ",i);
		scanf("%s",&b[i].name);
		printf("\nNhap nam xuat ban  b[%d]=",i);
		scanf("%d",&b[i].edn);
		printf("\nNhap gia b[%d]=",i);
		scanf("%f",&b[i].price);
	}
}
void InSach(struct book b[],int n) {
	for (int i = 0; i <n; i ++){
		printf("\nTen sach b[%d] la :\t %s",i,b[i].name);
		printf("\nNam xuat ban b[%d] la : %d ",i,b[i].edn);
		printf("\nGia b[%d] la :\t %f ",i,b[i].price);
	}
}
void SearchName(struct book b[],int n)

{
char x[50]; 
	printf("\nNhap ten sach can tim:");
	scanf("%s",x);
	for(int i=0;i<n;i++)
{
	if(strstr(b[i].name,x)!=NULL){
		printf("Ten la %s",b[i].name);
		printf("\n Nam san xuat:%d",b[i].edn);
		printf("\nGia la %f",b[i].price);
	}
}
}
int main()
{
	struct book b[50];
	char x[50];
	int n;
	printf("\nNhap so sach n = ");
	scanf("%d",&n);
	NhapSach(b,n);
	InSach(b,n);
	SearchName(b,n);
}
