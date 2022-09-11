#include <stdio.h>
#include <time.h>

int main() {
    
    int t = (int)time(nullptr);
    int max = 9999;   
    
    int answer = t % max;

    
    int rank = 0;

    
    int input = 0;

    while (true) {
        printf("4桁の数値を入れて下さい。\n");
        scanf_s("%d", &input);
        
        rank++;

        
        int sub = input - answer;
        
        bool same = answer == input;

        bool lol = sub > -5 && sub < 5 && 0 != sub;

        
        if (lol) {
            printf("惜しい！\n");
            rank++;
        }
        
        if (answer < max / 2) { 
            if (rank < 2) {
                printf("ヒント：%dより下の値です\n", max / 2);
            }
        }
        else if (answer > max / 2) { 
            if (rank < 2) {
                printf("ヒント：%dより上の値です\n", max / 2);
            }
        }
        
        if (answer < input && rank > 3) {
            printf("大きすぎ。%dの差です\n", sub);
        }
        else if (answer > input && rank > 3) {
            printf("小さすぎ。%dの差です\n", -sub);
        }
        if (same) {
            printf("Hit\n");
            printf("正解は [%d]!!　[%d]回で正解しました！\n", answer, rank);
            if (rank == 0) {
                printf("RANK:超高校級の直感！！\n");
            }
            else if (rank < 3 && rank != 0) {
                printf("RANK:なかなかのおてまえ\n");
            }
            else {
                printf("RANK:次回に期待！\n");
            }

            break;
        }
    }
    return 0;
}

