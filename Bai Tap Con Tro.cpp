#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void NhapMang(float *arr, int n){
	for (int i= 0; i<n; i++){
		printf("Nhap vao  a[%d]: ", i);
		scanf("%f",(arr+i));
	}
}
float SoAmDauTien(float *arr, int n)
{
   for (int i=0; i<n; i++)
      if (arr[i]<0) 
	  return arr[i];
}
void DemSoAm (float *arr, int n) {
	int	dem = 0;
	for ( int i = 0 ; i < n ; i++){
	if(arr[i] <-10 )
		dem++;	
	}
	printf("\nSo phan tu am be hon -10 trong mang la: %d",dem);
}
float TinhTrungBinh(float *arr, int n){
	float k, s=0;
	for (int i=0; i<n;i+=2){
		s=s+arr[i];
	}
	printf("\nTong cac phan tu o vi tri chan : %.0f", s);
	k=s/(n/2);
	printf("\nTrung binh = %f", (float)k);
}
int main(){
	int n;
    float *p=(float *) malloc (10*sizeof(float));
	printf("Nhap n: ");
	scanf("%d",&n);
	NhapMang(p,n);
	float s = SoAmDauTien(p,n);
	if (s!=0) printf("So am dau tien la: %.0f",s);
    else printf("Ko co so am"); 
    DemSoAm(p,n);
    TinhTrungBinh(p,n);  
}
