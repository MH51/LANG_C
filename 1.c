#include <stdio.h>

int main()

{
    float n=100;
    int p;
    printf("Enter a number: ");
    scanf("%d",&p);
    for(int i=1;i<=p;i++){
        printf("%.4f ",n);
        n=n/2;
    }

    return 0;
}
