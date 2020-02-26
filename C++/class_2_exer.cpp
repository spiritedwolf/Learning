#include<iostream>
using namespace std;

//class name is spirit
class Spirit {
    //private access control section
    private:
        string var_Name; //Declaring the var_Name variabl of string type
    //Public access control section 
    public:
        Spirit(string name): var_Name(name){ 
        // Spirit() constructor taking the name in the argument, 
        //and we will use the direct initialization technique -> var_Name(name)
        // so we don't need to use inpName() anymore. 
        }
        //We will not use this function anymore
        void inpName(string name){
            var_Name = name;
        }
        // The interface that has to be implemented in derived class
        virtual string MakeSound() = 0;
        string printName(){
            return var_Name;
        }
};
//Class wolf is a derived class of the base class "Spirit".
class Wolf: public Spirit
{
    public:
        Wolf(string name): Spirit(name)
        {

        }
        //override will make compiler check if in the base class the function is of same data type
        //and with the same argument. If not then it will throw an error.
        string MakeSound() override
        {
            return "Aaahuuuuuu!!";
        }

};
int main(){
    //name variable is of data type Spirit, and the Spirit() constructor will take the input
    Wolf wolf = Wolf("iamwolf");
    cout<<wolf.printName()<<" is barking:"; 
    cout<<wolf.MakeSound()<<endl;

    return 0;
}