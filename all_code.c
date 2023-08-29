#include<stdio.h>
void concatination_1();
void deletion_2();
void insurtion_3();
void maximum_4();
void minimum_5();
void reversal_6();
void sorting_7();
void travarsal_8();
void algo_merge_9();
int bubble_sort(int arr[], int size);

int main(){
    int key;
    printf("Enter 1 for concatination. \nEnter 2 for deletion. \nEnter 3 for insurtion.\n");
    printf("Enter 4 for maximum. \nEnter 5 for minimum.\nEnter 6 for reversal. \n");
    printf("Enter 7 for sorting. \nEnter 8 for travarsal. \nEnter 9 for Algo merge\n\n");
    printf("Enter the value :");
    scanf("%d", &key);
    switch(key){
        case 1 :
        concatination_1();
        break;
        
        case 2 :
        deletion_2();
        break;

        case 3 :
        insurtion_3();
        break;

        case 4 :
        maximum_4();
        break;
        
        case 5 :
        minimum_5();
        break;

        case 6 :
        reversal_6();
        break;

        case 7 :
        sorting_7();
        break;
        
        case 8 :
        travarsal_8();
        break;

        case 9 :
        algo_merge_9();
        break;

        default:
        printf("The value is not valid. ");
    }
    int question;
    printf("Enter 1 if you want to continue. Enter any other button for back : ");
    scanf("%d", &question);
    if(question==1){
        main();
    }
   
    return 0;
}
// array concatination
void concatination_1(){
     int i,index=0,size1,size2;

    printf("Enter the size of the 1st array : \n");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of the 1st Array :\n");
    for(i=0; i<size1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the 2nd array : \n");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements of the 2nd Array :\n");
    for(i=0; i<size2; i++){
        scanf("%d", &arr2[i]);
    }

    int arr3[size1+size2];
    for(i=0; i<size1; i++){
        arr3[index] = arr1[i];
        index ++;
    }
    for(i=0; i<size2; i++){
        arr3[index] = arr2[i];
        index ++;
    }
    printf("The array is :\n");
    for(i=0; i<index; i++){
        printf("%d  ", arr3[i]);
    }
    printf("\n");
    
}
//array deletion
void deletion_2(){
    int size, i,element,found=0,index=-1;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    int arr[size];    
    printf("Enter the elements of the Array :\n");
    for(i=0; i<size;i++){
        scanf("%d", &arr[i]);
        }
    printf("What element do you want to delete ? ");
    scanf("%d", &element);
    for(i=0;i<size;i++){
        if(arr[i]==element){
            index = i;
            found =1;
            break;
        }
    }
    if(found==0){
        printf("The element is not found in the array .");
        }
    else{
        for(i=index; i<size-1; i++){
            arr[i]= arr[i+1];
        }
        size = size -1;
    }
    printf("The final Array is :\n");
    for(i=0; i<size; i++){
        printf("%d  ",arr[i] );
    }
     printf("\n");
}
//array insursion of an array
void insurtion_3(){
    int i, size,pos=0,key ;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    int arrayi[size+1]; 
      
    printf("Enter the elements of the Array :\n");
    for(i=0; i<size;i++){
        scanf("%d", &arrayi[i]);
        }
    printf("What element do you want you insert ? :");
    scanf("%d", &key);
    printf("In what position do you want to insert the element ? :");
    scanf("%d", &pos);
    if(pos<=0 || pos>size){
        printf("Invalid Position ! Enter a valid position. ");
    }
    printf("The Array is  :\n");
    for(i=0; i<size; i++){
        printf("%d\n", arrayi[i]);
    }     
        i= size;
    while(i>pos-1){
        arrayi[i] = arrayi[i-1];
        i--;

    }
    arrayi[pos-1] = key ;   
    printf("The new Array is  :\n");
    for(i=0; i<size+1; i++){
        printf("%d\n", arrayi[i]);
    }
     printf("\n");
}
//maximum value of an array
void maximum_4(){
int size,i,element;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array :\n");
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
        }
    for(i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            element = arr[i];
        } else{
            element = arr[i+1];
        }
    }
    printf("The maximum element in the Array is : %d", element);
    printf("\n");
}
//minimum value of an array
void minimum_5(){
int size,i,element;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array :\n");
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
        }
    for(i=0; i<size-1; i++){
        if(arr[i]<arr[i+1]){
            element = arr[i];
        } else{
            element = arr[i+1];
        }
    }
    printf("The minimum element in the Array is : %d", element);
     printf("\n");
}
//reversal of an array
void reversal_6(){
    int i, size, index;

    printf("Enter the size of array :");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter the elements of the Array :\n");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
     }
     if(size % 2 == 0){
        for(i=0;i<(size/2);i++){
            index = arr[i];
            arr[i]=arr[size-(i+1)];
            arr[size-(i+1)]= index;
            }
            
    }else{
        for(i=0; i<(size-1)/2 ; i++){
            index = arr[i];
            arr[i]=arr[size-(i+1)]; 
            arr[size-(i+1)]= index;   
            }
        }
    printf("After the Reversal, the array is :\n");
    for(i=0;i<size; i++){
        printf("%d  ", arr[i]);
    }
     printf("\n");   
}
//sorting of an array
void sorting_7(){
    int size,i,j,element;

    printf("Enter the size of array :");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the ELements of the Array :\n");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(i=1; i<size-1; i++){
        for(j=0; j<size-1; j++){
            if(arr[j]> arr[j+1]){ //swapping j & j+1 element
               element = arr[j+1];
               arr[j+1] = arr[j];
               arr[j] = element;
            }
        }
    }
    printf("The sorted array elements are :\n");
    for(i=0;i<size;i++){
        printf("%d  ", arr[i]);
        }
         printf("\n");
}
//travarsal of an array
void travarsal_8(){
    int i,size;

printf("Enter the size of the Array :\n");
scanf("%d", &size);

int arrayT[size];

printf("Enter the Values of the Array :\n");
for(i=0; i<size; i++){
    scanf("%d", &arrayT[i]);
}
printf("The Elements of the Array is :\n");

for(i=0; i<size; i++){
    printf("%d  ", arrayT[i]);
}
 printf("\n");
}
//Algorithm of merge of Arrays 
void algo_merge_9(){
int size1,size2,i=0,j=0,k=0,element1,element2;
    printf("Enter the size of the 1st array :");
    scanf("%d", &size1);
    int arr1[size1]; //1st array
    printf("Enter the ELements of the 1st Array :\n");
    for(i=0;i<size1;i++){
        scanf("%d", &arr1[i]);
    }
    bubble_sort(arr1,size1); //bubble sort function call 1
    printf("Sorted 1st array: ");
    for (int i = 0; i < size1; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
    printf("Enter the size of the 2nd array :");
    scanf("%d", &size2);
    int arr2[size2]; //2nd array
    printf("Enter the ELements of the 2nd Array :\n");
    for(i=0;i<size2;i++){
        scanf("%d", &arr2[i]);
    }
    bubble_sort(arr2,size2); //bubble sort function call 2
    printf("Sorted 2nd array: ");
    for (int i = 0; i < size2; i++) {
        printf("%d  ", arr2[i]);
    }
    printf("\n");
    int size3 = size1 + size2;
    int arr3[size3];
    i=0; j=0;k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<size1){
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j<size2){
        arr3[k]= arr2[j];
        j++;
        k++;
    }
    printf("The merged array is :\n");
    for(i=0;i<size3; i++){
        printf("%d  ", arr3[i]);
    }
     printf("\n");

}
bubble_sort(int arr[], int size){
    for(int i=1; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]> arr[j+1]){ //swapping j & j+1 element
               int element = arr[j+1];
               arr[j+1] = arr[j];
               arr[j] = element;

            }
        
        }
    }
}
