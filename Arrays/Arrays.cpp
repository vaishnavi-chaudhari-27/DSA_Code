#include<iostream>
#include <climits>
using namespace std;

    //    Que 1 Find smallest largest in Array //
    // int nums[] = {21, 12, 3, 0, 5, 10, -2};
    // int size = 7;

    // int smallest = INT_MAX;
    // int largest = INT_MIN;

    // for(int i=0; i<size; i++) {
    //     if(nums[i] < smallest) {
    //         smallest = min(nums[i], smallest);
    //         largest = max(nums[i], largest);
    //     }
    // }
    // cout << "smallest = " << smallest << endl;
    // cout << "largest = " << largest << endl;
    // return 0;


    //  Que 2  pass by reference //
    // void changeArr(int arr[], int size) {
    //     cout << "in function\n";
    //     for(int i=0; i<size; i++){
    //         arr[i] = 2 * arr[i];
    //     }
    // }
    // int main(){
    //    int arr[] = {1, 2, 3};
       
    //    changeArr(arr, 3);

    //    cout << "in main\n";
    //    for(int i=0; i<3; i++){
    //     cout << arr[i] << " ";
    //    }
    //    cout << endl;
    //     return 0;
    // }


    // Que 3 linear search arr[]={4,2,7,8,1,2,5}  target = 8 //
    //  int linearSearch(int arr[], int size, int target) {
    //     for(int i=0; i<size; i++){
    //         if(arr[i] == target) {
    //             return i;
    //         }
    //     }
    //     return -1;
    //  }
    //  int main() {
    //     int arr[] = {4, 2, 7, 8, 1, 2, 5};
    //     int size = 7;
    //     int target = 8;

    //     cout << linearSearch(arr, size, target) << endl;
    //     return 0;
    //  }

        // Que4 Reverse Array
    //  void reverseArray(int arr[], int size) {
    //     int start = 0, end = size-1;

    //     while(start < end) {
    //         swap(arr[start], arr[end]);
    //         start++;
    //         end--;
    //     }
    //  }
    //  int main() {
    //     int arr[] = {4, 2, 7, 8, 1, 2, 5};
    //     int size = 7;

    //     reverseArray(arr, size);
    //     for(int i=0; i<size; i++) {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    //     return 0;
    //  }

        //  Que5 Sum of Array

        // int main() {
        //     int arr[5];
        //     for(int i=0; i<5; i++){
        //         cin>> arr[i];
        //     }
        //     int sum = 0;
        //     for(int i=0; i<5; i++){
        //         sum = sum + arr[i];
        //     }
        //     cout << sum;
        //     return 0;
        // }


        // Que6 Maximum number
        // int main() {
        //   int arr[5];
        //   for(int i=0; i<5; i++){
        //     cin >> arr[i];
        //   }
        //   int max = arr[0];
        //   for(int i=1; i<5; i++) {
        //     if(arr[i] > max) {
        //         max = arr[i];
        //     }
        //   }
        //   cout << max;
        //   return 0;
        // }


        // Que7 Swap
        // void printArray(int arr[], int n){
        //   for(int i=0; i<n; i++){
        //     cout << arr[i] << " ";
        //   }
        //   cout << endl;
        // }

        // void swapAtternate(int arr[], int size) {

        //   for(int i=0; i<size; i+=2){
        //     if(i+1 < size) {
        //       swap(arr[i], arr[i+1]);
        //     }
        //   }
        // }
        // int main() {
        //   int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
        //   int odd[5] = {11, 33, 9, 76, 43};

        //   swapAtternate(even, 8);
        //   printArray(even, 8);

        //   cout<<endl;

        //   swapAtternate(odd, 5);
        //   printArray(odd, 5);

        //   return 0;
        // }


        // Que 8 slot
        void printArray(int arr[], int n) {
          for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
          }
          cout << endl;
        }
        void sortOne(int arr[], int n ) {
          int left = 0, right = n-1;
          
          while(left < right) {
            while(arr[left] == 0 && left < right) {
              left++;
            }
            while(arr[right] == 1 && left < right) {
              right--;
            }
            if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
            }
          }
        }

         int main() {
          int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
          sortOne(arr, 8);
          printArray(arr, 8);

          return 0;
         }
