#include<bits/stdc++.h>
using namespace std;


 class Chai{
    public:
     // these are called data member 
    string teaName;
    int servings;
    vector<string> ingredients;

    // default Constructure
    Chai(){
        cout<<"this is default Constructure"<<endl;
    }

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

    Chai c2;
    c2.displayChaiDetails();
    return 0;
}