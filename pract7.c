#include<stdio.h>

void main()

{ 
 
 int n,low,high,i,f=0,a[20],mid,search;
 
 printf("\n enter the number of element");
 
 scanf("%d",&n);
  

printf("\n enter the number in ascending order:");
  
for(i=0;i<n;i++)
 
scanf("%d",&a[i]);
  

printf("\n enter the search element");
  
scanf("%d",&search);
  

low=0;
  high=n;
  
while(low<=high)
  
  {
    
       mid=(low+high)/2;
    
         if(search<a[mid])

      
            high=mid-1;

    
          else if(search>a[mid])

     
            low=mid+1;

    
          else
    
           {
      f=1;
   
              printf("\nposition is %d",mid);
   
              break;
   
            }

   
  }
    

  if(f==0)
    
   printf("\nvalue is not present");
  


}

