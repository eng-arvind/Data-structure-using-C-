#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
int main()
{
  int n;
 cout<<"Enter size of Array:";
 cin>>n;
 int a[n];
 cout<<"Enter the element of Array:\n";
 for(int i=0;i<n;i++)
 cin>>a[i];
 bubbleSort(a,n);
 return 0;
}
