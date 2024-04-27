// Run-Time polymorphism

// #include<iostream>
// using namespace std;
// class Animal{
//  public:
//     void speak(){

//     }

// };

// class Dog:public Animal{
//     //Function Override
//     public:
//     void speak(){
//         cout<<"Barking"<<" ";
//     }

// };

// class Cat:public Animal{
//     //Function Override
//     public:
//     void speak(){
//         cout<<"Meowing"<<" ";
//     }

// };
// int main()
// {
//     Dog a;
//     a.speak();
//     Cat b;
//     b.speak();

// }

// Upcasting  and Downcasting

// #include<iostream>
// using namespace std;
// class Animal{
//  public:
//    virtual void speak(){
//     cout<<"Speaking";

//     }

// };

// class Dog:public Animal{
//     //Function Override
//     public:
//     void speak(){
//         cout<<"Barking"<<" ";
//     }

// };

// class Cat:public Animal{
//     //Function Override
//     public:
//     void speak(){
//         cout<<"Meowing"<<" ";
//     }

// };
// int main()
// {
//     //Upcasting jo hamra pointer ho ga us ka method/function run ho ga
//     //if we not using virtual keyword into a parent class

//     Animal* a= new Dog();
//     a->speak();

// Animal* a=new Animal();
// a->speak();

// Downcasting to this type Upcasting to parent
//   Dog* b = (Dog *) new Animal();
//   b->speak();

// }

// Constructor use in above code

#include <iostream>
using namespace std;
class Animal
{
public:
    Animal()
    {
        cout << "I am inside the Animal class";
    }

    void speak()
    {
        cout << "Speaking";
    }
};

class Dog : public Animal
{
    // Function Override
public:
    Dog()
    {
        cout << "I am inside the Dog class";
    }
    void speak()
    {
        cout << "Barking" << " ";
    }
};

class Cat : public Animal
{
    // Function Override
public:
    void speak()
    {
        cout << "Meowing" << " ";
    }
};
int main()
{
    // Upcasting jo hamra pointer ho ga us ka method/function run ho ga
    // if we not using virtual keyword into a parent class

    // Animal *a = new Dog();
    // a->speak();

    //  Animal* a=new Animal(); //Animal constructor will run only

    //  Animal* b=new Dog(); //Both constructoe will be run

    // Dog* a = (Dog*)new Animal(); //Animal constructor will run only

    // Dog * a = new Dog(); //Both constructoe will be run







}