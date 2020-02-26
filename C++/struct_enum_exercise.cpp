#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

enum cardSuit {
    club,
    diamond,
    heart,
    spade
};

enum cardelements {
    ace,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king
};

string getsuitestr(cardSuit suit){
    string a;

    switch(suit){
        case club:
            a = "club";
            break;
        case diamond:
            a = "diamond";
            break;
        case heart:
            a = "heart";
            break;
        case spade:
            a = "spade";
            break;
    }
    return a;
}

string getsuiteelementstr(cardelements element){
    string b;

    switch(element){
        case ace:
            b = "Ace";
            break;
        case two:
            b = "two";
            break;
        case three:
            b = "three";
            break;
        case four:
            b = "four";
            break;
        case five:
            b = "five";
            break;
        case six:
            b = "six";
            break;
        case seven:
            b = "seven";
            break;
        case eight:
            b = "eight";
            break;
        case nine:
            b = "nine";
            break;
        case ten:
            b = "ten";
            break;
        case jack:
            b = "jack";
            break;
        case queen:
            b = "queen";
            break;
        case king:
            b = "king";
            break;
    }
    return b;
}

int rnumgen(int min,int max){
    //static for the efficiency, const is for constant , double is for float type , the variable name is fra
    //static_cast is used for type casting , RAND_MAX is of int type so it will change it to the double i.e float type.
    static const double fra = 1.0 / (static_cast<double>(RAND_MAX)+1.0);
    return min + static_cast<int>(max - min + 1) * (rand() * fra);
}

int main(){
    srand(static_cast<unsigned int>(time(0)));
    int varSuit = rnumgen(0, 3);
    int varElement = rnumgen(0, 12);

    cardSuit suit = static_cast<cardSuit>(varSuit);
    cardelements element = static_cast<cardelements>(varElement);

    cout<<"Your card is "<<getsuiteelementstr(element)<<" of "<<getsuitestr(suit)<<endl;

    return 0;
}
