#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int rnumgen(int min,int max){
    //static for the efficiency, const is for constant , double is for float type , the variable name is fra
    //static_cast is used for type casting , RAND_MAX is of int type so it will change it to the double i.e float type.
    static const double fra = 1.0 / (static_cast<double>(RAND_MAX)+1.0);
    return min + static_cast<int>(max - min + 1) * (rand() * fra);
}

int main(){
    //srand() is used for starting point for producing a series of pseudo-random integers
    /*
    Note: The pseudo-random number generator should only be seeded once, before any calls to rand(), and the start of the program. It should not be repeatedly seeded, or reseeded every time you wish to generate a new batch of pseudo-random numbers.
    Standard practice is to use the result of a call to srand(time(0)) as the seed. However, time() returns a time_t value which vary everytime and hence the pseudo-random number vary for every program call.
    Ref:- https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
    */
    srand(static_cast<unsigned int>(time(0)));
     for (int i=0; i < 10; ++i)
    {
        cout <<rnumgen(0, 100) << " ";
    }
    cout<<endl;
    return 0;

}