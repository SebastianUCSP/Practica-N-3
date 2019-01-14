#include <iostream>

using namespace std;

void swap(int &x, int &y){
   int temp = x;
   x = y;
   y = temp;
}

void invertir(int arr, int const len){

}

void palindrome(const int arr, const int len){
    int temp, i;
    for(i = 0; i < len/2; i++){
        temp = arr[len - i - 1];
        arr[len - i - 1];
        arr[i] = temp;

    }

    }

void ordenar(int arr[], const int len){
   for(int i = 0; i < len-1; i++){
      for(int j = 1; j < len-i-1; j++){
         if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
         }
      }
    }
}

int main()

{

int arr[] = {1,3,5,2,7,8};

ordenar(arr, 5);
for(int i = 0; i < 6; i++)
   cout << arr[i] << " ";

}
