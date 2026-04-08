#include<iostream>
using namespace std;

    int a , b;

    cin >> a >> b;
    int ans = 1;

    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    cout << "Answer is " << ans << endl;
    return 0;


         // Que 1 Sum of 2 number //

    //   int sum  (int a, int b) {
    //   int s = a + b;
    //     return s;
    //   }
    //   int main(){
    //     cout << sum (10, 5) << endl;
    //     return 0;
    //   }


    
        //  Que 2 Minimum of 2 number //

    //   int miniTwoNumber(int a, int b) {
    //     if(a < b){
    //         return a;
    //     } else {
    //         return b;
    //     }
    //     }
    //     int main(){
    //         cout << "min =" << miniTwoNumber(7,9) << endl;
    //         return 0;
    //     }



        // Que 3 Calculate sumof number from 1 to n //

        // int sumN(int n){
        //     int sum = 0;
        //     for(int i=1; i<=n; i++){
        //         sum += i;
        //     }
        //     return sum;
        // }
        // int main(){
        //    cout << sumN(10) << endl;
        //    cout << sumN(5) << endl;
        //    return 0;
        // }



        // Que 4 Calculate N factorial //

        // int factorialN(int n){
        //     int fact = 1;

        //     for(int i=1; i<=n; i++){
        //         fact = fact * i;
        //     }
        //     return fact;
        // }

        // int main(){
        //     cout << factorialN(4) << endl;
        //     cout << factorialN(6) << endl;
        //     return 0;
        // }



        //  Que 5 //

        // int changeX(int x) {
        //     x = 2 * x;
        //     cout << "x = " << x << endl;
        // }
        // int main () {
        //     int x = 5;
        //     changeX(x);

        //     cout << "x = " << x << endl;
        //     return 0;
        // }



        // Que 6 Calculate sum of digits of a number //

        // int sumDigits(int num) {
        //     int digSum = 0;

        //     while(num > 0) {
        //         int lastDig = num % 10;
        //         num /= 10;

        //         digSum += lastDig;
        //     }
        //     return digSum;
        // }
        // int main() {
        //     cout << "sum =" << sumDigits(2356) << endl;
        //     return 0;
        // }

        

        // Que 7 Calculate nCr binomiaal coefficient for n & r //

        // int factorial(int n) {
        //     int fact = 1;

        //     for(int i=1; i<=n; i++){
        //         fact *= i;
        //     }
        //     return fact;
        // }
        // int nCr(int n, int r) {
        //     int fact_n = factorial(n);
        //     int fact_r = factorial(r);
        //     int fact_nmr = factorial(n-r);

        //    return fact_n / (fact_r * fact_nmr); 
        // }
        // int main() {
        //     int n = 8, r = 2;
        //     cout << nCr(n,r) << endl;

        //     return 0;
        // }

        

        // Que 8 Maximum 2 number //
        // int maxNumber(int a, int b) {
        //     if(a > b) {
        //         return a; 
        //     } else {
        //         return b;
        //     }
        // }
        // int main() {
           
        //     cout << "Max = " << maxNumber (20, 40)<< endl;
        //     return 0;
        // }



        //  Que 9 Reverese Number //

        // int reverse(int n) {
        //     int rev = 0;

        //     while(n > 0){
        //         int digit = n % 10;
        //         rev = rev * 10 + digit;
        //         n = n / 10;
        //     }
        //     return rev;
        // }

        // int main(){
        //     cout << "Reverse = " <<  reverse(1221) << endl;
        //     return 0;
        // }



        // Que 10 palindrom number //
        
        // int isPalindrom(int n) {
        //     int original = n;
        //     int rev = 0;

        //     while(n > 0) {
        //         int digit = n % 10;
        //         rev = rev * 10 + digit;
        //         n = n / 10;
        //     }
        //     if(original == rev){
        //         return true;
        //     } else {
        //         return false;
        //     }
        // }

        // int main() {
        //     cout << isPalindrom(121) << endl;

        //     cout << isPalindrom(123) << endl;
        // }



        // Que 11 prime number //

        // int isPrime(int num){
        //     if(num <= 1) {
        //         return false;
        //     }   
        //     for(int i=2; i<num; i++){
        //            if(num % i == 0)
        //            return false;
        //         }
        //         return true;
        //     }
        // int main() {

        //     int num;
        //     cin >> num;
        //     int result = isPrime(num);

        //     if(result == 1){
        //       cout << "Prime Number";
        //     } else {
        //         cout << "Not Prime Number";
        //     }
           
        //     return 0;

        // }



        // Que 12 print the all prime number 1 to n //

        // int isprime(int n) {
        //    if(n <= 1) {
        //     return false;
        //    }
        //    for (int i=2; i<n; i++){
        //     if(n % i == 0){
        //         return false;
        //     }
        //     return true;
        //    }
        // }

        // int main() {
        //     int n;
        //     cin >> n;

        //     for(int i=1; i<=n; i++){
        //         if(isprime(i)){
        //             cout << i << endl;
        //         }
        //     }
        //     return 0;
        // }



        // Que 13 print the nth Fibonacci Number //
        // int nthFibonacci(int n) {
        //     if(n == 1) return 0;
        //     if(n == 2) return 1;

        //     int a = 0, b = 1 , next;

        //     for(int i=3; i<=n; i++){
        //         next = a + b;
        //         a = b;
        //         b = next;
        //     }
        //     return b;
        // }

        // int main() {
        //     int n;
        //     cin >> n;

        //     int  result = nthFibonacci(n);
        //     cout << result << endl;

        //     return 0;
        // }



        // Que 14 nth Fibonacci series 0 to n //

        // void fibonacciSeries(int n) {
        //     int a = 0, b = 1, next;
        //     cout << a << " " << b << " ";

        //     for(int i=3; i<=n; i++) {
        //         next = a + b;
        //         cout << next << " ";
        //         a = b;
        //         b = next;
        //     }
        // }
        // int main() {
        //     int n;
        //     cin >> n;

        //     fibonacciSeries(n);
        //     return 0;
        // }



        //  1 to n  //
        // void fibonacciSeries(int n) {
        //     int a = 0, b = 1, next;
           
        //     if(n >= 1) cout << a <<  " ";
        //     if(n >= 2) cout << b << " ";

        //     for(int i=3; i<=n; i++) {
        //         next = a + b;
        //         cout << next << " ";
        //         a = b;
        //         b = next;
        //     }
        // }
        // int main() {
        //     int n;
        //     cin >> n;

        //     fibonacciSeries(n);
        //     return 0;
        // } 

        
        // Que 15 Fibonacci using Recursion //

        int fibonacci(int n) {
            if(n == 1) return 0;
            if(n == 2) return 1;

            return fibonacci(n-1) + fibonacci(n-2);
        }
        int main(){
            int n;
            cin >> n;
            cout << fibonacci(n);

            return 0;
        }