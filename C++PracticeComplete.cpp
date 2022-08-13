#include<iostream>
#include<cmath>
#include<conio.h>
#include<fstream>
using namespace std;

// PROGRAM TO ADD 2 NUMBERS!
// int main(){
//     int a,b,c;
//     cout<<"Enter any two number : ";
//     cin>>a>>b;
//     c=a+b;
//     cout<<"the sum of both of these numbers i.e "<<a<<"+"<<b<<" is: "<<c;
//     return 0;
// }

// PROGRAM TO DISPLAY YOUR NAME!

// int main(){
//     string name;
//     cout<<"Enter your name: ";
//     getline(cin,name);
//     cout<<"Hello Mr./Mrs. "<<name;
//     return 0;
// }

// AREA OF A TRIANGLE!

// int main() {
//     float b,h,area;
//     cout<<"Enter the base of the triangle : ";
//     cin>>b;
//     cout<<"enter the height of the triangle : ";
//     cin>>h;
//     area=(b*h)/2;
//     cout<<"So, the area of the trianlge required is : "<<area;
//     return 0;
// }

// SUM OF FIRST N NATURAL NUMBERS!

// int main(){
//     int n, ans;
//     cout<<"Enter the number of first n natural numbers you want: ";
//     cin>>n;
//     ans = n*(n+1)/2;
//     cout<<"The answer is : "<<ans;
// }

// ROOTS OF QUADRATIC EQUATION!

// int main(){
//     int a,b,c,r1,r2;
//     cout<<"Enter the values of a,b and c respectively : ";
//     cin>>a>>b>>c;
//     r1= (-b+sqrt(b*b-4*a*c))/(2*a);
//     r2= (-b-sqrt(b*b-4*a*c))/(2*a);
//     cout<<"So, the roots of the given quadratic equations are: "<<r1<<", "<<r2;
// }

// OVERFLOW

// int main() {

//     char a=127;
//     ++a;
//     cout<<(int)a;   //Here, a will be -128 because of overflowing, just like a clock goes back to last number and vice verse
//     return 0;
// }

// PROGRAM TO CALCULATE AREA OF CIRCLE 

// int main(){

//     int r,area;
//     cout<<"Enter the radius of the circle : ";
//     cin>>r;
//     area=3.14*(r*r);
//     cout<<"The area of the circle is "<<area;
//     return 0;
// }

// PROGRAM TOO FIND GREATEST OF TWO NUMBERS!

// int main(){

//     int x,y;
//     cout<<"Enter any two numbers : ";
//     cin>>x>>y;
//     if (x>y)
//     {
//         cout<<x<<" is greater than "<<y;
//     }

//     else
//     {
//         cout<<x<<" is less than "<<y;

//     }
    
//     return 0;
// }

//TWO NUMBERS FOR DIVIDING AND CHECK IF THEIR REMAINDER IS ZERO

// int main(){

//     int x,y;
//     cout<<"Enter any two numbers : ";
//     cin>>x>>y;
//     if (x%y==0)
//     {
//         cout<<"Their remainder is zero.";
//     }
//     else
//     {
//         cout<<"Their remainder in not zero.";
//     }


//     return 0;
// }

// PROGRAM TO FIND THE AGE

// int main(){

//     int x;
//     cout<<"Enter your age : ";
//     cin>>x;
//     if (x>18 && x<=50)
//     {
//         cout<<"You are not old.";
//     }
//     else if (x<=18)
//     {
//         cout<<"You are a kid, kiddo watch pogo.";
//     }
    
//     {
//         cout<<"You are old.";
//     }
    
//     return 0;
// }


// PROGRAM TO FIND MAX OF THREE NUMBERS!

// int main(){

//     int x,y,z;
//     cout<<"Enter any three numbers : ";
//     cin>>x>>y>>z;
//     if (x>y && x>z)
//     {
//         cout<<x<<" is the greatest number."
//     }
//     else
//     {
        
        
//     }
    
//     return 0;
// }


// PROGRAM TO FIND THE GRADING SYSTEM OF A STUDENT

// int main(){


//     int maths,science,english,total,average;
//     cout<<"Enter your marks in Maths, Science, English respectively : "<<endl;
//     cin>>maths>>science>>english;
//     total=maths+science+english;
//     average=total/3;
//     if (average>=60)
//     {
//         cout<<"Your Grade is A.";
//     }
//     else if (average>=35 && average<60)
//     {
//         cout<<"Your Grde is B.";
//     }
//     else if (average<35)
//     {
//         cout<<"Your Grade is C.";
//     }
//     return 0;
// }


// SWITCH PROGRAM USING MENU OPTION

// int main(){
//     int option,a,b;
//     cout<<"Menu:-"<<endl;
//     cout<<"1- Add"<<endl<<"2- Sub"<<endl<<"3- Multiply"<<endl<<"4- Divide"<<endl;
//     cin>>option;
//     cout<<"Enter the Numbers to perform your operation : ";
//     cin>>a>>b;
//     switch (option)
//     {
//     case 1:
//         cout<<"Addition of your given numbers is : "<<(a+b);
//         break;
    
//     case 2:
//         cout<<"Subtraction of your given numbers is : "<<(a-b);
//         break;

//     case 3:
//         cout<<"Multiplication of your given numbers is : "<<(a*b);
//         break;

//     case 4:
//         cout<<"Division of your given numbers is : "<<(a/b);
//         break;
    
//     default:
//         cout<<"Invalid number selected.";
//         break;
//     }
//     return 0;
// }


// LOOPS - WHILE LOOP

// int main(){

//     int n,i=0;
//     cout<<"Enter a number : ";
//     cin>>n;
//     while (i<=n)
//     {
//         cout<<i<<endl;
//         i++;
//     }
    
// }


// LOOPS - FOR LOOP

// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     for (int i = 0; i<=n; i++)
//     {
//         cout<<i<<endl;
//     }
    
// }

// MULTIPLICATION TABLE WITH LOOPS

// int main(){
//     int n;
//     cout<<"Enter the number whose table you want : ";
//     cin>>n;

//     for (int i = 1; i <= 10; i++)
//     {
//         cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
//     }
    
// }


// SUM OF FIRST n NATURAL NUMBERS

// int main(){

//     int n, sum;
//      cout<<"Enter the number whose table you want : ";
//      cin>>n;    

//     for (int i = 1; i <= n; i++)
//     {
//         sum=sum+i;
//     }
//     cout<<sum;
//     return 0;
// }


// PROGRAM FOR SUM OF FACTORS OF A NUMBER

// int main(){
//     int n, sum=0;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n%i==0)
//         {
//             cout<<i<<endl;
//             sum=sum+i;
//         }
        
//     }
//     cout<<"Sum of factors = "<<sum;
//     return 0;
//     getch();
// }

// PROGRAM TO FIND LINEAR SEARCH IN AN ARRAY

// int main(){

//     int key;
//     int word[5] = {1,5,2,7,9};
//     cout<<"Enter your number for the linear search : ";
//     cin>>key;
//     for (int i = 0; i < 5; i++)
//     {
//         if (word[i]==key)
//         {
//             cout<<i<<endl;
//         }
//     }
    
// }


// PROGRAM FOR PATTERN DRAWING

// int main(){

   
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (i+j>=3)
//             {
//                 cout<<"*"<<" ";
//             }
//             else
//             {
//                 cout<<" "<<" ";
//             }
            
            
//         }
//         cout<<endl;
//     }
// }


// PROGRAM TO FIND THE SUM OF N NUMBERS

// int main(){
//     int sum=0, average,n,x;
//     cout<<"Enter the number of numbers : ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"Enter your number : ";
//         cin>>x;
//         sum+=x;
//     }

//     cout<<sum;
    
// }


// PROGRAM FOR SUM OF TWO MATRICES

// int main(){
//     int A[2][2] = {1,2,9,4};
//     int B[2][2] = {7,8,9,1};
//     int C[2][2];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             C[i][j]= A[i][j] + B[i][j];
           
//         }
        
//     }for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             cout<<C[i][j]<<" ";
           
//         }
//         cout<<endl;
//     }
    
// }


// PROGRAM TO FIND THE MULTIPLICATION OF TWO MATRIX


// int main(){
//     int A[10][10], B[10][10], mul[10][10], r1, c1, r2, c2;
//     cout<<"Enter the rows and columns for first matrix : ";
//     cin>>r1>>c1;
//     cout<<"Enter the rows and columns for second matrix : ";
//     cin>>r2>>c2;
//     if (r2!=c1)
//     {
//         cout<<"Not possible";
//         return 0;
//     }
//     else
//     {
//         for (int i = 0; i < r1; ++i)
//         {
//             for (int j = 0; j < c1; ++j)
//             {
//                 cout<<"Enter the number for first matrix with position A"<<i+1<<j+1<<" : ";
//                 cin>>A[i][j];
//             }
            
//         }
//         for (int i = 0; i < r2; ++i)
//         {
//             for (int j = 0; j < c2; ++j)
//             {
//                 cout<<"Enter the number for second matrix with position B"<<i+1<<j+1<<" : ";
//                 cin>>B[i][j];
//             }
            
//         }
//         for (int i = 0; i < r1; ++i)
//         {
//             for (int j = 0; j < c2; ++j)
//             {
//                 mul[i][j]=0;
//                 for (int k = 0; k < c1; ++k)
//                 {
//                  mul[i][j] += A[i][j] * B[i][j];   
//                 }
                
//             }
            
//         }
//         for (int i = 0; i < r1; ++i)
//         {
//             for (int j = 0; j < c2; ++j)
//             {
//                 cout<<mul[i][j]<<" ";
//             }

//             cout<<endl;
//         }
        
        
//     }
    

// }


// PROGRAM TO FIND LINEAR SEARCH USING FUNCTIONS 

// int search( int A[], int key, int a)
// {
//     for (int i = 0; i < a; i++)
//     {
//         if (key==A[i])
//         return i;
//     }
// }

// int main(){
//     int k;
//     int A[] ={1,4,7,8,3,9,4};
//     cout<<"Enter the number you want to search in the array : ";
//     cin>>k;
//     int index = search(A,k,7);
//     cout<<index;
// }


// PROGRAM TO FIND AREA AND PERIMETER OF A TRIANGLE USING POINTER AND CLASS

// class rectangle
// {
// public:
//     int l,b;
//     int area(){
//         return (l*b);
//     }
//     int perimeter(){
//         return 2*(l+b);
//     }
// };

// int main(){
//     rectangle *p;
//     p = new rectangle;
//     p->l=10;
//     p->b=5;
//     cout<<p->area();

// }

//   *****OR WE CAN USE ACCESSOR AND MUTATOR ALSO*****

// class rectangle 
// {
//     private:
//     int length;
//     int breadth;

//     public:
//     // set functions are the functions we use in class to give any variable the value user wanna give
//     // without doing any mistakes like -length must not be possible
//     // set functions are also known as mutators
//     int setLength(int l){
//         if (length>0)
//         {
//             length = l;
//         }
//         else{
//             length = 0;
//         }
//     }
//     int setbreadth(int b){
//         if (breadth>0)
//         {
//             breadth = b;
//         }
//         else{
//             breadth = 0;
//         }
//     }

//     // get functions are used to know the value of any variable
//     // get functions are known as accessors

//     int getLength(){
//         return length;
//     }
//     int getbreadth(){
//         return breadth;
//     }
// };

// int main(){
//     rectangle *p;
//     p = new rectangle;
//     p->setLength(10);
//     p->setbreadth(5);
//     cout<<p->getLength()<<endl;
//     cout<<p->getbreadth();
// }



//  PROGRAM TO FIND EVALUATE STUDENTS MARKS

// class education
// {
//     private:
//     int Rollno;
//     int Name;
//     int maths,science,cse;

//     public:
//     int setMarks(int m, int s, int c){
//         maths = m;
//         science = s;
//         cse = c;
//     }

//     char setName(int n){
//         Name = n;
//     }
    
//     int setRollno(int r){
//         Rollno = r;
//     }

//     int totalmarks(){
//         return (maths+science+cse);
//     }

//     char grade(){
//         if (totalmarks()>250)
//         {
//             return 'A';
//         }
//         else
//         {
//             return 'B';
//         }
        
        
//     }
// };

// int main(){
//     int q,w,e,r;
//     string naam;
//     cout<<"Enter your rollNo: ";
//     cin>>r;
//     cout<<"Enter your Name: ";
//     cin>>naam;
//     cout<<"Enter your marks in maths: ";
//     cin>>q;
//     cout<<"Enter your marks in science: ";
//     cin>>w;
//     cout<<"Enter your marks in cse: ";
//     cin>>e;

//     education *p;
//     p= new education;
//     p->setMarks(q,w,e);
//     p->setRollno(r);
//     cout<<p->totalmarks()<<endl;
//     cout<<p->grade()<<endl;
// }


//  PROGRAM TO ADD TO COMPLEX NUMBERS

// class Complex
// {
// private:
//     int real;
//     int img;

// public:
//     Complex(int r=0, int i=0){
//         real=r;
//         img=i;
//     }
//     void display(){
//         cout<<real<<" + "<<img<<"i"<<endl;
//     }
//     Complex operator+(Complex c){
//         Complex temp;
//         temp.real = real + c.real;
//         temp.img = img + c.img;
//         return temp;
//     }
    
// };

// int main(){
//     Complex c1(2,3), c2(5,4), c3;
//     c3 = c1+c2;
//     c3.display();
// }


// PROGRAM FOR INHERITANCE 

// class Employee
// {
//     private:
//     int eid;
//     string name;

//     public:
//     Employee(int e, string n){
//         eid=e;
//         name=n;
//     }
//     int getEmployeeid(){
//         return eid;
//     }
//     string getEmployeeName(){
//         return name;
//     }
// };
// class FullTimeEmployee:public Employee
// {
//     private:
//     int salary;

//     public:
//     FullTimeEmployee(int e, string n, int s):Employee(e,n)
//     {
//         salary=s;
//     }
//     int getSalary(){
//         return salary;
//     }
// };
// class PartTimeEmployee:public Employee
// {
//     private:
//     int wage;

//     public:
//     PartTimeEmployee(int e,string n, int w):Employee(e,n)
//     {
//         wage=w;
//     }
//     int getWage(){
//         return wage;
//     }
// };

// int main(){
//     int x,q;
//     string y;

//     cout<<"Enter your employee id : ";
//     cin>>x;
//     cout<<"Enter your name : ";
//     cin>>y;
//     cout<<"Are you a 1- Full Time or 2- Part Time Employee : ";
//     cin>>q;
//     cout<<"Your answer is "<<q<<endl;

//     if (q==1)
//     {
//         FullTimeEmployee p1(x,y,500);
//         cout<<"Full Time Employee salary of "<<p1.getEmployeeName()<<" is "<<p1.getSalary()<<endl;
//     }
//     else if (q==2)
//     {
//         PartTimeEmployee p2(x,y,200);
//         cout<<"Part Time Employee salary of "<<p2.getEmployeeName()<<" is "<<p2.getWage()<<endl;
//     }
//     else
//     {
//         cout<<"Invalid answer!";
//     }
// }


// PROGRAM FOR FILE HANDLING

// int main(){
//     ofstream outfile("firstfile", ios::trunc);
//     outfile<<"Hello bhaiiiii ki haal hai";
//     outfile.close();
//     ifstream infile;
//     infile.open("firstfile");
//     if (!infile.is_open())
//     {
//         cout<<"Cant open the file";
//     }
//     string str;
//     infile>>str;
//     cout<<str;
// }


// PROGRAM FOR LAMBDA EXPRESSION

// int main(){
//     auto a = [](int x,int y){return x+y; }(10,5);
//     cout<<a;
// }



// PROGRAM TO FIND (a,b) WHOSE SUM IS EQUAL TO k IN AN ARRAY


// int main(){
//     int A[8] = {5,7,8,13,1,6,20,21};
//     int k;
//     cin>>k;
//     for (int i = 0; i < k; i++)
//     {
//         for (int j = 0; j<k; j++)
//         {
//             if (A[i]==k-A[j]  &&  A[i]<A[j])
//             {
//                 cout<<A[i]<<","<<A[j]<<endl;
//             }
            
//         }
        
//     }
    
// }




