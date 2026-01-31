#include<bits/stdc++.h>
using namespace std;
class Chai{
    public:
    string teaname;
    int servings;
    vector<string>ingredients;
    // deligating constructor

    Chai(string name) : Chai(name,1,{"water","tea leavs","bhang"}){}

    // main constructor
    Chai(string name , int serv,vector<string>ing){
        teaname = name;
        servings = serv; 
        ingredients=ing;
    }
    void displayChaiDetails(){
        cout<<"Tea Name: "<<teaname<<endl;
        cout<<"Servings: "<< servings<<endl;
        for(string  ingredient : ingredients){
              cout<<ingredient<<endl; 
        }
    }

};

 int main(){

    Chai chai("Quick chai");
    chai.displayChaiDetails();
    return 0;
 }

