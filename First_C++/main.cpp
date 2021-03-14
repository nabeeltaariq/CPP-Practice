#include <iostream>

using namespace std;

class Alpha{
private:
    int a,b;
public:
    string initialize_it;
    Alpha(){
    a=b=0;
    }
    void okay(){
    cout<<"Member of Alpha"<<endl;
    cout<<"value of a: "<<a<<" and b: \t "<<b << "initialized \t " <<  initialize_it<<endl;
    }
};

void void_practice();
int main()
{
  Alpha a;
  a.initialize_it="Okay initialized";
  a.okay();

    return 0;
}

