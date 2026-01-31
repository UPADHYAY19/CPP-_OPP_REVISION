#include<bits/stdc++.h>
using namespace std;

class Chai{
    private:
    string teaName;
    int servings;

    public:
    Chai(string name,int serv){
        teaName=name;
        servings=serv;

    }
    friend bool CompareServings(const Chai &chai1,
        const Chai &chai2);

    void display() const{
         cout<<"teaname: "<<teaName<<endl;
         cout<<"Serving: "<<servings<<endl;
    }




};
bool CompareServings(const Chai &chai1 , const Chai &chai2){

    return chai1.servings > chai2.servings;
}
int main(){

    Chai masalaChai("Masala Chai",4);
    Chai gingerChai("Genger Chai",4);
    
    if(CompareServings(masalaChai,gingerChai)){
        cout<<"Masachai is having more serving"<<endl;
    }
    else{
        cout<<"Gengerchai is having more serving"<<endl;
    }

    

    return 0;
}