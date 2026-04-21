#include<iostream>
using namespace std;
        // que1 //
//   int BinarySearch(int arr[], int size, int key) {

//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end)/2;

//     while(start <= end) {
//         if(arr[mid] == key) {
//             return mid;
//         }

//         if(key > arr[mid]) {
//             start = mid+1;
//         }
//         else {
//             end = (start+end)/2;
//         } 
//         mid = (start+end)/2;
//     }
//         return -1;
//     }
// int main() {
//     int even[6] = {2, 4, 6, 8, 12, 18};
//     int odd[5] = {3, 8, 11, 14, 16};

//     int evenIndex = BinarySearch(even, 6, 20);
//     cout << "Index of 18 is" << evenIndex << endl;

//     int oddIndex = BinarySearch(odd, 5, 20);
//     cout << "Index of 16 is" << oddIndex << endl;

//     return 0;
// }



        // Que2 //

    // int firstOcc(int arr[], int n, int key) {
    //     int s = 0, e = n-1;
    //     int mid = s + (e-s) / 2;
    //     int ans = -1;
    //     while(s<=e) {
    //         if(arr[mid] == key) {
    //             ans = mid;
    //             e = mid -  1;
    //         }
    //         else if(key > arr[mid]) {
    //             s = mid + 1;
    //         }
    //         mid = s + (e-s)/2;
    //     }
    //     return ans;
    // }

    // int lastOcc(int arr[], int n, int key) {
    //     int s = 0, e = n-1;
    //     int mid = s + (e-s)/2;
    //     int ans = -1;
    //     while(s<=e) {
    //         if (arr[mid] == key) {
    //           ans = mid;
    //           s = mid + 1;
    //         }
    //         else if (key > arr[mid]) {
    //             s = mid + 1;
    //         }
    //         else if(key < arr[mid]) {
    //             e = mid - 1;
    //         }
    //         mid = s + (e-s)/2;
    //     }
    //     return ans;
    // }
    // int main() {
    //     int even[5] = {1, 2, 3, 3, 5};
    //     cout << "First Occurrence of 3 is at Inddex" << firstOcc(even, 5, 3) << endl;
    //     return 0;
    // }


        // Que3 // 

    // int getPivot(int arr[], int n) {
    //     int s = 0;
    //     int e = n-1;
    //     int mid = s + (e-s)/2;

    //     while(s<e) {
    //         if(arr[mid] >= arr[0])
    //         {
    //             s = mid+1;
    //         }
    //         else {
    //             e = mid;
    //         }
    //         mid = s + (e-s)/2;
    //     }
    //     return s;
    // }
    // int main() {
    //     int arr[5] = {8, 10, 17, 1, 3};
    //     cout << "Pivot is " << getPivot(arr, 5) << endl;
    // }


    // Que4 //

    // long long int sqrtInteger(int n) {

    //     int s = 0;
    //     int e = n;
    //     long long int mid = s + (e-s)/2;

    //     long long int ans = -1;
    //     while(s<=e) {
    //         long long int square = mid*mid;

    //         if(square == n)
    //           return mid;
            
    //           if(square < n) {
    //             ans = mid;
    //             s = mid + 1;
    //           }
    //           else 
    //           {
    //             e = mid - 1;
    //           }
    //           mid = s + (e-s)/2;
    //     }
    //     return ans;
    // }

    // double morePrecision(int n, int precision, int tempSol) {
    //     double factor = 1;
    //     double ans = tempSol;
    //     for(int i=0; i<precision; i++) {
    //         factor = factor/10;
    //         for(double j=ans; j*j<n; j=j+factor) {
    //             ans = j;
    //         }
    //     }
    //     return ans;
    // }
    //   int main() {
    //     int n;
    //     cout << "Enter the number" << endl;
    //     cin >> n;

    //     int temSol = sqrtInteger(n);
    //     cout << " Answer is " << morePrecision(n, 3, tempSol) << endl;

    //     return 0;
    //   }


      