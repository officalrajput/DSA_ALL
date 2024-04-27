// #include<iostream>
// using namespace std;
// class Ram{
//     public:
//     int weight;
//     int age;
//     string name;

//     void eat()
//     {
//         cout<<"Eating"<<endl;
//     }

//     void Run()
//     {
//         cout<<"Running"<<endl;
//     }
    
// };

//     //Inheritence Showing inherit property of parent to child
//     // class Laxman:public Ram{


//     // };

//      class Laxman:protected Ram{
//        public:
//        void print(){
//         this->eat();
//         this->Run();
//        }

//     };

// int main()
// {
//     Laxman a;
//     a.print();
     
    
// }


// ////protected --->protected

// #include<iostream>
// using namespace std;
// class Ram{
//     protected:
//     int weight;
//     int age;
//     string name;

//     void eat()
//     {
//         cout<<"Eating"<<endl;
//     }

//     void Run()
//     {
//         cout<<"Running"<<endl;
//     }
    
// };

//     //Inheritence Showing inherit property of parent to child
//     // class Laxman:public Ram{


//     // };

//     class Laxman : protected Ram{
//         public:
//         void print()
//         {
//             cout<<this->age;
//         }

//     };

     


// int main()
// {
//     Laxman a;
//     //inside the Access
//     a.print();
  
     
    
// }



//Multiple Inheritence

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int chemistry;

//     //constructor
//     A(){
//         chemistry = 12;
//     };

// };

// class B{
//     public:
//     int chemistry;
//     //constructor

//     B(){
//         chemistry = 13;
//     }
// };

// //multiple Inheritence

// class C: public A,public B{
//     public:
//     int maths;

// };
// int main()
// {
//     //Dimoand Problem
//     C obj;
//     cout << obj.maths<<" "<<obj.A::chemistry<<" "<<obj.B::chemistry;

// }

//Herichecal Inheritance

#include<iostream>
using namespace std;
class Car{
    public:
    int number;

    Car(){
        cout<<"UP20";
    }

};

class Alto:public Car{
    public:
    int number2;

    

};

class Fronex:public Car{
     public:
    int number3;

    

};
int main()
{
    Fronex s1;
    cout<<s1.number;
    Alto s2;
    cout<<s2.number;


}