#include<stdio.h>
// comment

int main(){
    int integer, n=0, unit = 0, first=0, second=0, third=0, forth=0, count=1, num=1, digit_place=0;
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
            forth=n%10;
        }
        if (count==2)
        {
            third=n%10;
        }
        if (count==3)
        {
            second=n%10;
        }
        if (count==4)
        {
            first=n%10;
        }

        count++;
        unit++;
        n /= 10;
            
    }
    printf("%d \n%d \n%d \n%d", first, second, third, forth);
    printf("%d", unit);

    for (int i = unit; i > 0; i--)
    {
        switch (num)
        {
        case 1: digit_place = first;
            break;
        case 2: digit_place = second;
            break;
        case 3: digit_place = third;
            break;
        case 4: digit_place = forth;
            break;
        default:
            break;
        }
        num++;
        
        if (digit_place < 4)
        {
            switch (i)
            {
            case 1: 
                    for (int j = 0; j < digit_place; j++)
                    {
                        printf("I");
                    }  
                break;
            case 2: 
                    for (int j = 0; j < digit_place; j++)
                    {
                        printf("X");
                    }  
                break;
            case 3: 
                    for (int j = 0; j < digit_place; j++)
                    {
                        printf("C");
                    }  
                break;
            case 4: 
                    for (int j = 0; j < digit_place; j++)
                    {
                        printf("M");
                    }  
                break;
            
            default:
                break;
            }
        }
            else if (digit_place == 4)
            {
                switch (i)
                {
                case 1:
                        for (int j = 0; j < digit_place; j++)
                        {
                            printf("IV");
                        }
                    break;
                case 2:
                        for (int j = 0; j < digit_place; j++)
                        {
                            printf("XL");                
                        }
                    break;
                case 3:
                        for (int j = 0; j < digit_place; j++)
                        {
                            printf("CD");
                        }
                    break;
                default:
                    break;
                }
            }
                else if (digit_place == 5)
                {
                    switch (i)
                    {
                    case 1: printf("V");
                        break;
                    case 2: printf("L");
                        break;
                    case 3: printf("D");
                        break;
                    default:
                        break;
                    }
                }
                    else if (digit_place > 5)
                    {
                        switch (i)
                        {
                        case 1:
                                printf("V");
                                for (int j = 0; j < digit_place - 5; j++)
                                {
                                    printf("I");
                                }
                            break;
                        case 2:
                                printf("L");
                                for (int j = 0; j < digit_place - 5; j++)
                                {
                                    printf("X");
                                }
                            break;
                        case 3:
                                printf("D");
                                for (int j = 0; j < digit_place - 5; j++)
                                {
                                    printf("C");
                                }
                            break;
                        default:
                            break;
                        }
                    }    
    }    
}