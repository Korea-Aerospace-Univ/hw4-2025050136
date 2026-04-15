#include <stdio.h>
int main() 
{
    int N;
    char ch;
    int count=0;
    
    int let_cnt=0, let_max=0;
    int num_cnt=0, num_max=0;
    
    scanf("%d",&N);
    
    for (int i = 0; i < N; i++) {
        scanf(" %c", &ch);
        
        if (ch >= 'a' && ch <= 'z') {
            let_cnt++;
            if (let_cnt > let_max)
                let_max = let_cnt;
        } 
        else {
            let_cnt = 0;
        }

        
        if (ch >= '0' && ch <= '9') {
            num_cnt++;
            if (num_cnt > num_max) {
                num_max = num_cnt;
            }
        } 
        else {
            num_cnt = 0;
        }
    }

    printf("%d\n", let_max);
    printf("%d\n", num_max);

    return 0;
}
   
