#include<bits/stdc++.h>
using namespace std;


 class Chai{
    public:
     // these are called data member 
    string teaName;
    int servings;
    vector<string> ingredients;

    // member functions

    void displayChaiDetails(){
        cout<<"Tea Name: "<<teaName<<endl;
        cout<<"Servings: "<< servings<<endl;
        for(string  ingredient : ingredients){
              cout<<ingredient<<endl; 
        }
    }

};

int main(){

    Chai chai;
    chai.teaName="Ice tea";
    chai.servings=5;
    chai.ingredients={"Water","Ice","Some Special Things"};
    chai.displayChaiDetails();

    Chai c2 ;
    c2.teaName = "Mashala Chai";
    c2.servings=2;
    c2.ingredients={"mashala","water","milk","ginger"};
    c2.displayChaiDetails();
    return 0;
}