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

    // int main()
    // {
    //     vector<int> r(6);
    //     for(int i = 0;i<r.size();i++)
    //     {
    //         cin>>r[i];
    //     }
    //     int occrance=0;
    //     int ele;
    //     cout<<"enter the one sanme no : ";
    //     cin>>ele;
    //     int count;
    //     for(int x:r)
    //     {
    //         if(x==ele)
    //         {
    //             occrance++;
    //         }
    //     }
        
    //     cout<<"occrance = "<<occrance<<endl;
    //     return 0;
    // }

    int main()
    {
        vector<int> v(15);
        for(int i=0;i<v.size();i++)
        {
            cin>>v[i];
        }
        int count=0;
        int x;
        cout<<"enter no more than you want  : ";
        cin>>x;
        for(int ele:v)
        {
            if(x<ele)
            {
                count++;
            }
        }
        cout<<"large no : "<<count<<endl;

        return 0;
    }