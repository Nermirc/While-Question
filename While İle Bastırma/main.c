#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Lutfen bir deger giriniz.");
    scanf("%d",&a);

    while(a!=0){
        printf("%4d",a);
        a=a-1;
    }
}
