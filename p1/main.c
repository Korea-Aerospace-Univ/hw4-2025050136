#include <stdio.h> 
int main()
{
   int answer,guess;
   int count=0;
   
   scanf("%d", &answer);
   
   do {
       scanf("%d", &guess);
       count++;
       
       if (guess>answer) {
           printf("%d>?\n", guess);
       }
       else if (guess<answer) {
           printf("%d<?\n", guess);
       }
       else {
           printf("%d==?\n", guess);
           printf("%d\n", guess);
       }
       
    } while (guess != answer);
    
    printf("%d\n", count);

    return 0;
}
