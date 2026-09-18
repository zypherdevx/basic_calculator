#include<stdio.h>
#include<math.h>
double division(double, double);
double modulus(int, int);
void print_menu();
int main(){
    int choice;
    double first, second, result;
    while (1)
    {
    print_menu();
    scanf("%d",& choice);
    if (choice==7)
    {
        break;
    }
    if (choice <1 || choice>7)
    {
        fprintf(stderr,"Invalid Menu Choice");
        continue;
    }
    printf("ENTER THE FIRST NUMBER:\n");
    scanf("%lf",& first);
    printf("ENTER THE SECOND NUMBER:\n");
    scanf("%lf",& second);

    switch (choice)
        {
        case 1: //ADD
            result = first+second;
            break;
        case 2: //SUBTRACT
            result = first-second;
            break;
        case 3: //MULTIPLY
            result = first*second;
            break;
        case 4: //DIVIDE
            result = division(first, second);
            break;
        case 5: //MODULUS
            result =modulus(first, second);
            break;
        case 6: //POWER
            result = pow(first,second);
            break;
        
        
        }if (!isnan(result))
        {
            
        
    printf("The result of the operation is:%.2f\n",result);
    } 
    }

return 0;
}
double division(double a, double b) {
    if (b==0)
    {
        fprintf(stderr, "Invalid argument for Division\n");
        return NAN;
    }
    else{
        return a/b;
    }


}
double modulus(int c, int d) {
    if (d==0)
    {
        fprintf(stderr, "Invalid argument for Modulus\n");
        return NAN;
    }
    else{
        return c%d;
    }   } 
void print_menu(){
    printf("\n--------------------------------\n");
    printf("\nWELCOME TO SIMPLE CALCULATOR\n\n");
    printf("Choose one of the following operations:\n");
    printf("1.ADD\n");
    printf("2.SUBTRACT\n");
    printf("3.MULTIPLY\n");
    printf("4.DIVIDE\n");
    printf("5.MODULUS\n");
    printf("6.POWER\n");
    printf("7.EXIT\n");
    printf("NOW ENTER YOUR CHOICE:");
}