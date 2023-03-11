// #include<cstdlib>
// #include<cstdio>
// #include<iostream>
// #include<bitset>
// using namespace std;
// int main(void){
//   //bitset
//   string str="10111";
//   bitset<5>b1(str);
//   cout<<b1<<endl;
//   for(int i=0;i<(int)b1.size();i++)
//     cout<<b1[i]<<" ";
//   bitset<10>b2(30);
//   bitset<3>b3(0);
//   cout<<endl<<b2<<endl;
//   bool flag=b1.any();
//   cout<<flag<<endl;
//   flag=b3.none();
//   cout<<flag<<endl;
//   cout<<b2.count()<<endl;//4
//   cout<<b1.test(3);//0
//   b1.set(3);
//   cout<<endl<<b1.test(3)<<endl;//1
//   b1.reset();
//   cout<<b1.any()<<endl;//0
//   b1.flip();
//   cout<<b1.count()<<endl;
//   unsigned long a=b1.to_ulong();
//   cout<<"b1.size()="<<b1.size()<<endl;//64
//   cout<<b1<<" "<<a<<endl;
//   return EXIT_SUCCESS;
// }
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//bool cmp(int x,int y);
struct Student{
  string name;
  int score;
};
bool cmp(Student x,Student y);
int main(void){
  // //数组从小到达排列，vector 从达到小排列
  // int arr[]={4,2,0,4,6,8,10,9};
  // int sz=sizeof(arr)/sizeof(arr[0]);
  // sort(arr,arr+sz);
  // for(int i=0;i<sz;i++)
  //   cout<<arr[i]<<" ";//0 2 4 4 6 8 9 10
  // cout<<endl;
  // vector<int>v(10);
  // for(int i=0;i<(int)v.size();i++)
  //   cin>>v[i];
  // sort(v.begin(),v.end(),cmp);
  // for(int i=0;i<(int)v.size();i++)
  //   cout<<v[i]<<" ";
  // cout<<endl;
  //排序结构体数组
  vector<Student>stu(3);
  for(int i=0;i<(int)stu.size();i++){
    cout<<"name:";
    cin>>stu[i].name;
    cout<<"score:";
    cin>>stu[i].score;
  }
  sort(stu.begin(),stu.end(),cmp);
  for(int i=0;i<(int)stu.size();i++){
    cout<<"name:"<<stu[i].name<<" "<<"score:"<<stu[i].score<<endl;
  }
  return EXIT_SUCCESS;
}
// bool cmp(int x,int y){
//   return x>y;
// }
bool cmp(Student x,Student y){
  if(x.score==y.score)
    return x.name<y.name;
  else{
    return x.score>y.score;
  }
}
