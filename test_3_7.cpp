// #include<cstdio>
// #include<cstdlib>
// #include<iostream>
// using namespace std;
// void func(int n);
// int main(int argc,char* argv[]){
//   int a=atoi(argv[2]);
//   func(a);
//   cout<<"a="<<a<<endl;
//   return EXIT_SUCCESS;
// }
// void func(int n){
//   n=100;
//   cout<<"n="<<n<<endl;
// }
#include<cstdlib>
#include<cstdio>
#include<iostream>
using namespace std;
#include<vector>
int main(void){
  vector<int>v1(3,3);
  cout<<v1.size()<<endl;
  v1.resize(5);
  cout<<v1.size()<<endl;
  v1.resize(10,1);
  for(int i=0;(size_t)i<v1.size();i++)
    cout<<"v1["<<i<<"]="<<v1[i]<<" ";
  cout<<endl;
  v1.push_back(6);
  v1.pop_back();
   for(int i=0;(size_t)i<v1.size();i++)
    cout<<"v1["<<i<<"]="<<v1[i]<<" ";
   cout<<endl;
  return EXIT_SUCCESS;
}
