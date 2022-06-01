#include<stdbool.h>

int insertEn(int arr[], int logicSize, int element, int position){
    int elementExist = find(arr, element, logicSize);
    if(elementExist == -1){
        int counter = logicSize;
        while(counter > position){
            arr[counter] = arr[counter - 1];
            counter--;
        }
        arr[position] = element;
        logicSize++;
    }
    return logicSize;
}
int deleteEn(int arr[], int logicSize, int element){
    int position = find(arr, element, logicSize);
        int deleted = 1;
    if(position!=-1){
        int i = position;
        while (i+deleted<logicSize)
        {
            if(arr[i+deleted]!=element){
                arr[i] = arr[i+deleted];
                i++;
            } else {
                deleted++;
            }
        }
        
    }
    return logicSize - deleted;
}
int find(int arr[], int element, int logicSize){
    bool found = false;    
    int i = 0;
    while(i < logicSize && !found){
        if(arr[i] == element){
            found = true;
        } else {
            i++;
        }
    }
    return found? i : -1;
}
int equals(int arr[], int element, int logicSize){
    int counter = 0;
    int total = 0;
    while(counter < logicSize){
        if(arr[counter] == element){
            total++;
        }
    }
    return total;
}
int maxValue(int arr[], int logicSize){
    int maxValue = 0;
    for(int i = 0; i < logicSize; i++){
        if(arr[i] > maxValue){
            maxValue = arr[i];
        }
    }
    return maxValue;
}
int minValue(int arr[], int logicSize){
    int minValue = arr[0];
    for(int i = 0; i < logicSize; i++){
        if(arr[i] < minValue){
            minValue = arr[i];
        }
    }
    return minValue;
}
