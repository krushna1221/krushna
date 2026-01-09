#include<stdio.h>

void main()
{
	 int d,r,q;
	int n,z,b,b1,b2,d1,o,o1,h,i,j,y1[10],y2[10],y3[10],y4[10],bno[10],ono[10],temp;
	char hexno[10];
	                 // Decimal to Binary
                          printf("\n Decimal to Binary");
                          printf("\nEnter any decimal number=");
			  scanf("%d",&d);
			
			  i=1;
			  while(d!=0)
			  {
				bno[i]= d % 2;
			  i++;
			  d = d / 2;
			  }
			 printf("\nEquivalent binary value is:");
			 for(j = i-1 ;j> 0;j--)
			 printf("%d",bno[j]);
			
                          // Decimal to Octal
                          printf("\n Decimal to Octal");
                          printf("\n Enter any decimal number=");
			  scanf("%d",&d);
			
			  i=1;
			  while(d!=0)
			  {
				ono[i]= d % 8;
			  i++;
			  d = d / 8;
			  }
			 printf("\nEquivalent Octal value is:");
			 for(j = i-1 ;j> 0;j--)
			 printf("%d",ono[j]);


                          // Decimal to Hexadecimal
                          printf("\n Decimal to Hexadecimal");
                          printf("\n Enter any decimal number=");
			  scanf("%d",&d);
			  i=1;
			  while(d!=0)
			  {
					 temp=d%16;
					// if(temp<10)
					 hexno[i]=temp;             //+48;
					 //else
					// hexno[i]=temp+55;
					 i++;
					 d = d / 16;
				}

	              printf("\nEquivalent hexadecimal value is:-");
	              for(j = i-1; j>=0;j--)
                      {
		        if(hexno[j]>9)
                              printf("%c",hexno[j]+55);
                         else
                              printf("%d",hexno[j]);
                      }

               //Binary to Decimal 
                printf("\n Binary to Decimal"); 
               printf("\n Enter the Binary number=\n");
		scanf("%d",&b);
		z=1,d=0;
		while(b>0)
		{
		  r=b%10;
		  if(r>1)
		  {
		   printf("Invalid Entry");
		   break;
		  }
	       d=d+(r*z);
	       z=z*2;
	       b=b/10;
	        }
               printf("\nDecimal equivalent = %d",d);



            //Binary to Octal  
               printf("\n Binary to Octal"); 
               printf("\n Enter the Binary number=\n");
		scanf("%d",&b);
		z=1,d=0;
		while(b>0)
		{
		  r=b%10;
		  if(r>1)
		  {
		   printf("Invalid Entry");
		   break;
		  }
	             d=d+(r*z);
	             z=z*2;
	             b=b/10;
	        }
               

               while(d>0)
	       {
		  ono[j]=d%8;
		  j++;
		  d=d/8;
	       }
	       printf("\nOctal equivalent = ");
	       for(i=j-1;i>=0;i--)
	       printf("%d",ono[i]);
 

           //Binary to Hexadecimal   
              printf("\n Binary to Hexadecimal"); 
               printf("\n Enter the Binary number=\n");
		scanf("%d",&b);
		z=1,d=0;
		while(b>0)
		{
		  r=b%10;
		  if(r>1)
		  {
		   printf("Invalid Entry");
		   break;
		  }
	             d=d+(r*z);
	             z=z*2;
	             b=b/10;
	        }
               i=0;
               while(d>0)
		  {
		   hexno[i]=d%16;
		    i++;
                   d=d/16;
                   
		  }
		   
    printf("Equivalent HexaDecimal value: ");
    for(j=i-1;j>=0;j--)
   {
        if(hexno[j]>9)
            printf("%c",hexno[j]+55);
        else
            printf("%d",hexno[j]);
    }

              
}
