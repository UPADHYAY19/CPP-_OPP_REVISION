#include<bits/stdc++.h>
using namespace std;

class Chai{
    private:
    string teaname;
    int servings;
    vector<string>ingredients;

    public:
    Chai(){
        teaname="Ice tea";
        servings=1;
        ingredients={"water","ice","bhang"};
    }
    Chai(string name , int serv,vector<string>ing){
        teaname = name;
        servings = serv; 
        ingredients=ing;
    }
    // getter
    string getteaname(){
        return teaname;
    }
    // setter
    void setteaname(string name){
        // logic
        teaname = name;
    }
     
    // getter for serving

    int getservings(){
        return servings;
    }

    // setter for the servings

    void setservings(int serv){
        servings = serv;
    }

    vector<string> getingredients(){
        return ingredients;
    }

    void setingredients(vector<string>ing){
        ingredients = ing;
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
    Chai chai("Lemon Tea",2,{"water","lemon","spices"});
    chai.setteaname("Ginger Tea");
    chai.displayChaiDetails();

    return 0;
}
