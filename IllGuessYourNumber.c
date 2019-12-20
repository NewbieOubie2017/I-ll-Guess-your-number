#include<stdio.h>
//#include<conio.h>  for dos only
/*
./IllGuessYourNumber 

It is working but typing Wrong symbol after making the adjustment? also counting the wrong symbol line

Question 1 : Is your number = , < or > than 50000 ? >
Question 2 : Is your number = , < or > than 75000 ? Wrong symbol 
Question 3 : Is your number = , < or > than 75000 ? <
Question 4 : Is your number = , < or > than 62500 ? Wrong symbol 
Question 5 : Is your number = , < or > than 62500 ? =


Great we found your number in just 5 steps 
Your number is 62500 



*/

int main()
{
    printf("Choose a number between 1 to 100000 in your mind and write it on the page \n");
    printf("Me Your Computer will guess your number by asking less than 20 questions\n\n");

//was     unsigned long long int arr[100000],i,MID,LB,UB;
    int arr[100000],i,MID,LB,UB;
    char symbol;
    int count =0;
    for(i=1;i<=100000;i++)
    {
        arr[i]=i;
    }
    LB=1;
    UB=100000;

    while(LB<=UB)
    {
    count++;
        MID=(LB+UB)/2;
        printf("Question %d : Is your number = , < or > than %d ? ",count,arr[MID]);
// was scanf("%c",&symbol); and this made both the wrong symbol message to appear every time.
        scanf(" %c",&symbol);
        fflush(stdin);
        if(symbol=='=')
        {
            printf("\n\nGreat we found your number in just %d steps \n",count);
// was           printf("Your number is %llu \n\n\n\n",arr[MID]);
            printf("Your number is %u \n\n\n\n",arr[MID]);

            break;
        }  else if(symbol=='<')
        {
            UB=MID-1;
        }  else if(symbol=='>')
        {
            LB=MID+1;
        }  else 
        {
                printf("Wrong symbol \n");
                count--;
        }
    }

//   was getch();
//      char getch();
//      return 0;
}
