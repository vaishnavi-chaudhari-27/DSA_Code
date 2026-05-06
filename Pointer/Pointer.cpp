#include <iostream>
#include  <vector>
using namespace std;


    // Que 1 //
    // int main() {
    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << *p << endl;
    // cout << **q  << endl;
    // cout << p << endl;
    // cout << *q << endl;
    // return 0;

    // Que 2//
    // void changeA(int* ptr) {
    //     *ptr = 20;
    // }
    // int main() {
    //     int a = 10;
    //     changeA(&a);

    //     cout << "inside main fnx : " << a << endl;
    //     return 0;
    // }

    // Que 3 //
//    int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     int a = 10;
//     int * ptr = &a;

//     cout << ptr << endl;
//     ptr = ptr + 2;
//     cout << ptr << endl;
//     return 0;
//    }

    // Que 4//
    // int main() {
    //     int arr [] = {1, 2, 3, 4, 5};

    //     cout << *arr << endl;
    //     cout << *(arr+1) << endl;
    //     cout << *(arr+2) << endl;
    //     cout << *(arr+3) << endl;

    //     return 0;
    // }

        // Que 5 //
    //    int main() {
    //     int arr[] = {1, 2, 3, 4, 5};

    //     int* ptr2;
    //     int* ptr1 = ptr2 + 2;

    //     cout << ptr1 - ptr2 << endl;
    //     return 0;
    //    } 

    // Que 6 //

    // int main() {
    //     int arr[] = {10, 20, 30, 40};
    //     int* ptr = arr;

    //     cout << *(ptr + 1) << endl;
    //     cout << *(ptr + 3) << endl;
    //     ptr++;
    //     cout << *ptr << endl;
    //     return 0;
    // }


    // Que 7  arr = [-1, 0, 3, 4, 5, 9, 12]  target = 12//
//  int binarySearch(vector<int> arr, int tar) {
//     int st=0, end=arr.size()-1;

//     while(st <= end) {
//         int mid = (st + end)/2;

//     if(tar > arr[mid]) {
//         st = mid + 1;
//     } else if (tar < arr[mid]) {
//         end = mid - 1;
//     } else {
//         return mid;
//     }
//     }
//     return -1;
//  }
//     int main() {
//         vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
//         int tar1 = 4;

//          cout << binarySearch(arr1, tar1) << endl;

//         vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
//         int tar2 = 0;


//     }


    //  Que 8 arr = [-1, 0, 3, 5, 9, 12] target = 0 //

    int recBinarySearch(vector<int> arr, int tar, int st , int end) {
        if(st <= end) {
            int mid = st + (end-st)/2;

            if(tar > arr[mid]) {
                return recBinarySearch(arr, tar, mid+1, end);
            } else if(tar < arr[mid]) {
                return recBinarySearch(arr, tar, st, mid-1);
            } else {
                return mid;
            }
        }
        return -1;
    }
    int main() {
        vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
        int tar1 = 40;

        vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
        int tar2 = 0;

        cout << recBinarySearch(arr2, tar2, 0, arr2.size()-1) << endl;
        return 0;
    }