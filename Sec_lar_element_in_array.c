/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int  second_lar(int a[], int size);

int main()
{   int a[] = {5,6,2,8,1,3,7,9};
    int size  = sizeof(a)/sizeof(a[0]);
    
    int max = second_lar(a,size);
    printf("%d",max);
    
    printf("Hello World");

    return 0;
}


int  second_lar(int a[], int size)
{
    int max =0;
    
    int sec_max = 0;
    
    for(int i=0; i<size ;i++)
    {
        if( a[i] > max )
        {  
            
            sec_max = max;
            
            max = a[i];
            
        }
        
        
        
        
    }
    
}
