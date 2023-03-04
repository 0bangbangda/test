// #include<stdio.h>
// #include<stdlib.h>
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
// int main(void){
//   int n;
//   cin>>n;
//   // cin>>n;
//   // cout<<"哈娄亚\n";
//   // cout<<n+1<<endl;
//   for(int i=0;i<n;i++)
//     cout<<i<<" ";
//   cout<<endl;
//   return EXIT_SUCCESS;
// }
#include<string>
int main(void){
  // bool flag=true;
  // bool flag2=-1;
  // bool flag3=0;
  // bool flag4=false;
  // cout<<flag<<flag2<<flag3<<flag4<<endl;
  string s1="c.biancheng.net";
  string s2=s1;
  cout<<s1<<endl<<s2<<endl;
  // string s3;
  // getline(cin,s3);
  // string s4=s1+s3;
  // cout<<s4<<endl;
  // cout<<s1.length()<<" "<<s3.length()<<" "<<s4.length()<<endl;
  cout<< s1.substr(2)<<endl<<s1<<endl;
  cout<<s1.substr(0,2)<<endl;
  return EXIT_SUCCESS;
}
