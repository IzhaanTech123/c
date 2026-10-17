#include<stdio.h>
void accept()
void display()
void linerasearch()
int A[20],i,n;
void main()
{
    void accept();
    void display();
    void linearsearch();
}
void accept()
{
    printf("\n enter the number limit:");
    scanf("%d",&n);
    printf("\n neter the number array elemment");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
}

void dislay()
{
    printf("\n enter the elmment");
    for(i=0;i<n;i++)
    {
        printf("\n %d",A[i]);
    }
}

void linearsearch()
{
    int x;
    printf("\nenter the number if whant :")
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        printf("\n the %d is found at position",x,i++);
        break;
    }
}
if(i==b)
    printf("\n %d is not found",x);
}
