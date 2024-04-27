#include <iostream>
using namespace std;
class Animal
{
    // state or properties
    // Acces private member
private:
    int weight;

public:
    int age;
    string type;

    //Default constructor 
    //name always start from class name
    Animal(){
        this->age=0;
        this->type="";
        cout<<"Constructor called"<<endl;
    }
   //Parameterised constructor
    Animal(int age,string type)
    {
        this->age=age;
        this->type=type;
         cout<<"Constructor called 2"<<endl;

    }

    //Copy constructor

    Animal (Animal &obj)
    {
        this->age=obj.age;
        this->type=obj.type;
    cout<<"I am inside the copy constructor";
    }

    // bheviour or method or function
    void eat()
    {
        cout << "i am eating at 12 clock" << " " << endl;
    }

    void sleep()
    {
        cout << "My total sleeping time is 5 hours" << " " << endl;
    }
    // weight to fetch karne ke kaam aye ga
    int getWeight()
    {
        return weight;
    }
    // weight ko set karne ke kaam aye ga
    void setWeight(int w)
    {
        weight = w;
    }

    //Destructor

    ~Animal(){
        cout<<"Now i am inside the Destructor";
    }
};
int main()
{
    // Object Creation

    // Static
    // Animal raja;
    // raja.age = 2;
    // raja.type = "LOIN";
    // cout << "Age of the animal is:" << raja.age << endl;
    // cout << "type of the animal is:" << raja.type << endl;

    //Dynamic Object Creation

    // Animal* raja = new Animal;
    //to acces the member there are two ways
    //like this
    // (*raja).age = 15;
    // (*raja).type = "ranu";

    //Alternative way
    // raja->age = 17;
    // raja->type = "nameraj";


    // cout<<raja->type;
    // cout<<raja->age;

   //object Creation Dynamic and static both

//    Animal* b = new Animal(23,"df");
//    Animal a;

//    Animal b(34,"raj");

//Making obj and copy into another obj
//  Animal *c = new Animal(*b);
// Animal c(*b);
//  Animal d = a;


//Static Object create--->Automatical delete the Constructor self called

// Animal a;
// a.age=12;


//Dynamical Object create --->manualy delete needed

Animal *a =new Animal;
a->age=12;

//it will be needed
delete a;







    

    // call the method or function
    // raja.eat();
    // raja.sleep();

    // So how we acces private member in object using getter and setter function or method
    // raja.setWeight(100);
    // cout << "Weight is:" << raja.getWeight();
}