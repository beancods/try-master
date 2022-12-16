#include<iostream>
#include<vector>
using namespace std;

//  int main()
//  {
//     int n;
//     cout<<"enter the how many elements you want to use : ";
//     cin>>n;
//     vector<int> v;
//         for(int i =0;i<n;i++)
//         {
//             int ele;
//             cin>>ele;
//             v.push_back(ele);
            
//         }
//         // v.insert(v.end()-2,8);
//         v.erase(v.begin()+2);

//         int x=v.size();
//         for(int i=0;i<x;i++)
//         {
            
//             cout<<v[i]<<"  ";

//         }cout<<endl;
      
//     return 0;
//  }

    int main()
    {
        vector<int> r(6);
        for(int i = 0;i<6;i++)
        {
            cin>>r[i];
        }
        int occrance=0;
        int ele;
        cout<<"enter the one sanme no : ";
        cin>>ele;
        for(int i = 0;i<r.size();i++)
        {
            if(r[i]==ele)
            {
                occrance=i;
                break;
            }
            
        }cout<<"occrance = "<<occrance<<endl;
        return 0;
    }