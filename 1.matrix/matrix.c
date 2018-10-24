#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Matrix {
    int numberOfrows;
    int numberOfColumns;
    int **data;
};


int getInt(int x){
    char input[20] = "";
    int length, i;
    scanf("%s", input);
    printf("%s\n",input );
    length = strlen(input);
    for (i = 0; i < length; ++i) {
        if(!atoi(input)) {
            printf("WRONG INPUT, INSTEAD OF THAT, %d IS INSERTED\n", x);
            return x;
        }
    }
    return atoi(input);
}
void allocateMatrix(struct Matrix * matrix) {
    int i = 0;
    matrix->data = malloc(matrix->numberOfrows * sizeof(int*));
    for (i = 0; i < matrix->numberOfrows; i++) {
        matrix->data[i] = malloc(matrix->numberOfColumns * sizeof(int));
    }
}

void matrixInit(struct Matrix * matrix){
    puts("Write the number of rows");
    matrix->numberOfrows = getInt(1);
    puts("Write the number of columns");
    matrix->numberOfColumns = getInt(1);
    puts("write elements to the first matrix");
}


void printMatrix(struct Matrix * matrix){
    int i = 0;
    int j = 0;
    puts("MATRIX:");
    for (i = 0;i < matrix->numberOfrows;i++){
        for (j = 0; j < matrix->numberOfColumns; j++) {
            printf("%d ", matrix->data[i][j]);
        }
        puts("\n");
    }
}


void insertData(struct Matrix * matrix) {
    int i = 0;
    int j = 0;
    for (i = 0;i < matrix->numberOfrows;i++){
        for (j = 0; j < matrix->numberOfColumns; j++) {
            matrix->data[i][j] = getInt(0);
        }
    }
}
struct Matrix multiply(struct Matrix *m1, struct Matrix *m2){
    struct Matrix solution;
    solution.numberOfrows = m1->numberOfrows;
    solution.numberOfColumns = m2->numberOfColumns;
    allocateMatrix(&solution);
    int i = 0;
    int j = 0;
    int k = 0;
    int sum = 0;
    for (i = 0;i < solution.numberOfrows;i++){
        for (j = 0; j < solution.numberOfColumns; j++) {
            sum = 0;
            for (k = 0; k < m1->numberOfColumns; k++) {
                sum = sum + m1->data[i][k]* m2->data[k][j];
            }
            solution.data[i][j] = sum;
        }
    }
    return solution;
}


int
main() {
    struct Matrix m1;
    struct Matrix m2;
    puts("FIRST MATRIX");
    matrixInit(&m1);
    allocateMatrix(&m1);
    insertData(&m1);
    printMatrix(&m1);
    puts("SECOND MATRIX");
    matrixInit(&m2);
    allocateMatrix(&m2);
    insertData(&m2);
    printMatrix(&m2);

    if (m1.numberOfColumns == m2.numberOfrows){
        struct Matrix m3 = multiply(&m1, &m2);
        printMatrix(&m3);
    } else
    {
        puts("MULTIPLICATION IS IMPOSSIBLE");
    }

    return 0;

}