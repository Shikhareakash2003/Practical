#include<stdio.h>
int a[100],size,i,op,n,pos;

void insertbeg()
{printf("\nenter the element you want to insert: ");
 scanf("%d",&n);
 for(i=size;i>0;i--)
  a[i]=a[i-1];
  a[0]=n;
  size++;
 printf("\narray is: ");
 for(i=0;i<size;i++)
  printf("\n%d",a[i]);
}

void insertend()
{printf("\nenter the element you want to insert: ");
 scanf("%d",&n);
 a[size]=n;
 size++;
 printf("\narray is: ");
 for(i=0;i<size;i++)
  printf("\n%d",a[i]);
}

void insertany()
{printf("\nenter the position you want to insert: ");
 scanf("%d",&pos);
 printf("\nenter the element you want to insert: ");
 scanf("%d",&n);
 size++;
 for(i=size;i>pos-1;i--)
  a[i]=a[i-1];
  a[pos-1]=n;
 printf("\narray is: ");
 for(i=0;i<size;i++)
  printf("\n%d",a[i]);
}

void deletebeg()
{for(i=0;i<size;i++)
 a[i]=a[i+1];
 size--;
 printf("\narray is: ");
 for(i=0;i<size;i++)
  printf("\n%d",a[i]);
}

void deleteend()
{size--;
 printf("\narray is: ");
 for(i=0;i<size;i++)
  printf("\n%d",a[i]);
}

void deleteany()
{printf("\nenter the position you want to delete: ");
 scanf("%d",&pos);
 size--;
 for(i=pos-1;i<size;i++)
  a[i]=a[i+1];
 printf("\narray is: ");
 for(i=0;i<size;i++)
  printf("\n%d",a[i]);
}

void display()
{printf("\narray is: ");
 for(i=0;i<size;i++)
  printf("\n%d",a[i]);
}

int main()
{
 printf("\nenter size of array: ");
 scanf("%d",&size);
 printf("\nenter array elements: ");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 printf("\nOPTIONS\n1.insertbeg\n2.insertend\n3.insertany\n4.deletebeg\n5.deleteend\n6.deleteany\n7.display\n8.exit\n");

do
{printf("\nenter your chooice: ");
 scanf("%d",&op);
 switch(op)
  {case 1:
    insertbeg();
    break;
   case 2:
    insertend();
    break;
   case 3:
    insertany();
    break;
   case 4:
    deletebeg();
    break;
   case 5:
    deleteend();
    break;
   case 6:
    deleteany();
    break;
   case 7:
    display();
    break;
   case 8:
    printf("EXIT");
    break;

   default:
    printf("invalid input");
    break;
  }
 }while(op!=8);

return 0;
}