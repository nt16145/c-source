#include <stdio.h>

int main(void)
{
        // 1: ファイルポインタの宣言
        FILE *file; 
        int a, b;

        // 2. ファイルのオープン
        if ((file = fopen("data.txt", "r")) == NULL) {
                // 2. エラー処理
                printf("ファイルを開けません。\n");     
        } else {
                // 3. ファイルの読み込み
                while(fscanf(file, "%d, %d", &a, &b) != EOF) {
                        printf("%d + %d = %d\n", a, b, a + b);
                }
                // 4. ファイルのクローズ
                fclose(file);
        }

        return 0;
}
