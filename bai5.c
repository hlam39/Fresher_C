//tinh tien cuoc taxi///
////////////////////////

#include "stdio.h"
int n;
void km(){
    printf("\nNhap vao so km : ");
    do
    {
        scanf("%d",&n);
        printf("so km : %d",n);
    } while (n<0);
    
}


int main(int argc, char const *argv[])
{
    int m1=5000,m2=4000,m3=3000;
    int tong;
    km();
    if (n<=1)
    {
        printf("\nso tien phai tra la : %d", m1);
    }
    else if (n>1 && n<31)
    {
        
        tong = m1 + m2*(n-1);  
        printf("\nso tien phai tra la : %d", tong); 
    }
    else if (n>30)
    {
      tong = m1 + m2*29 + m3*(n-30);
       printf("\nso tien phai tra la : %d", tong); 
    }
    else return 0;
    
}

