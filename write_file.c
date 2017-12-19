#include <stdio.h>

int main(void)
{
        // 1. ファイルポインタの宣言
        FILE *file;

        int input;

        // 2. ファイルのオープン
        if ((file = fopen("output.txt", "a")) == NULL) {
                // 2. エラー処理
                printf("ファイルが開けませんでした。\n");
        } else {
                printf("ファイルに書き込む数字を入力\n--> ");
                scanf("%d", &input);

                // 3. ファイルの書き込み
                fprintf(file, "%d\n", input);

                // 4. ファイルのクローズ
                fclose(file);
        }
}
