#include<iostream>
using namespace std;

// class raj
// {
//     public:
//     void taj()
//     {
//         cout<<"a"<<endl;
//     }
//     void taj(int a)
//     {
//         cout<<"b"<<endl;
//     }
//     void taj(double p)
//     {
//         cout<<"c";
//     }
// };

// int main()
// {
//     raj d;
//     d.taj();
//     d.taj(4);
//     d.taj(6.2);
// }



// int main()
// {
//     int a,b,c,ch,ext;
//     do{
//         cout<<"enter the value of a and b : ";
//         cin>>a>>b;
        
//         cout<<"press 1 for sum  "<<endl;
//         cout<<"press 2 for subtraction "<<endl;
//         cout<<"press 3 for multiplication "<<endl;
//         cout<<"press 4 for division "<<endl;

//         cout<<"enter your choice : ";
//         cin>>ch;
//         switch(ch)
//         {
//             case 1 :c=a+b;
//             cout<<"Ans = "<<c<<endl;
//             break;
//             case 2 :c=b-a;
//             cout<<"Ans ="<<c<<endl;
//             break;
//             case 3 :c=a*b;
//             cout<<"Ans ="<<c<<endl;
//             break;
//             case 4 :c=b/a;
//             cout<<"Ans = "<<c<<endl;
//             break; 

//             default:{
//                 cout<<"try again";
//                 break;
//             }

//         }
//         cout<<"for restart press 1 : ";
//         cin>>ext;

//     }while (ext==1);

//     return 0;
// }



// int main()
// {
// int a,b,c,ch,ext;
//     do{
//         cout<<"enter the value of a and b : ";
//         cin>>a>>b;
        
//         cout<<"press 1 for sum  ";
//         cout<<"press 2 for subtraction ";
//         cout<<"press 3 for multiplication ";
//         cout<<"press 4 for division ";

//         cout<<"enter your choice : ";
//         cin>>ch;
//         switch(ch)
//         {
//             case 1 :c=a+b;
//             cout<<"Ans = "<<c<<endl;
//             break;
//             case 2 :c=b-a;
//             cout<<"Ans ="<<c<<endl;
//             break;
//             case 3 :c=a*b;
//             cout<<"Ans ="<<c<<endl;
//             break;
//             case 4 :c=b/a;
//             cout<<"Ans = "<<c<<endl;
//             break; 

//             default:{
//                 cout<<"try again";
//                 break;
//             }

//         }
//         cout<<"for restart press 1 : ";
//         cin>>ext;

//     }while (ext==1);
// }


    // int main()
    // {
    //     int n,i,f=0,t=1,p;
    //     cout<<"Enter the value of n : "; 
    //     cin>>n;  // taking value of fibonacci

    //     for(i=0; i<n; i++) 
    //     {
    //         p=f+t;
    //         cout<<p<<endl;
    //         f=t;
    //         t=p;
    //     }
    //     return 0;
    // }

    

 


// class Fibonacci // Creating class for Fibonacci
// {    
//     public:
//     int a, b, c;         // Taking the integers as public
//     void fib(int);
// };
 
// void Fibonacci::fib(int n)
// {
    
//     a = 0;
//     b = 1;
   
 
//     for (int i = 0; i < n; i++) // Using for loop for continuing the Fibonacci series
//      {  
            
//     cout <<c<<""<<endl;     
//      c = a + b;  // Addition of the previous two terms 
//      a = b;
//      b = c;
//     }
// }
 

// int main()
// {
//     int n;
//     cout<<"enter the Fibonacci value you want : ";
//     cin>>n;
//     Fibonacci fib;
//     fib.fib(n);
//     return 0;
// }


// int main()
// {
//     int x=20;
//     int y=50;
//     cout<<"X*Y="<<x*y<<endl;
//     return 0;
// }

// int main()
//     {
//         cout<<"U "<<(int)'U'<<endl;
//         return 0;
//     }


    // int main()
    // {
    //     int x;
    //     cout<<"enter the value for cube : ";
    //     cin>>x;
    //     cout<<"CUBE ="<<x*x*x<<endl;
    //     return 0;
    // }


    // int main()
    // {
    //     cout<<"SIZE OF THE DATA TYPE : "<<endl;
    //     cout<<"int"<<sizeof(int)<<endl;
    //     cout<<"double"<<sizeof(double)<<endl;
    //      cout<<"char"<<sizeof(char)<<endl;
    //     cout<<"float"<<sizeof(float)<<endl;
        


    //     return 0;
    // }

    // class demo
    // {
    //     int a,b,c;
    //     public:
    //     void get();
    //     void show();
    // };
    // void demo::get()
    // {
    //     cout<<"enter the value of a and b : ";
    //     cin>>a>>b;
    // }
    // void demo::show()
    // {
    //     c=a;
    //     a=b;
    //     b=c;
    //     cout<<"A="<<a<<endl;
    //     cout<<"B="<<b<<endl;
    //     cout<<"C="<<c<<endl;
    // }
    // int main()
    // {
    //     demo d1;
    //     d1.get();
    //     d1.show();
    //     return 0;
    // }


    // int main()
    // {
    //     int a=0,b=10;
    //     do
    //     {
    //         if(a++ < --b){
    //             continue;
    //         }
    //     }while(a<8);
    //     cout<<"A="<<a<<endl;
    //     cout<<"B="<<b<<endl;
    //     return 0;
    // }

    // int main()
    // {
    //     int a[10],i;
    //     for(i=0;i<10;i++)
    //     {
    //         cout<<"values = "<<endl;
    //         cin>>a[i];
            
    //     }
    //     return 0;
    // }
    
    // class ardemo
    // {
    //     int a[10],i,sm;
    //     public:
    //     void gum()
    //     {
    //         for(i=0;i<10;i++)
    //         {
    //             cout<<"value = ";
    //             cin>>a[i];
    //         }
    //     }
    //     void sum()
    //     {
    //         sm=0;
    //         for(i=0;i<10;i++)
    //         {
    //             sm=sm+a[i];
    //         }
    //       cout<<"Sum = "<<sm<<endl;  
    //     }
    // };
    
    // int main()
    // {
    //     ardemo d1;
    //     d1.gum();
    //     d1.sum();
    //     return 0;
    // }
    
    // class demo          // function overloading
    // {
    //     public:
    //     int sum(int a,int b)
    //     {
    //         return (a+b);
    //     }
    //     float sum(float a , float b)
    //     {
    //         cout<<"float sum  \n";
    //         return (a+b);
    //     }
    //     long sum(long a,long b)
    //     {
    //         return (a+b);
    //     }
    //     double sum(double a,double b)
    //     {
    //         return (a+b);
    //     }    
    // };


    // int main()
    // { 
    //     demo d1;
    //     cout<<"sum = "<<d1.sum(55,452)<<endl; // calling int function
    //     cout<<"sum = "<<d1.sum(4.44f,5.44f)<<endl; // calling float function
    //     cout<<"sum = "<<d1.sum(4685555658.3265585,48754522365.365455521)<<endl; // double
    //     cout<<"sum = "<<d1.sum(456789456,12345687);
    //     return 0;
    // }

    // class demo 
    // {
    //     public: 
    //     static int a;
    //     void get()
    //     {
    //         cout<<"Enter the value of a : ";
    //         cin>>a;
    //     }
    //     void show()
    //     {
    //     cout<<" inn A = "<<a<<endl;
    //     }
    // };
    // int demo::a;
    // int main()
    // {
    //     demo d1,d2,d3;
    //     d1.get();
    //     d2.get();
    //     d3.get();
    //     cout<<" take A = "<<demo ::a<<endl;
    //     d1.show();
    //     d2.show();
    //     d3.show();
    //     return 0;
    // }

    // int factorial(int n)     // passing recusrion
    // {
    //     if(n==0)
    //     {
    //         return 1;     
    //     }
    //     return n * factorial(n-1);  //  the factorial value  
    // }
    // int main()
    // {
    //     int a;   
    //     cout<<"enter the factorial you want : ";
    //     cin>>a;  // taking value for factorail
    //     cout<<"factorial of "<<a<<" is"<<factorial(a)<<endl;

    //     return 0;
    // }

    // int main()
    // {
    //     int n,sm=0,r;
    //     cout<<"enter the value : ";
    //     cin>>n;
    //     while(n>0){
    //         r=n%10;
    //         n=n/10;
    //         sm=sm+r;
    //     }
    //     cout<<"sum="<<sm;
    //     return 0;
    // }


//    int main()
//    {
//     int i;
    
//     for(i=0;i<=500;i++)
//     {
//         cout<<i<<endl;
//     }
//      return 0;
//    }


//     class patterndemo
//     {
//         public:
//         int i,j,k,n,m;
//         void take();
//         void get();
//     };
//     void patterndemo::take()
//     {
//         cout<<"Enter the value of m n  : ";
//         cin>>m>>n;

//     }
//     void patterndemo::get()
//     {
//         for(i=1;i<=m;i++)
//         {
//             for(j=1;j<=n;j++)
//             {
//                 if(i==1 || j==1 || i==m || j==n)
//                 {
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//            cout<<endl;
//         }
            
   
//     }
    
//    int main()
//    {
//     patterndemo p1;
//     p1.take();
//     p1.get();
//     return 0;
//    }


    // int main()
    // {
    //     int num1,num2;
    //     cout<<"enter the row columbs and rows : ";
    //     cin>>num1>>num2;
    //     for(int columbs=1;columbs<=num1;columbs++)
    //     {
    //         for(int rows=1;rows<=num2;rows++)
    //         {
    //             if(columbs==1 || rows==1 || columbs==num1 || rows==num2 )
    //             {
    //                 cout<<"*";
    //             }else{
    //                 cout<<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    //    return 0;
    // }
    class matrix
    {
        public:
        int a[10][10],b[10][10],mul[10][10],x,y,i,j,k;    
        void take();
        void get();
    };
        void matrix::take()
        {
            cout<<"enter the number of row=";    
            cin>>x;    
            cout<<"enter the number of column=";    
            cin>>y;    
        }
        void matrix::get()
        {
            cout<<"enter the first matrix element=\n";    
        for(i=0;i<x;i++)    
        {    
        for(j=0;j<y;j++)    
        {    
        cin>>a[i][j];  
        }    
        }    
        cout<<"enter the second matrix element=\n";    
        for(i=0;i<x;i++)    
        {    
        for(j=0;j<y;j++)    
        {    
        cin>>b[i][j];    
        }    
        }    
        cout<<"multiply of the matrix=\n";    
        for(i=0;i<x;i++)    
        {    
        for(j=0;j<y;j++)    
        {    
        mul[i][j]=0;    
        for(k=0;k<y;k++)    
        {    
        mul[i][j]+=a[i][k]*b[k][j];    
        }    
        }    
        }        
        for(i=0;i<x;i++)    
        {    
        for(j=0;j<y;j++)    
        {    
        cout<<mul[i][j];    
        }    
          cout<<endl; 
        }    
        }
     int main()
     {
        matrix m1;
        m1.take();
        m1.get();
        return 0;
     }