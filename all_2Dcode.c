#include<stdio.h>
void add_matrix();
void sub_matrix();
void multiply_matrix();
void transpose_matrix();
int scan_matrix(int arr[100][100], int row, int col);
int print_matrix(int arr[100][100], int row, int col);
int main(){
    int elmnt, key;
    printf("Enter 1 for addition. \nEnter 2 for Substraction. \nEnter 3 for Multiplication.\n");
    printf("Enter 4 for transpose of Matrix.\n\n");
    printf("Enter the Element : ");
    scanf("%d", &elmnt);


switch(elmnt){
    case 1 :
    add_matrix();
    break;

    case 2 :
    sub_matrix();
    break;

    case 3 :
    multiply_matrix();
    break;

    case 4 :
    transpose_matrix();

    default:
    printf("The value is not Valid . \n");   
}    
    printf("Enter 1 for continue . And any other number for Quit. : \n");
    scanf("%d", &key);
    if(key==1){
        main();
    }else{
        return 0;
    }
return 0;
}
//function definations
//Addition of Matrix
void add_matrix(){ 
    int i,j,row1,col1,row2,col2;
    int arr1[100][100], arr2[100][100], arrR[100][100];
    printf("Enter the Number of Rows of 1st matrix :");
    scanf("%d",&row1);
    printf("Enter the Number of coloumns of 1st matrix :");
    scanf("%d",&col1);
    arr1[row1][col1];
    
    printf("Enter the Elements of the 1st matrix :\n");
    scan_matrix(arr1, row1, col1);
    printf("Enter the Number of rows of the 2nd matrix :"); //1st matrix
    scanf("%d",&row2);

    printf("Enter the Number of coloumns of the 2nd matrix :");
    scanf("%d",&col2);
    
    arr2[row2][col2];
    arrR[row1][col1];
    
    printf("Enter the Elements of the 2nd matrix :\n"); //2nd matrix
    scan_matrix(arr2, row2, col2);
    if(row1 != row2 || col1 != col2){
        printf("Addition not Possible. Please Enter the same rows And coloumns.\n\n\n");
        main();
    }else{
        int arrR[row1][col1];
        printf("The Resultent Matrix is :\n");
        for(i=0; i<row1; i++){
            for(j=0; j<col2; j++){
                arrR[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
    
    print_matrix(arrR, row1, col1);
    }
}
//Substraction of matrix
void sub_matrix(){
    int i,j,row1,col1,row2,col2;
    int arr1[100][100], arr2[100][100], arrR[100][100];
    printf("Enter the Number of Rows of 1st matrix :");
    scanf("%d",&row1);
    printf("Enter the Number of coloumns of 1st matrix :");
    scanf("%d",&col1);
    arr1[row1][col1];
    
    printf("Enter the Elements of the 1st matrix :\n");
    scan_matrix(arr1, row1, col1);
    //2nd matrix
    printf("Enter the Number of rows of the 2nd matrix :");
    scanf("%d",&row2);

    printf("Enter the Number of coloumns of the 2nd matrix :");
    scanf("%d",&col2);
    
    arr2[row2][col2];
    arrR[row1][col1];
    
    printf("Enter the Elements of the 2nd matrix :\n");
    scan_matrix(arr2,row2,col2);
    if(row1 != row2 || col1 != col2){
        printf("Substraction not Possible. Please Enter the same rows And coloumns.\n\n\n");
        main();
    }else{
        int arrR[row1][col1];
        printf("The Resultent Matrix is :\n");
        for(i=0; i<row1; i++){
            for(j=0; j<col1; j++){
                arrR[i][j] = arr1[i][j] - arr2[i][j];
            }
        }
    print_matrix(arrR, row1, col1);
    }
}
//multiplication of Matrix
void multiply_matrix(){
     int row1,row2,col1,col2,i,j,k;
    int mat1[100][100];
    int mat2[100][100];
    int matR[100][100];
    printf("Enter the number of Rows of the 1st Matrix : ");
    scanf("%d", &row1);
    printf("Enter the number of coloumns of the 1st Matrix : ");
    scanf("%d", &col1);
    printf("Enter the Elements of the 1st matrix : \n");
    scan_matrix(mat1, row1, col1);
    printf("Enter the number of Rows of the 2nd Matrix : ");
    scanf("%d", &row2);\
    printf("Enter the number of coloumns of the 2nd Matrix : ");
    scanf("%d", &col2);
    printf("Enter the Elements of the 2nd matrix :\n");
    scan_matrix(mat2, row2, col2);

    if(col1!=row2){
    printf("Multiplication not possible.\n\n\n");
    main();
    }else{
    for(i=0;i<row2;i++){       //as col1 and row2 are same.
        for(j=0; j<row2; j++){
            matR[i][j] = 0;
        for(k=0; k<col1; k++){
            matR[i][j] = matR[i][j] + (mat1[i][k]*mat2[k][j]);
            }
        }
    }
    }
    printf("The final matrix is : \n");
    print_matrix(matR, row2, col1);
}
//Matrix transpose
void transpose_matrix(){
    int matrix[100][100],trans[100][100], j,element=0,row,col, i;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of col : ");
    scanf("%d", &col);
    printf("Enter the Elememts of the 1st matrix :\n");
    scan_matrix(matrix, row, col);
    printf("The Matrix is : \n");
    print_matrix(matrix, row, col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
          trans[i][j] = matrix[j][i];  
      }
    }
    printf("The transpose matrix is : \n");
    print_matrix(trans, row, col);
}
// Small Action functions
int scan_matrix(int arr[100][100], int row, int col){
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}
int print_matrix(int arr[100][100], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}