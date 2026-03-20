#include<iostream>
using namespace std;


int main(){
    //*if else*//
//     //que 1//
//     int num = 44;
//    if (num %  2 == 0){
//     cout << "print even";
//    } else {
//     cout << "print odd";
//    }
//    return 0;

   //que 2//
//    int n;
//    cin >> n;
//    if (n > 0){
//     cout << "positive";
//    } else if (n < 0){
//     cout << "negative";
//    } else{
//     cout << "zero";
//    }
//    return 0;

//que3//
//  int marks;
//  cin >> marks;
//  if (marks >= 80){
//     cout << "print pass";
//  } else {
//     cout << "print fail";
//  }
//  return 0;

// que4 //
// int num1;
// int num2;
// cin >> num1 >> num2;
// if (num1 > num2){
//     cout << "num 1 is greater";
// } else {
//     cout << "num 2 is greater";
// }

// que5//

// int a;
// int b;
// int c;
//  cin >> a >> b >> c;
//  if (a>b && a>c){
//     cout << "a is largest";
//  } else if(b>a && a>c){
//     cout << "b is latgest";
//  } else {
//     cout << "c is largest";
//  }
//  return 0;

//que 6///

// int years;
// cin >> years;
// if (years % 4 ==  0){
//     cout << "leap year";
// } else {
//     cout << "No leap year";
// }
// return 0 ;

//que7//
// char character;
// cin >> character;
// if (character=='a' || character=='e' || character=='i' ||  character=='o' ||  character=='u' ){
//     cout << "vowel";
// } else {
//     cout << "constant";
// }

//que 8//
// int num;
// cin >> num;
// if (num % 3 ==0){
//     cout << "divisible by 3";
// } else {
//     cout << "not divisible";
// }

//que9 //
// int temp;
// cin >> temp;
// if (temp>30){
//     cout << "Hot";
// } else if (temp >= 20){
//     cout << "Normal";
// } else {
//     cout << "Cold";
// }

//que10//
// int num1;
// int num2;
// cin >> num1 >> num2 ;
// if (num1 == num2){
//     cout << "equal value";
// } else {
//     cout << "not equal value";
// }



// loop //

// for(int i=1; i<=3; i++){
//     cout << i << endl;
// }
// return 0;


// for(int i=1; i<=10; i++){
//     cout << i << endl;
// }
// return 0;

// int n;
// cin >> n;
// for(int i=1; i<=n; i++){
//     cout << i << endl;
// }
// return 0;

// for(int i=0; i<=10; i++){
//     if(i % 2 == 0){
//         cout << i << endl;
//     }
// }
// return 0;

// int n;
// int sum = 0;
// cin >> n;
// for(int i=1; i <=n; i++){
//     sum = sum + i;
// }
//  cout << sum;

//  return 0;

// int num;
// cin >> num; 
// for(int i=1; i <=10; i++){
//   cout << num << "X" << i << " = " <<  num * i << endl;
// }
//   return 0;

// int num;
// cin >> num;
// int count = 0;
// for(int i=2; i< num; i++){
//     if(num % i == 0){
//         count++;
//     }
// }
// if(count == 0){
//     cout << "prime number";
// }
// else{
//     cout << "Not prime number";
// }
// return 0 ;

// int num;
// int reverse = 0;
// cin >> num;
// while(num != 0){
//     int digit = num % 10;
//     reverse = reverse * 10 + digit;
//     num = num / 10;
// }
cout << reverse;
   return 0;

/*palindrom que*/

  int num, original, reverse = 0;
  cin >> num;
  original = num;
  while(num != 0){
    int digit = num % 10;
    reverse = reverse * 10 + digit;
     num = num / 10;
  }
     if(original == reverse){
         cout << "palindrome";
     }
     else {
        cout << "Not palindrome";
     }
     return 0;


  char ch;
 cin >> ch;
//  if('a'>'z'){
//     cout << "This is lowercase";
//  }
//  if else('A'> 'Z'){
//     cout << "This is uppercase";
//  }
//  if('o' < 'g') {
//     cout << "This numeric";
//  }


// int n;
// cin >> n;
// int i= 1;
// while (i<=n){
//     cout<< i << " ";
//     i= i+1;
// }

// int n;
// cin>>n;

// int i =1;
// int sum = 0;
// while (i<=n){
//     sum = sum + i;
//     i = i + 1;
// }
// cout << "value of sum is" << sum << endl;

// int n;
// cin >> n;

// int i = 2;
// while(i<n){
//     if(n%i==0){
//         cout << "Not prime for" << i << endl;
//     }
//     else{
//         cout << "prime for" << i << endl;
//     }
//     i = i + 1;
// }


/* for loop */

// int i;
// for(int i=1; i<=5; i++){
//     cout << i << endl;
// }


// int i;
// for(int i=1;  i<=10; i=i+2){
//     cout << i << endl;
// 
// }

// int i;
// for(int i=1; i<=20; i++){
//     cout << i << endl;
// }

// int i;
// for(int i=2; i<=20; i=i-2){
//     cout << i << endl;
// }

// int i;
// for(int i=10; i>=1; i--){
//     cout << i;
// }

// int i;
// for(int i=5; i>=1; i--){
//     cout << i;
// }


// int sum=0;
// for(int i=1; i<=10; i++){
//     sum = sum + i;
// }
//  cout <<sum;

// int i;
// for(int i=1; i<=10; i++){
//     cout << i;
// }

// int i;
// for(int i=1; i<=20; i++){

//     cout << i;
// }

// int i;
// for(int i=2; i<=20; i=i+2){
//     cout<<i;
// }

// int i;
// for(int i=1; i<=20; i=i+2){
//     cout<<i;
// }

// int sum=0;
// for(int i=1; i<=10; i++){
//     sum=sum+i;
// }
// cout<<sum;


// int i;
// for(int i=1; i<=10; i++){
//     cout<<i*i<<endl;
// }

// int i;
// for(int i=1; i<=5; i++){
//     cout << i*i <<endl;
// }

// int i;
// for(int i=1; i<=10; i++){
//     cout<<5*i<<endl;
// }

// int i;
// for(int i=1; i<=10; i++){
//     cout<<7*i<<endl;
// }



// int sum=0;
// for(int i=2; i<=50; i+2){
//     sum=sum+i;
// }
// cout<<sum;
// return 0;
}
