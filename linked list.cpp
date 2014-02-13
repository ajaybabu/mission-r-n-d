#include<stdio.h>
#include<stdlib.h>
struct num
{
    int data;
    num *link;
}*head;
void add(int data)
{
     num *value=(num *)malloc(sizeof(num));
     value->data=data;
     if(head==NULL)
    {
        value->link=NULL;
        head=value;
    }
    else
    {
        value->link=head;
        head=value;
    }
}
void print()
{
    num *start=head;
    while(start!=NULL)
    {
        printf("%d->",start->data);
        start=start->link;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    do
    {
        add(n%10);
        n/=10;
    }while(n!=0);
    print();
    return 0;
}
