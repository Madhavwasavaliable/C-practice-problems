#include<stdio.h>
// comment
int main(){
    int integer, n=0, unit = 0, first=0, second=0, third=0, forth=0, a=1, b=0, rem=0, digit=0;;
    char roman[15];
    scanf("%d",&integer);//1123

    n = integer; 
    while (1)
    {
        if(n <= 0){
            break;
        }
        if (count==1)
        {
            first=n%10;
        }
    else if (unit ==3)
    {
        integer = integer - first*100;
    }
    else if (unit==2)
    {
        integer = integer - first*10;
    }
        if (count==4)
        {
            if(b==0){
                break;
            }
            if(digit<=a){
                break;
            }
            first = digit%10;
            digit/=10;
            //printf("%d\n", first);   
        }
        
        count++;
        unit++;
            
    }
        if (j == 3){
            for (int i = 1; i <= first; i++)
            {
                printf("C");
            }
        
        }
        if (j == 2){
            for (int i = 1; i <= first; i++)
            {
                printf("X");
            }
        
        }
        if (j == 1){
            for (int i = 1; i <= first; i++)
            {
                printf("I");
            }
        
        }   
    }

    if (first == 4)
    {
        if (j == 3){
            for (int i = 1; i <= first; i++)
            {
                printf("CD");
            }
        
        }
        if (j == 2){
            for (int i = 1; i <= first; i++)
            {
                printf("XL");
            }
        
        }
        if (j == 1){
            for (int i = 1; i <= first; i++)
            {
                printf("IV");
            }
        
        }       
    }

    if (first == 5)
    {
        if (j == 3){
                printf("D");
            }
        if (j == 2){
                printf("L");
        }
        if (j == 1){
                printf("V");
        }
    }

    if (first > 5)
    {
        if (j == 3){
            printf("D");
            for (int i = 1; i <= first; i++)
            {
                printf("C");
            }
        
        }
        if (j == 2){
            printf("L");
            for (int i = 1; i <= first; i++)
            {
                printf("X");
            }
        
        }
        if (j == 1){
            printf("V");
            for (int i = 1; i <= first; i++)
            {
                printf("I");
            }
        
        }

    }
      b++;
    }
}