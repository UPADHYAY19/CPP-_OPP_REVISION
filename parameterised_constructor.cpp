#include<bits/stdc++.h>
using namespace std;


 class Chai{
    public:
     // these are called data member 
    string teaName;
    int servings;
    vector<string> ingredients;

    // param constructure

    Chai(string name , int serv, vector<string>ing){
        teaName = name;
        servings = serv;
        ingredients=ing;

    }

    // member functions

    void displayChaiDetails(){
        cout<<"Tea Name: "<<teaName<<endl;
        cout<<"Servings: "<< servings<<endl;
        cout<<"Ingredients of the tea are :"<<endl;
        for(string  ingredient : ingredients){
              cout<<ingredient<<endl; 
        }
    }

};

int main(){

    Chai c("ice tea",2,{"ice","masala","some bhang"});
    c.displayChaiDetails();
    return 0;
}