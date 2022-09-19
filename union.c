#include<stdio.h>

int main()
{
    int a[10],b[10],c[20],n1,n2,i,j,k=0;
    printf("the number of elements in array A");
    scanf("%d",&n1);
    printf("enter the elements in array A");
    for(i=0;i<n1;i++)
    {
    scanf("%d",&a[i]);
    }
//ARRAY b
    printf("the number of elements in array B");
    scanf("%d",&n2);
    printf("enter the elements in array B");
    for(j=0;j<n2;j++)
    {
    scanf("%d",&b[j]);
    }
    
    //ARRAY C
    
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if (c[j]==a[i])
            break;
            
        }
            if(j=k)
            {
                c[k]=a[i];
                k++;
            
            }
    }    
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if (c[j]==b[i])
            break;
            
        }
            if(j=k)
            {
                c[k]=b[i];
                k++;
            
            }
    }    
    printf("the union of A and B is");
    for(i = 0; i < k; i++){
        printf("%d", c[i]);
    }

    return 0;
}
