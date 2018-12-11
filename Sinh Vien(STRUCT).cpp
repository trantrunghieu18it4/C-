#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct Students{
	char ten[30];
	char cmnd[12];
	char masv[7];
	char nganh[4];
	char lop[5];
};
void Nhap(struct Students s[],int n)
{
	for (int i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Nhap ten sinh vien thu %d : ",(i+1));
		scanf("%s",&s[i].ten);
		printf("\nNhap CMND cua sinh vien: ");
		scanf("%s",&s[i].cmnd);
		printf("\nNhap ma sinh vien: ");
		scanf("%s",&s[i].masv);
		printf("\nNhap ma nganh: ");
		scanf("%s",&s[i].nganh);
		printf("\nNhap lop : ");
		scanf("%s",&s[i].lop);
	}
}
void In(struct Students s[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nTen sinh vien thu %d: %s",(i+1),s[i].ten);
		printf("\nCMND:%s",s[i].cmnd);
		printf("\nMa SV:%s",s[i].masv);
		printf("\nNganh:%s",s[i].nganh);
		printf("Ten lop:%s",s[i].lop);
	}
}
void Search( struct Students s[],int n)
{
	char x[50];
	printf("\nNhap ten sinh vien can tim:");
	scanf("%s",&x);
	for(int i=0;i<n;i++)
	{
		if(strstr(s[i].ten,x)!=NULL)
		printf("\nTen sinh vien thu : %s",s[i].ten);
		printf("\nCMND:%s",s[i].cmnd);
		printf("\nMa SV:%s",s[i].masv);
		printf("\nNganh:%s",s[i].nganh);
		printf("Ten lop:%s",s[i].lop);
	}
}
int main()
{
	struct Students s[50];
	char x[50];
    int n;
    printf("Nhap so sinh vien:");
    scanf("%d",&n);
    Nhap(s,n);
    In(s,n);
	Search(s,n)	;
}
