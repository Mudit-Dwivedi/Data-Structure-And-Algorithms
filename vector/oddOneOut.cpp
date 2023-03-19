#include <iostream>
#include<vector>

using namespace std;

int uniqueElement(vector<int>arr){
  int ans = 0;

  for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
  }
  return ans;
}



int main() {
int n;
  cout<<"Enter the Size"<<endl;
  cin>>n;
  vector<int>arr(n);
   cout<<"Enter the Element"<<endl;
  for(int i=0;i<arr.size();i++){
   cin>>arr[i];
  }
  int find = uniqueElement(arr);
  cout<<"uniique elemnet is =" << find <<endl;

 return 0;
}