#include<stdio.h>

#define ROW 4
#define COL 4

void printArr(int rows, int cols, int arr[rows][cols]);
void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val);
void setCol(int rows, int cols, int arr[rows][cols], int col_num, int val);

int total(int rows, int cols, const int arr[rows][cols]);

/*

*/
int totalPerim(int rows, int cols, const int arr[rows][cols]);
int totaldiag(int rows, int cols, const int arr[rows][cols]);

int main(void){
    //Create and initialize a 2d array
    int  arr[ROW][COL] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //Access an element
    printf("%d\n", arr[0][1]+ arr[1][0]);

    arr[1][1]=10;

    printArr(ROW, COL, arr);

    //sert second row with 99's
    for(int j=0;j<COL;j++){
        arr[1][j]=99;
    }
    printArr(ROW, COL, arr);

    setRow(ROW, COL, arr, 1, 1);
    setCol(ROW, COL, arr, 1, 1);

    printf("The sum is %d\n", total(ROW, COL, arr));
    printf("The sumPerim is %d\n", totalPerim(ROW, COL, arr));
    printf("The sumdiag is %d\n", totaldiag(ROW, COL, arr));

    return 0;
}

void printArr(int rows, int cols, int arr[rows][cols]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%4d", arr[i][j]); //%4d prints 4 spaces after the printed values
        }
        puts("");
    }
    puts("");
}

void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val){
    for(int j=0;j<cols;j++){
        arr[row_num][j]=val;
    }
    printArr(rows, cols, arr);
}
void setCol(int rows, int cols, int arr[rows][cols], int col_num, int val){
    for(int i=0;i<rows;i++){
        arr[i][col_num]=val;
    }
    printArr(rows, cols, arr);
}


int total(int rows, int cols, const int arr[rows][cols]){
    int sum=0;
    for(int i=0; i<rows;i++){
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}

int totalPerim(int rows, int cols, const int arr[rows][cols]){
    int sum=0;
    for(int i=0; i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==0||i==rows-1){
                sum+=arr[i][j];
            }else if(j == 0 || j == cols - 1) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int totaldiag(int rows, int cols, const int arr[rows][cols]){
    int sum=0;

    int i=0;
    int j=0;

    for(int i=0; i<rows;i++){ //adds from top left to bootm right
        for(int j=0;j<cols;j++){
            if(i==j){
                sum += arr[i][j];
            }
        }
    }
    int left = 0; //adds from top left to bottom right
    int right = cols - 1;
    while(left < rows && right >= 0){
        sum += arr[left][right];
        left++;
        right--;
    }

    return sum;
}