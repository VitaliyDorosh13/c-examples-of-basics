#include <iostream>

int searchArray(int array[], int size, int element);

int main(){

    int nums[] = {1, 3, 5, 6, 7, 11, 21};
    int size = sizeof(nums)/ sizeof(nums[0]);
    int index;
    int myNums;

    std:: cout << "Enter element to search for: " << '\n';
    std:: cin>> myNums;

    index = searchArray(nums, size, myNums);

    if(index != -1){
        std:: cout << myNums << " is at index " << index ;
    }
    else{
        std:: cout << myNums << "is not the array";
    }
    return 0;
}

int searchArray(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}