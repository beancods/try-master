#include<iostream>
using namespace std;

// class xyz
// {
//     int a,b,c;
//     public:
//     void add();
//     void ans();
//     void elseiff();
// };
// void xyz::add()
// {
//     cout<<"valur of a and b : ";
//     cin>>a>>b;
// }
// void xyz::ans()
// {
//     c=a+b;
//     cout<<"C = "<<c<<endl;
// }
// void xyz::elseiff()
// {
//     int x=1000;
//     if(x>=c)
//     {
//         int n;
//         cout<<"enter the value of n : ";
//         cin>>n;
//         for (int i = 1; i<=n; i++)
        
//         if(i % 2 == 0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
// }

// int main()
// {
//     xyz raj;
//     raj.add();
//     raj.ans();
//     raj.elseiff();
//     return 0;
// }
    

//  int main()
//  {
//     int a,b,c,ch,ext;
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

//      return 0;
//  }



    // int main()
    // {
    //     int r,l,b,s,ch,area;
    //     float pi=3.14;

    //     cout<<" press '1' for area of circle"<<endl;
    //     cout<<" press '2' for area of rectangle"<<endl;
    //     cout<<" press '3' for area of square"<<endl;
        
    //     cout<<"enter the no : ";
    //     cin>>ch;
    //     switch(ch)
    //     {
            
    //         case 1 :cout<<"enter the radius value : ";
    //         cin>>r; 
    //         area=pi*r*r;
    //         cout<<"Area of circle = "<<area;
    //         break;
    //         case 2 :cout<<"enter the value of lenght and breath : ";
    //         cin>>l>>b;
    //         area=l*b;
    //         cout<<"Area of rectangle = "<<area;
    //         break;
    //         case 3 :cout<<"enter the value of side : ";
    //         cin>>s;
    //         area=s*s;
    //         cout<<"Area of circle = "<<area;
    //         break;
    //         default : 
    //         {
    //             cout<<"enter the valid no ";
    //         }
    //     }
        

    //     return 0;
    // }


    // int main()
    // {
    //     int n;
    //     cout<<"entet the table no : ";
    //     cin>>n;
    //     cout<<"table of "<<n<<endl;
    //     for(int i=1;i<=10;i++)
    //     {
    //         cout<<n<<"*"<<i<<"="<<n*i<<endl;
    //     }
    //     return 0;
    //}


    // int main()
    // {
    //     int a=100,b=500;
    //     do
    //     {
    //         if(a++ <= b)
    //         {
    //             continue;
    //         }
    //     }while (a<5);
       
    //     cout<<"A = "<<a<<endl;
    //     cout<<"B = "<<b<<endl;
    //     return 0;
    // }

    // int main()
    // {
    //     int a[10],i;
    //     for(i=0;i<10;i++)
    //     {
    //         cout<<"value = ";
    //         cin>>a[i];
    //     }
    //     return 0;
    // }

    
    // int main()
    // {
    //     int apple;
    //     cin>>apple;

    //     cout<<"Apple = "<<apple<<endl;
    //     return 0;
    // }


    // int main()
    // {
    //     int a,b,c;
    //     cout<<"enter the value of a and b : ";
    //     cin>>a>>b;
    //     c=b;
    //     b=a;
    //     a=c;

    //     cout<<"A="<<a<<endl;
    //     cout<<"B="<<b<<endl;
    //     cout<<"C="<<c<<endl;
       

    //     return 0;
    // }


    // class raj
    // {
    //     int a,b,c;
    //     public:
    //     void add()
    //     {
    //         cout<<"enter the value of a and b : ";
    //         cin>>a>>b;
    //         c=a+b;
    //     }
    //     void ans()
    //     {
    //         cout<<"A+B="<<c<<endl;
    //     }
    // };

    // int main()
    // {
    //     raj r1;
    //     r1.add();
    //     r1.ans();
    //     return 0;
    // }


    // class mini
    // {
    //     int a,b,c;
    //     public:
    //     void add();
    //     void ans();
    // };

    // void mini::add()
    // {
    //     cout<<"Enter the value of a and b : ";
    //     cin>>a>>b;
    //     c=a+b;
    // }
    // void mini::ans()
    // {
    //     cout<<"A+B="<<c;
    // }

    // int main()
    // {
    //     mini m1;
    //      m1.add();
    //      m1.ans();
    //     return 0;
    // }


    // int main()
    // {
    //     int n,i,f=0,t=1,p;
    //     cout<<"enter the fibonacchi no u want : ";
    //     cin>>n;
    //     for(i=0;i<n;i++)
    //     {
    //         p=f+t;
    //         cout<<f<<"+"<<t<<"="<<p<<endl;
    //         f=t;
    //         t=p;
    //     }   
    //     return 0;
    // }


    // int fact(int);
    // int main()
    // {
    //     int n,ft;
    //     cout<<"enter the no : ";
    //     cin>>n;
    //     ft=fact(n);
    //     cout<<"factorial ="<<ft<<endl;
    //     return 0;
    // }
    // int fact(int p)
    // {
    //     if(p==0)
    //     {
    //         return 1;
    //     }else 
    //     {
    //         return (p*fact(p-1));
    //     }
    // }


    // int main()
    // {
    //     int n,t,sum=0;
    //     cout<<"enter any integer no :";
    //     cin>>n;

    //     while(n!=0)
    //     {
    //         t=n%10;
    //         sum=sum*10+t;
    //         n=n/10;
    //     }
    //     cout<<"SUM = "<<sum<<endl;
    //     return 0;
    // }
    // int odd(int);
    // int main()
    // {
    //     int n;
        
    //     if(odd(n%2)==1)
    //     {
    //         odd(n);
    //     }
        
    //     return 0;
    // }
    // int odd(int x)
    // {
    //     for(int x=1;x<=20;x++)
    //     {
    //         if(x%2==1)
    //         {
    //             cout<<x<<endl;
    //         }
    //     }
    // }
    
        
        // float cir(int r)
        // {
        //     float cir=2*3.14*r;
        //     return cir;
        // }
        // int main()
        // {
        //    int r;
        //    cout<<"enter the value of radius : ";
        //    cin>>r;
        //    cout<<"circumference of circle : "<<cir(r)<<endl; 
        //     return 0;
        // }

        // int sq(int);
        // int main()
        // {
        //     for(int i=0;i<=10;i++)
        //     {
        //         cout<<"SQUARE ="<<sq(i)<<endl;
        //     }
        //     return 0;
        // }
        // int sq(int squ)
        // {
        //     int square=squ*squ;
        //     return square;
        //  }
        // int fact(int);
        // int main()
        // {
        //     int n;
        //     cout<<"enter no for factorial : ";
        //     cin>>n;
        //     cout<<"FACTORIAL = "<<fact(n);
        //      return 0;
        // }
        // int fact(int p)
        // {
        //     if(p==0)
        //     {
        //         return 1;
        //     }else{
        //         return(p*fact(p-1));
        //     }
        // }
    //     void add()
    //     {
    //       int a,b,c;
    //       cout<<"two no for addition : ";
    //       cin>>a>>b;
    //       c=a+b; 
    //       cout<<"additon = "<<a<<"+"<<b<<"="<<c<<endl; 
    //     }
    //     void sub()
    //     {
    //         int a,b,c;
    //         cout<<"two no for subtraction : ";
    //         cin>>a>>b;
    //         c=b-a;
    //         cout<<"subtraction = "<<b<<"-"<<a<<"="<<c<<endl;
    //     }
    //     void divide()
    //     {
    //         int a,b,c;
    //         cout<<"two no for division : ";
    //         cin>>a>>b;
    //         c=b/a;
    //         cout<<"Divide = "<<b<<"/"<<a<<"="<<c<<endl;
    //     }
    //     void multiplication()
    //     {
    //         int a,b,c;
    //         cout<<"two no for multiplication : ";
    //         cin>>a>>b;
    //         c=a*b;
    //         cout<<"multiplication : "<<a<<"*"<<b<<"="<<c<<endl;
    //     }
    //     void all()
    //     {
    //         add();
    //         sub();
    //         divide();
    //         multiplication();
    //     }
    //    int main()
    //    {
        
    //     void multiplication(void);
    //     multiplication();
    //     //all();
    //     return 0;
    //    }


    
    // int sum()
    // {
    //     int x,y,z;
    //     cout<<"ente two positive integer value : ";
    //     cin>>x>>y;
    //     z=x+y;
    //     //cout<<z;
    //    return z;

    // }
    // int main()
    // {
    //     int num;
    //     num=sum();
    //    // sum();
    //     cout<<"additon = "<<num;
    //     return 0;
    // }
    // int area()
    // {
    //     int r;
    //     cin>>r;
    //     float pi=3.14;
    //     float areaofcir=2*pi*r;
    //     return areaofcir;
    // }
    // int area(int r,float pi)
    // {
    //     float ar=2*pi*r;
    //     return ar;
    // }
    // int main()
    // {
    //     int x;
    //     cout<<"enter the radius = ";
    //     cin>>x;
    //     float y=3.14;
    //     cout<<"area of circle = "<<area(x,y);
    //     return 0;
    // }
    