/*Implement a C++ program for processing the details regarding an organization.
 Two classes ‘Supervisor’ and ‘Staff’ are derived, from the class ‘Employee’. 
 There is a class named ‘organization’. The class ‘organization’ is derived from two classes ‘Supervisor’ and ‘Staffs’. 
 Each and every class has a constructor. Using virtual base class print the details of the organization, supervisor, and other staff without any repetition.
 USE VIRTUAL BASE CLASS WITH MULTIPATH INHERITANCE*/
#include<iostream>
using namespace std;
#include<cstring>
class Employee{
   public:
   string name;
   string desig;
   int id;
   int salary;
   void setdata(string n, string d, int i, int s){
      name = n;
      desig = d;
      id = i;
      salary = s;
   }
   void displaydata(){
      cout<<name<<endl;
      cout<<desig<<endl;
      cout<<id<<endl;
      cout<<salary<<endl;
   }
};
class Supervisor:public Employee{
   public:
   
};
class Staff:public Employee{
   public:
   //
};
class Organisation: public Supervisor, public Staff{
   public:
   string loc;
   void setloc(string l){
      loc = l;
   }
   void getloc(){
      cout<<loc<<endl;
   }
};
int main(){
   Organisation obj;
   string loc;
   getline(cin, loc);
   obj.setloc(loc);
   string name1,name2,desig1,desig2;
   int id1,id2,sal1,sal2;
   getline(cin,name1);
   getline(cin,desig1);
   cin>>id1;
   cin>>sal1;
   getline(cin,name2);
   getline(cin,desig2);
   cin>>id2;
   cin>>sal2;
   Supervisor s;
   s.setdata(name1,desig1,id1,sal1);
   Staff S;
   S.setdata(name2,desig2,id2,sal2);
   obj.getloc();
   s.displaydata();
   S.displaydata();
}
