#include <stdio.h>

int main() {
    int i,a[10];
    for (i=0;i<=10;i++)
    {
        printf("Enter elements of array :-  ");
        scanf("%d",&a[i]);

    }
    for(i=0;i<=10;i++)
    {
        printf("The array is %d\n",a[i]);
    }
    return 0;
}