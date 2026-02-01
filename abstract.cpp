#include<bits/stdc++.h>
using namespace std;

class Tea{

    public:
    virtual void prepareIngredients()=0; // pure virtual function
    virtual void brew()=0;
    virtual void serve()=0;

    void makeTea(){
        prepareIngredients();
        brew();
        serve();
    }

};

class GreenTea : public Tea{
    public :
    void prepareIngredients() override {
        cout<<"green leaves and water is ready"<<endl;
    }
    void brew() override{
        cout<<"boil the ingredients"<<endl;
    }
    void serve() override{
      cout<<"serve the order"<<endl;
    }

};

int main(){

    GreenTea gt;
    gt.makeTea();
    
    return 0;
}