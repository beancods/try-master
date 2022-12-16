#include<iostream>
using namespace std;

                                                // FIND GR IN 5 CLASIC WAY 
// class Demo
// {
//     int greater[4];
//     public:
//     void getelement()
//     {
//         cout<<"enter the integer value : "<<endl;
//         for(int i=0;i<5;i++)
//         {
//             cin>>greater[i];
//         }
     
//     }
//     void show()
//         {
//             if(greater[0]>greater[1]&&greater[0]>greater[2]&&greater[0]>greater[3]&&greater[0]>greater[4])
//             {
//                 cout<<"greater 0 = "<<greater[0];
//             }else 
//             if(greater[1]>greater[2]&&greater[1]>greater[3]&&greater[0]>greater[4])
//             {
//                 cout<<"greater 1 = "<<greater[1];
//             }else 
//             if(greater[2]>greater[3]&&greater[2]>greater[4])
//             {
//                 cout<<"greater 2 = "<<greater[2];
//             }else 
//             if(greater[3]>greater[4])
//             {
//                 cout<<"greater 3 = "<<greater[3];
//             }else
//             {
//                 cout<<"greater 4 = "<<greater[4];
//             }
//         }
// };

//     int main()
//     {
//         Demo d1;
//         d1.getelement();
//         d1.show();
//         return 0;
//     }

                                     // find greater in 5 
// class GR
// {
//     int array[4];
//     public:
//     void get()
//     {
//         for(int i=0;i<5;i++)
//         {
//             cin>>array[i];
//         }
//     } 
//     int max=array[0];
//     void take()
//     {
//         for(int j=0;j<5;j++)
//         {
//             if(array[j]>max)
//             {
//                 max=array[j];
//             }
//         }
//     }
   
//    void show()
//    {
//     cout<<"max "<<max<<endl;
//    }

// };
// int main()
// {
//     GR g1;
//     g1.get();
//     g1.take();
//     g1.show();

//     return 0;
// }


class Linear
{
    int lin[5];
    int ans;
    int j;
    int n;
    public:
    void element()
    {
        for(int i=0;i<6;i++)
        {
            cin>>lin[i];

        }
    }
    int no=10;
    void showelement()
    {
       for( j=0;j<6;j++)
       {
            if(no==lin[j])
            {
                ans=no;
                break;
            }    
          
       } 
       cout<<"ans  "<<j<<"="<<ans<<endl;  
    }
    
};
int main()
{
    Linear l1;
    l1.element();
    l1.showelement();
    return 0;
}