#include <stdio.h>
//As the scanf function relies on user input its comment presupposes 0 is typed twice, no verification because it's not convenient
int main()
{
    int zero=0;
    int dvn=0, dvs=0;
		int resu=zero/zero;
		printf("%i\n",resu); //results 1, no gcc warnings
		int resu2=0/0;
		printf("%i\n",resu2);//results "floating point exception"
    int resu3=0/zero;
    printf("%i\n",resu3);//results 0 if you comment the lines above, otherwise no output with gcc warning "division by zero"
    int resu4=zero/0;
    printf("%i",resu4);//results floating point exception if you comment the lines above, otherwise no output, but keeps warning "division by zero"
    float zerof=0.0;
    float df=0.0/0.0;
    printf("%f\n",df);//results -not a number!
    float df2=0.0/zerof;
    printf("%f\n",df2);//results -nan!
    float df3=zerof/zerof;
    printf("%f\n",df3);//results -nan!
    float df4=zerof/0.0;
    printf("%f\n",df4);//results -nan!
    printf("Enter number to be divided. ");
    scanf("%i",&dvn);
    printf("Enter number to divide by. ");
    scanf("%i",&dvs);
    printf("Result is %i",(dvn/dvs));//returns floating point exception if you comment the lines before the function, otherwise no output as the execution can't proceed
}
