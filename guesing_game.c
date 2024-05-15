#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
        srand(time(NULL));
        printf("\nIT'S A NUMBER GUESSING GAME(0-1000)\n");;
        int n;
        int m=rand()%1000;
        for(int i=0;i<10;i++)
        {
                printf("\nENTER YOUR NUMBER:\n");
                scanf("%d", &n);
                if(n==m)
                {
                        printf("\nYOU GUESSED THE NUMBER, YOU WON\n");
                        break;
                }
                else if(n>m)
                {
                        printf("\nGUESS SOMETHING SMALLER\n");
                }
                else if(n<m)
                {
                        printf("\nGUESS SOMETHING BIGGER\n");
                }
                else if(n-m<=20 && n-m>0)
                {
                        printf("YOUR ARE CLOSE");
                }
                 }
        if(n!=m){
                printf("YOU LOST");
        }
        printf("\nTHE NUMBER WAS %d\n", m);
}
   