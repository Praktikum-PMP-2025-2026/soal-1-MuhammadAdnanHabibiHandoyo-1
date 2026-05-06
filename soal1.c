#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Antrian
{
    char* id;
    int durasi;
}Antrian;

int main(){
    Antrian *arr = NULL;
    int N;
    int temp=0;
    int durasi;
    scanf("%d", &N);

    arr = (Antrian* )malloc(N*sizeof(Antrian));

    for(int i=0; i<N; i++){
        arr[i].id=(char* )malloc(100*sizeof(char));
        getchar();
        fgets(arr[i].id, 100, stdin);
        arr[i].id[strcspn(arr[i].id, "\n")]=0;

        scanf("%d", &durasi);
        arr[i].durasi = durasi;
        temp+= durasi;
    }
    printf("ORDER ");
    for(int i=0; i<N; i++){
        printf("%s", arr[i].id);
        if(i<N-1){
            printf(" ");
        }
    }
    printf("\n");

    printf("WAIT %d", temp);

    for(int i=0;i<N;i++){
        free(arr[i].id);
    }
    free(arr);

    return 0;
}
