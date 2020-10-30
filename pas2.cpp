#include <stdio.h>
int main() {
   int rows, coef = 1, space, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   int j,coef=1;
   for(int i=0;i<rows;i++)
   {
       for(int p=0;p<2*i-1;p++)
       {
           cout<<" "<<endl;
       }
       for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            coef = 1;
         else
            coef = coef * (i - j + 1) / j;
         printf("%4d", coef);
      }
      printf("\n");
   }
   }