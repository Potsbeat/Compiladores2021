#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class AFD{
public:
    int states_n, asize;
    string* states;
    string* alph;
    string accept;

    string input;

    AFD(int Tstates_n,string Talph[], string Taccept){
        int i;
        states_n = Tstates_n;
        asize = sizeof(*Talph)/sizeof(Talph[0]);
        alph = new string[asize];
        states = new string[states_n];

        for(i=0;i<asize;i++)
            alph[i] = Talph[i];


        for(i=0;i<states_n;i++)
            states[i] = "q"+ to_string(i);
    }

    void printStates(){
        int i;
        for(i=0;i<states_n;i++)
            cout<<states[i]<<"\n";
        cout<<"Alphabet size: "<<asize;
    }
};

int main(){
    string alpha[2] = {"1","2"};
    AFD aut(4,alpha,"q3");
    aut.printStates();
    return 0;
}
