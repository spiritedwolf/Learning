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
        string printName(){
            return var_Name;
        }

};
int main(){
    //name variable is of data type Spirit, and the Spirit() constructor will take the input
    Spirit name = Spirit("iamnoob");
   // name.inpName("iamnoob");
   //self-explanatory
    cout<<"Hello, "<<name.printName()<<endl; 

    return 0;
}