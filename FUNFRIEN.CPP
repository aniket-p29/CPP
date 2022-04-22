#include<iostream.h>
#include<conio.h>
class two;
class one
{
   int a;

   public :
      void setA (int x)
      {
      a=x;
      }
friend int add(one,two);
};
class two
{
   int b;

   public:
      void setB (int x)
      {
	 b=x;
      }
friend int add (one,two);
};
int add(one p,two q)
{
   return p.a+q.b;
}
void main()
{
   clrscr();
   int sum, a,b;
   one obj1;
      cout<<"\nEnter value of A: ";
      cin>>a;
      obj1.setA(a);
   two obj2;
      cout<<"\nEnter value of B:";
      cin>>b;
      obj2.setB(b);
      sum=add(obj1,obj2);
      cout<<"\nAddition of A+B :"<<sum;
   getch();
}





























