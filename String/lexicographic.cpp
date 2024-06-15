#include <iostream>
using namespace std;

int min(int  arr[], int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        while(temp / 10 != 0){
            temp/=10;
        }
        if(temp < min){
            min = temp;
        }
    }
    return min;
}
int max(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;

}
void should_print(int number, int min){
    int temp = number;
    while(temp/10 != 0){
        temp /= 10;
    }
    if(temp == min ){
        cout << number << " ";
    } 
}
void check_luxi(int arr[], int n){
    int min_arr = min(arr, 10);
    int max_arr = max(arr, 10);
    while(min_arr <= max_arr){
        for(int j = 0; j < n; j++){
            should_print(arr[j], min_arr);
        }
        min_arr += 1;
    }
}
int main(){
    int arr[10] = {2, 3, 5, 7, 13, 11, 17, 19, 23, 29};
    check_luxi(arr, 10);
    return 0;
}