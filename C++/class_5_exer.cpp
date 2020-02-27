//usage of template class and function in this program
#include<iostream>
using namespace std;

//class name is spirit
class Spirit {
    //private access control section
    protected:
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
        // Copy assignment operator overloading
        void operator  = (const Wolf &W)
        {
            var_Name = W.var_Name;
        }
        //override will make compiler check if in the base class the function is of same data type
        //and with the same argument. If not then it will throw an error.
        string MakeSound() override
        {
            return "Aaahuuuuuu!!";
        }

};
class Oof: public Spirit
{
    public:
        Oof(string name): Spirit(name)
        {

        }
        // Copy assignment operator overloading
        void operator  = (const Oof &O)
        {
            var_Name = O.var_Name;
        }
        //override will make compiler check if in the base class the function is of same data type
        //and with the same argument. If not then it will throw an error.
        string MakeSound() override
        {
            return "Ooooofffff!!";
        }

};
/*
A template is a simple and yet very powerful tool in C++. 
The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types. 
For example, a software company may need sort() for different data types. Rather than writing and maintaining the multiple
codes, we can write one sort() and pass data type as a parameter.

 Ref:-https://www.geeksforgeeks.org/templates-cpp/
*/
template<typename L>void getNameandmakesound(L& Spirited)
{
    cout << Spirited.printName() << " houul like ";
    cout << Spirited.MakeSound() << endl;
}

//Template class with name name SpiritClassTemp
template<typename T>class SpiritClassTemp
{
    private:
        T var_Name; //template data type variable declaration maybe??

    public:
        SpiritClassTemp(T name ): var_Name(name)  {}//direct initilation technique -> var_Name(className)
        void getNameandmakesound()
        {
            cout<<var_Name.printName()<< " houul like ";
            cout<<var_Name.MakeSound() << endl;
        }

};
int main(){
    //name variable is of data type Spirit, 
    Wolf wolf = Wolf("iamwolf");
    SpiritClassTemp<Wolf>wolfTemp(wolf);
    wolfTemp.getNameandmakesound(); 

    Oof oof = Oof("Ooof");
    SpiritClassTemp<Oof>oofTemp(oof);
    oofTemp.getNameandmakesound(); 

    return 0;
}
