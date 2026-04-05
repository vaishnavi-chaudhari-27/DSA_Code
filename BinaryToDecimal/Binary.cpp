#include <iostream>
using namespace std;
// 1 Decimal  To Binaray
// int decToBinaary(int decNum) {
//     int ans = 0, pow = 1;

//     while(decNum > 0) {
//        int rem = decNum % 2;
//         decNum /= 2;
//         ans += (rem * pow);
//         pow *= 10;
//     }
//     return ans;
// }
// int main(){
//     int decNum = 50;

//     for(int i=1; i<=10; i++){
//         cout<<decToBinaary(i) << endl;
//     }
//     return 0;
// }


// que 2 //


// 2 Binary To Decimal
    //  que1 //
// int binToDecimal(int binNum) {
//    int ans = 0, pow = 1;

//    while(binNum > 0) {
//     int rem  = binNum % 10;
//     ans += rem * pow;

//     binNum /= 10;
//     pow *= 2;
//    }
//    return ans;
// }
// int main(){
//     cout << binToDecimal(1011) << endl;
//     return 0;
// }

    // que2 // 
// int binToDecimal(int binNum) {
//     int ans = 0, pow = 1;

//     while(binNum > 0) {
//         int rem = binNum % 10;
//         ans += rem * pow;

//         binNum /= 10;
//         pow *= 2;
//     }
//     return ans;
// }
// int main() {
//     cout << binToDecimal(1010) << endl;
//     return 0;
// }

    // que 3 //
    
    // int binToDecimal(int binNum) {
    //     int ans = 0, pow = 1;

    //     while(binNum > 0) {
    //         int rem = binNum % 10;
    //         ans += rem * pow;

    //         binNum /= 10;
    //         pow *= 2;
    //     }
    //     return ans;
    // }
    // int main(){
    //     cout << binToDecimal(111) << endl;
    //     return 0;
    // }


    // que 4 //
    // int binToDecimal(int binNum){
    //     int ans = 0, pow = 1;

    //     while(binNum > 0){
    //         int rem = binNum % 10;
    //         ans += rem * pow;

    //         binNum /= 10;
    //         pow *= 2;
    //     }
    //     return ans;
    // }
    // int main(){
    //     cout << binToDecimal(1001) << endl;
    //     return 0;
    // }

    
    //  que 5 //
   
//     int binToDecimal(int binNum) {
//     int ans = 0, pow = 1;

//    while(binNum > 0) {
//     int rem  = binNum % 10;
//     ans += rem * pow;

//     binNum /= 10;
//     pow *= 2;
//    }
//    return ans;
//  }
//   int main() {
//     cout << binToDecimal(11001) << endl;
//     return 0;
// }
