//////tim va in vi tri gia tri xuat hien nhieu nhat trong mang///////
////////////////////////////////////////////////////////////////////
#include "stdio.h"



void nhap(int a[],int n){
    printf("nhap phan tu:");
    for (int i = 0; i < n; i++){
     printf("\na[%d]= ",i);
     scanf("%d",&a[i]);
    }
    printf("mang nhap : ");
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",a[i]);
    }
    
}


void xuat(int a[],int b[],int n){
    int max = 1; //moi gia tri dem trong mang xuat hien it nhat 1 lan
    for (int i = 0; i < n; i++)
    {
            if (b[i] > max)
            {
             max = b[i];
            }
    }
    for (int i = 0; i < n; i++)
    {
    if (b[i]==max)
    printf("\nPhan tu %d xuat hien nhieu lan nhat voi %d lan xuat hien",a[i],b[i]);
    }
     
}

void count(int a[], int b[], int n){
    
    for (int i = 0; i < n; i++)
    { 
        for (int j = i; j < n; j++)
        {
            
               if (a[j] == a[i])
            {
                b[i]++;
            }   
        }
    }

    
}


void main()
{
    int n;
    int a[100],b[100]= {0};
    
   
    do
    {
        printf("nhap so phan tu : ");
        scanf("%d",&n);
    } while (n<0 || n>100);
    nhap(a,n);
    count(a,b,n);
    xuat(a,b,n);
    
}
