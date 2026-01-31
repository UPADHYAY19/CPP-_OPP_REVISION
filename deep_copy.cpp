#include<bits/stdc++.h>
using namespace std;

class Chai {
public:
    string* teaName;
    int servings;

    Chai(string name, int serv){
        teaName = new string(name);
        servings = serv;
    }

    // DEEP COPY
    Chai(const Chai& other){
        teaName = new string(*other.teaName); // new memory
        servings = other.servings;
    }

    void show(){
        cout << "Tea: " << *teaName << endl;
    }

    ~Chai(){
        delete teaName;
    }
};

int main(){
    Chai c1("Ice Tea",2);
    Chai c2 = c1;

    *c2.teaName = "Lemon Tea";

    c1.show();
    c2.show();
}
