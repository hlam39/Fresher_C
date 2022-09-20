/////dung ham con sap xep va in mang tang dan va giam dan////
/////////////////////////////////////////////////////////////

#include "stdio.h"
int n;
int a[100];
void nhap()
{
    do
    {
        printf("Nhap so luong phan tu trong mang :");
        scanf("%d",&n);
    } while (n<1 || n>100);
    for(int i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}

void xuat(){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
}
void tg()
{
    int tang;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if (a[i] > a[j])
            {
                tang = a[i];
                a[i] = a[j];
                a[j] = tang;
            }
            
        }
        
    }
    
}

void gm()
{
    int giam;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if (a[i] < a[j])
            {
                giam = a[i];
                a[i] = a[j];
                a[j] = giam;
            }
            
        }
        
    }
    
}

int main()
{
    //////mang ban dau
    nhap();
    printf("mang vua nhap la:");
    xuat();

    //////tang dan
    tg();
    printf("\nMang da sap xep tang dan la: ");
    xuat();

    /////giam dan
    gm();
    printf("\nMang da sap xep giam dan la : ");
    xuat();
    
    return 0;
}
