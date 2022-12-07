#include<stdio.h>

// int fib(int n);
// int main()
// {
//   printf("%d",fib(6));      
// }

// int fib(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;
//     } 

//     int fibn1=fib(n-1);
//     int fibn2=fib(n-2);
//     int fibn=fibn1+fibn2;

//     printf("fib value %d is %d",n,fibn);
//     return fibn;
// }      

//  int xyz(int n);
// int main() {
//     int n;
//     printf("Enter  integer: ");
//     scanf("%d",&n);
//     printf("Factorial of %d = %d", n, xyz(n));
//     return 0;
// }

//  int xyz(int n) {
//     if (n>=1)
//         return n*xyz(n-1);
//     else
//         return 1;
// }


// void data(int, int);
 
// int main()
// {
//    int x, y;
 
//    printf("Enter the value of x and y\n");
//    scanf("%d%d",&x,&y);
 
 
//    data(x, y); 
 
//    printf("\nx = %d\ny = %d\n", x, y);
 
//    return 0;
// }
 
// void data(int a, int b)
// {
//    int temp;
 
//    temp = b;
//    b = a;
//    a = temp;
//     printf(" a = %d\n",a);
//     printf("  b = %d",b);
    
// }



// int main() {

//   int n, reverse = 0, r;

//   printf("Enter no: ");
//   scanf("%d", &n);

//   while (n != 0) {
//     r = n % 10;
//     reverse = reverse * 10 + r;
//     n /= 10;
//   }

//   printf("Reversed no = %d", reverse);

//   return 0;
// }

// int no(int n);

// int main() {

//   int num;
//   printf("enter no : ");
//   scanf("%d", &num);
//   printf("Sum = %d", no(num));
//   return 0;
// }

// int no(int n) {
//   if (n != 0)
//     return n + no(n - 1);
//   else
//     return n;
// }

// void table(int);  
  
// int main()  
// {  
//     int n;  
  
//     printf("enter the value of n ");  
//     scanf("%d", &n);  
//     table(n);  
//     return 0;  
// }  
  
// void table(int n)  
// {  
//     for(int i = 1; i <= 10; i++)  
//     {  
//         printf("%d \n" , n*i );  
//     }  
// }  


// int primeornot(int);
// int main()
// {
//     int n1,prime;
// 	printf("no is prime or not ");
	
//     printf("enter any no : ");
//     scanf("%d",&n1);
//     prime = primeorot(n1);
//    if(prime==1)
//         printf("%d is a prime number\n",n1);
//    else
//       printf("%d is not a prime number",n1);
//    return 0;
// }
// int primeornot(int n1)
// {
//     int i=2;
//     while(i<=n1/2)
//     {
//          if(n1%i==0)
//              return 0;
//          else
//              i++;
//     }
//     return 1;
// }

// int main()
// {
//     int mat1[3][3], mat2[3][3], mat3[3][3], sum=0, i, j, k;
//     printf("Enter matrix element: ");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//             scanf("%d", &mat1[i][j]);
//     }
//     printf("Enter matrix elment: ");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//             scanf("%d", &mat2[i][j]);
//     }

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             sum=0;
//             for(k=0; k<3; k++)
//                 sum = sum + mat1[i][k] * mat2[k][j];
//             mat3[i][j] = sum;
//         }
//     }
//     printf(" result \n");
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//             printf("%d\t", mat3[i][j]);
//         printf("\n");
//     }
   
//     return 0;
// }


