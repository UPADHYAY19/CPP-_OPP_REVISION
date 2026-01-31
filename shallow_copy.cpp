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

    // SHALLOW COPY
    Chai(const Chai& other){
        teaName = other.teaName; // same memory
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


// shallow copy me jis object ko copy kiye ho usme change karoge to copy object me bhi change hoga
