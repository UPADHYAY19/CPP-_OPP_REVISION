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
    Chai (Chai& other){

         teaName = other.teaName;
         servings = other.servings;
         ingredients = other.ingredients;
    }
    ~Chai(){
        
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
    // c.displayChaiDetails();

    Chai c2 = c;
    c2.displayChaiDetails();
    return 0;
}