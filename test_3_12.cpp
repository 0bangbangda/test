#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;
// int main(void){
//   const int n=10;
//   printf("%d\n",n);
//   cout<<n<<endl;
//   int *p=(int*)&n;
//   *p=99;
//   printf("%d\n",n);
//   cout<<n<<endl;
//   return EXIT_SUCCESS;
// }
// int main(void){
//   vector<double>v(10);
//   for(auto i=0;i<(int)v.size();i++)
//     v[i]=i;
//   for(auto it=v.begin();it!=v.end();it++)
//     cout<<*it<<" ";
//   cout<<endl;
//   for(auto i:v)
//     cout<<i<<" ";
//   cout<<endl;
//   for(double &i:v){
//     i=i-1;
//     cout<<i<<" ";
//   }
//   return EXIT_SUCCESS;
// }
#include<string>
int main(void){
  string s1=to_string(12345);
  cout<<s1<<endl;
  string s2=to_string(123.45);
  cout<<s2<<endl;
  cout<<s1+s2<<endl;
  printf("s1+s2=%s\n",(s1+s2).c_str());
  return EXIT_SUCCESS;
}
