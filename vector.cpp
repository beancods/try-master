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
//     // cout<<"size : "<<y.size();
//     // cout<<"capacity : "<<y.capacity();
//     // y.resize(10);
//     // cout<<" \n size : "<<y.size()<<endl;
//     // cout<<"capacity : "<<y.capacity();
//     return 0;
// }




// void shortzeroandone(vector<int> &v)
// {
//     int count_zero=0;
//     for(int cat:v)
//     {
//         if(cat==0)
//         {
//             count_zero++;
//         }
//         int x=v.size();
//         for(int k =0;k<x;k++)
//         {
//             if(k<count_zero)
//             {
//                 v[k]=0;
//             }else{
//                 v[k]=1;
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout<<"enter the value for loop run : ";
//     cin>>n;
//     vector<int> v;
//     for(int i =0;i<n;i++)
//     {
//         int cat;
//         cin>>cat;
//         v.push_back(cat);
//     }
//     shortzeroandone(v);
//     for(int j =0;j<n;j++)
//     {
//         cout<<v[j]<<"  ";
//     }
//     return 0;
// }
                                /*
                                sort even and odd 
                                */            
    void sortbyparity(vector<int> &v)

    {
        int left_ptr=0;
        int right_ptr=v.size()-1; 
        while(left_ptr<right_ptr)
        {
            if(v[left_ptr]%2==1 && v[right_ptr]%2==0)
            {
                swap(v[left_ptr],v[right_ptr]);
                left_ptr++;
                right_ptr--;
            }
            if(v[left_ptr]%2==0)
        {
            left_ptr++;
        }
        if(v[right_ptr]%2==1)
        {
            right_ptr--;
        }
        }
        
    }
    int main()
    {
    
        vector<int> v;

        for(int i =0;i<6;i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);
        }

        sortbyparity(v);
        
        for(int i = 0;i<6;i++)
        {
            cout<<v[i]<<" ";
        }cout<<endl;

        return 0;
    }