#include <iostream>
using namespace std;
int main(){
//     cout<<"Hello World"<<endl;
//     // ///////////////////////////////////
//     int a,b;
//     cout<<"Enter the value of a: ";
//     cin>>a;

//     cout<<"Enter the value of b: ";
//     cin>>b;

//     int sum=a+b;
//     cout<<"The sum of 2 numbers="<<sum<<endl;
// // ////////////////////////////////////////////////////
//     char ch;
//     cout<<"Enter the character: ";
//     cin>>ch;

//     if (ch >=65 && ch<=90){
//         cout<<"The entered character is Uppercase: "<<ch<<endl;
//     }
//     else {
//         cout<<"The entered character is Lowercase: "<<ch<<endl;
//     }
//     // /////////////////////////////////////////////////////////////
//     int count=1;
//     while(count <=5){
//         cout<<count<<" ";
//         count++;
//     }

// /////////////////////////////////////////////////////////////////////

// int i=1,n=15;
// while(i<=n){
//     cout<<i<<" ";
//     i++;
// }

// //////////////////////////////////////////////////////////////////////
// for(int i=1;i<=10;i++){
//     cout<<i<<" ";
// }

// //////////////////////////////////////////////////////////////////////
// int n,sum=0;
// cout<<"Enter the number n: ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     sum+=i;
// }
// cout<<"The sum of the numbers="<<sum<<endl;
// /////////////////////////////////////////////////////////////////////
// int n,sum=0;
// cout<<"Enter the number n: ";
// cin>>n;
//  cout<<"The odd numbers: "<<endl;
// for(int i=1;i<=n;i++){
//     // if(i%2!=0)
//     if(i&1==1)
//     {
//         sum+=i;
//         cout<<i<<" ";
//     }
// }
// cout<<"\n";
// cout<<"The sum of Odd Numbers is="<<sum<<endl;
// //////////////////////////////////////////////////////////////////////
// int n,i=1;
// cout<<"Enter the number n: "<<endl;
// cin>>n;
// do{
//     cout<<i<<" ";
//     i++;
// }while(i<=n);
// //////////////////////////////////////////////////////////////////////
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// bool isPrime=true;
// for(int i=2;i<n-1;i++){//non prime
//     bool isPrime=false;
//     break;
// }
// if(isPrime==true){
//     cout<<"The number is Prime";
// }else{
//     cout<<"The number is not Prime";
// }
// //////////////////////////////////////////////////////////////////////////////
// int n=5;
// for (int i=1;i<=n;i++){
//     //int m=5;
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// /////////////////////////////////////////////////////////////////////////////
// int N,sum=0;
// cout<<"Enter the number: ";
// cin>>N;
// for(int i=1;i<N;i++){
//     if (i%3==0){
//         sum=sum+i;
//     }
// }
// cout<<"The sum of numbers divisible by 3= "<<sum<<endl;
// /////////////////////////////////////////////////////////////////
// int N,fac=1;
// cout<<"Enter the Number: ";
// cin>>N;
// for(int i=1;i<=N;i++){
//     fac=fac*i;
// }
// cout<<"The Factorial of the Number= "<<fac<<endl;
// ///////////////////////////////////////////////////////////////////////////////////////
// int n=4;//square pattern
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// ///////////////////////////////////////////////////////////////////////////////////////
// int n=4;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// ////////////////////////////////////////////////////////////////////////////////////////
// int n=4;
// for(int i=1;i<=n;i++){//outer line
// char ch='A';
//     for(int j=1;j<=n;j++){//inner line-start line
//         cout<<ch;
//          ch+=1;
//     }
//     cout<<endl;
// }
// //////////////////////////////////////////////////////////////////////////
// int n=3;
// int count=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<count;
//         count++;
//     }
//     cout<<endl;
// }
// //////////////////////////////////////////////////////////////////////////
// int n=4;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// //////////////////////////////////////////////////////////////////////////
// int n=4;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i;   
//     }   
//     cout<<endl;
// }
// /////////////////////////////////////////////////////////////////////////
// int n=4;
// for(int i=1;i<=n;i++){
//     int c=1;
//     for(int j=1;j<=i;j++){
//         cout<<c;
//         c++;
//     }
//     cout<<endl;
// }
// ////////////////////////////////////////////////////////////////
// int n=4;
// for(int i=1;i<=n;i++){
//     for(int j=i;j>=1;j--){
//         cout<<j;
//     }
//     cout<<endl;
// }
// ////////////////////////////////////////////////////////////////
// int n=4,c=1;//Floyd Triangle
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<c;
//         c++;
//     }
//     cout<<endl;
// }
////////////////////////////////////////////////////////////////////////
// int n=4;
// char ch='A';
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<ch;
//         ch++;
//     }
//     cout<<endl;
// }
// ///////////////////////////////////////////////////////////////////
// int n=4;//Inverted Triangle
// for(int i=0;i<n;i++){
//     //spaces
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }
//     //nums
//     for(int j=0;j<n-i;j++){
//         cout<<(i+1);
//     }
// cout<<endl;
// }
// //////////////////////////////////////////////////////////////
// int n=4;
// for(int i=0;i<n;i++){
//     //spaces
//     for(int j=n-i-1;j>0;j--){
//         cout<<" "<<" ";
//     }
//     for(int j=1;j<=i+1;j++){
//         cout<<j<<" ";
//     }
//     for(int j=i;j>=1;j--){
//         cout<<j<<" ";
//     }
//     cout<<endl;
//}
// ////////////////////////////////////////////////////////////////////
// int n=7;//Hollow Diamond
// for(int i=0;i<n;i++){
//     for(int j=n-i-1;j>0;j--){
//         cout<<" "<<" ";
//     }

//     for(int j=2*i-1;){

//     }

// }
// //////////////////////////////////////////////////////////////////////////////////////
int a=10;
int*ptr=&a;
cout<<ptr;
return 0;


}

