#include<iostream>
#include<vector>
using namespace std;

// void shortzeroandones(vector<int> &y)
// {
//     int count=0;

//     for(int ele:y)
//     {
//         if(ele==0)
//         {
//             count++;
//         }
//     }
//     int x=y.size();
//     for(int i=0;i<x;i++)
//     {
//         if(i<count)
//         {
//             y[i]=0;
//         }else{
//             y[i]=1;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter integer no for how many 0 and 1 have to short : "<<endl;
//     cin>>n;

//     vector<int> y;
//     for(int k=0;k<n;k++)
//     {
//         int ele;
//         cin>>ele;
//         y.push_back(ele);
//     }
//     int j;
//     shortzeroandones(y);
//     for( j=0;j<n;j++)
//     {
//     cout<<y[j]<<"  ";
//     }cout<<endl;
//     cout<<"size : "<<y.size();
//     cout<<"capacity : "<<y.capacity();
//     y.resize(10);
//     cout<<" \n size : "<<y.size()<<endl;
//     cout<<"capacity : "<<y.capacity();
//     return 0;
// }