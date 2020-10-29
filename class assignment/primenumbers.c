#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  a, b ,i , j ,flag=0 ;
    printf("Enter lower limit");
    scanf("%d",&a);
    printf("\nEnter upper  limit");
    scanf("%d",&b);
    if(a>b)
     {
     a = a+ b; //  5  3   
     b = a - b;
     a = a - b;
     }
  
  printf("\n The Prime numbers between %d  and %d are  : ", a, b ) ;

   
   
       for(i= a ;i<=b ;i++)
        {
         
          for(j = 2 ;j<=i/2 ;j++ )
           { 
              if(i%j ==0)
              {
                  flag = 1 ; break ;
              }
           }
           if( flag == 0)
             printf("%d  \t", i);
            else 
            flag =0 ;

        } 
   

    getchar();
}