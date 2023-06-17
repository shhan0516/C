/***********************************

isSorted().c

reference 누워서 읽는 알고리즘(임백준 지음)

code by Han, Sang-ho

***********************************/

#include <stdio.h>

int isSorted(int* array, int length);

//array : int 배열, length : array 길이,

//return value : 0 (Not sorted), 1 (Sorted)

int main() {

    int aryData[] = {1, 2, 3, 5, 7, 11,13};

    

    int len = sizeof (aryData ) / sizeof (aryData[0]);

    

    printf("%d\n", len );

    

    int result = isSorted (aryData , len);

    
    printf("%d\n", result );

    

    return 0;

}

int isSorted(int* array, int length) {

    for(int i = 0; i < length - 1; i++) {

        if(array[i] > array[i + 1]) {

            return 0;

        }     

    }

    

    return 1;

}
