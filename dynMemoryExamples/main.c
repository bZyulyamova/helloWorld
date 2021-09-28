#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
    int i;
    int *arr;
    scanf("%d",&n);

    printf("%d\n",n);

    arr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]/10 > 0 && arr[i]/10<10) sum+=arr[i];
    }

    printf("%d",sum);

//}

    printf("Hello world!\n");
    return 0;
}
