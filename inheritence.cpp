#include<bits/stdc++.h>
using namespace std;

// base class
class Tea{
    protected:
    string  teaName;
    int servings;

    public:
    Tea(string name, int serv){
        teaName = name;
        servings = serv;
        cout<<"Tea Constructor called "<<teaName<<endl;
    }

    virtual void brew() const{
        cout<<"brewing "<<teaName<<"with generic method"<<endl;
    }
    virtual void serv() const{
        cout<<"serving "<<servings<<"cup of tea with generic method"<<endl;
    }

   virtual ~Tea(){
    cout<<"Tea destructor called"<<teaName<<endl;
    }

};

class GreenTea : public Tea{
     public:
     GreenTea(int serv) : Tea("green tea",serv){
        cout<<"Green tea Constructor called"<<endl;
     }

     void brew() const override{
        cout<<"Brewing "<< teaName << " by steeping green tea leaves"<<endl;

     }
     ~GreenTea(){
        cout<<"Green tea Destructor called"<<endl;
     }

};
class MasalaTea : public Tea{
     public:
     MasalaTea(int serv) : Tea("Masala tea",serv){
        cout<<"Masala tea Constructor called"<<endl;
     }

     void brew() const override final{   // no one can override this final function
        cout<<"Brewing "<< teaName << "with spices and milk"<<endl;

     }
     ~MasalaTea(){
        cout<<"Masala tea Distructor called"<<endl;
     }

};

// class SpicyMasalaTea : public MasalaTea{
//    public:
//    void brew() const override{
//      cout<<"Brewing "<< teaName << "with spices and milk"<<endl;
    
//    }

// };

int main(){

    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serv();

    tea2->brew();
    tea2->serv();

    delete tea1;
    delete tea2;

    return 0;

}
