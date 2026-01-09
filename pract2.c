#include<stdio.h>


void main()
  
{

    int a[5],b[5],c[5],fl=0,ch;
    
    char ans;
    
    int i,j,n,m,k,x;

    printf(" Enter limit of set A= ");

    scanf("%d",&n);
    
    printf(" Enter value of set A=");

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf(" Set A:{");

    for(i=0;i<n;i++)
    
    printf("%d,",a[i]);
     
    printf("}");
    
    printf(" Enter limit of setB= ");

    scanf("%d",&m);

    printf(" Enter value of set B=");

    for(j=0;j<m;j++)
    scanf("%d",&b[j]);

    
printf(" Set B:{");

    for(j=0;j<m;j++)

    printf("%d,",b[j]);
    
    printf("}");
     

    do
      {
        
       printf("\n1.Intersection\n2.Union\n3.A-B\n4.B-A\n5.Symmetric Difference\n6.Exit\nEnter ur choice=");

       scanf("%d",&ch);

      switch(ch)
 {

         case 1:   k=0;
               for(i=0;i<n;i++)
             {
                  for(j=0;j<m;j++)
                   {
                    if(a[i]==b[j])
                     {
                      c[k]=a[i];
                      k++;
                     }
                    }
                 }
              printf("\nIntersection of A nd B:{");
               for(i=0;i<k;i++)
               {
                 printf("    %d,",c[i]);
               }

               printf("}");

               break;


         case 2:  k=0;
            x=0;
            for(i=0;i<n;i++)
             {
         c[x]=a[i];
         x++;
             }
             k=x;
            for(i=0;i<n;i++)
             {
        fl=0;
        for(j=0;j<m;j++)
         {
         if(a[j]==b[i])
            {
             fl=0;
             break;
            }
         else
             fl=1;
         }
        if(fl==1)
         {
          c[k]=b[i];
          k++;
         }
             }
             printf("\n Union of A nd B:{");
             for(i=0;i<k;i++)
              {
             printf(" %d,",c[i]);
               }
                printf("}");
             break;
      case 3: k=0;
          for(i=0;i<n;i++)
         {
          fl=0;
         for(j=0;j<m;j++)
            {
          if(a[i]==b[j])
          {
            fl=0;
            break;
        }
          else
            {
             fl=1;
            }
          }
          if(fl==1)
            {
             c[k]=a[i];
             k++;
            }
         }
          printf("\nDifference is A-B:{");
          for(i=0;i<k;i++)
            {
             printf("    %d,",c[i]);
            }
          printf("}");
          break;
      case 4:k=0;
      for(i=0;i<n;i++)
     {
      fl=0;
      for(j=0;j<m;j++)
        {
            if(b[i]==a[j])
            {
         fl=0;
        break;
        }
          else
             fl=1;
          }
          if(fl==1)
            {
             c[k]=b[i];
             k++;
            }
         }
         printf("\n Difference is B-A:{");
         for(i=0;i<k;i++)
            {
             printf("    %d,",c[i]);
            }
          printf("}");
         break;

    case 5:k=0;
      for(i=0;i<n;i++)
        {
            fl=0;
          for(j=0;j<m;j++)
             {
             if(a[i]==b[j])
         {
            fl=0;
            break;
        }
          else
            {
             fl=1;
            }
          }
          if(fl==1)
            {
             c[k]=a[i];
             k++;
            }
         }
     for(i=0;i<m;i++)
     {
      fl=0;
      for(j=0;j<n;j++)
        {
         if(b[i]==a[j])
          {
             fl=0;
             break;
          }
          else
            fl=1;
         }
          if(fl==1)
            {
             c[k]=b[i];
             k++;
            }
         }
         printf("\n Symmetric Difference:{");
         for(i=0;i<k;i++)
            {
             printf("    %d,",c[i]);
            }
          printf("}");
         break;
      case 6:
      break;
     }

     }
    while(ch!=6);

 }
 
/*
OUTPUT
 Enter limit of set A= 4
 Enter value of set A=1
2
3
4
 Set A:{1,2,3,4,} Enter limit of setB= 4
 Enter value of set B=5
6
7
8
 Set B:{5,6,7,8,}
1.Intersection
2.Union
3.A-B
4.B-A
5.Symmetric Difference
6.Exit
Enter ur choice=1

Intersection of A nd B:{}
1.Intersection
2.Union
3.A-B
4.B-A
5.Symmetric Difference
6.Exit
Enter ur choice=2

 Union of A nd B:{ 1, 2, 3, 4, 5, 6, 7, 8,}
1.Intersection
2.Union
3.A-B
4.B-A
5.Symmetric Difference
6.Exit
Enter ur choice=3

Difference is A-B:{    1,    2,    3,    4,}
1.Intersection
2.Union
3.A-B
4.B-A
5.Symmetric Difference
6.Exit
Enter ur choice=4

 Difference is B-A:{    5,    6,    7,    8,}
1.Intersection
2.Union
3.A-B
4.B-A
5.Symmetric Difference
6.Exit
Enter ur choice=5

 Symmetric Difference:{    1,    2,    3,    4,    5,    6,    7,    8,}
1.Intersection
2.Union
3.A-B
4.B-A
5.Symmetric Difference
6.Exit
Enter ur choice=6

--------------------------------
Process exited after 161.9 seconds with return value 6
Press any key to continue . . .*/