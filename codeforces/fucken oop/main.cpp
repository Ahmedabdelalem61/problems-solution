#include <iostream>

using namespace std;
class MotherFucker{
private:
    int herAge = 15;
    string herName = "a7a";
    int numOfBabies = 12;
public:
    MotherFucker(){
    cout<<"ffffffffff\n";
    }
    MotherFucker(int age,int babies){
      herAge = age;
      numOfBabies = babies;
      cout<<"the object have been created\n";
      MotherFucker m;
    }
    void setAge(int n){
    herAge = n;
    }
    void setName(string n){
    herName = n;
    }
    void setBabies(int n){
    numOfBabies = n;
    }
    void print(){
    cout<<"herAge :"<<herAge<<"\n"<<
    "herName :"<<herName<<"\n"<<
    "numOfBabies :"<<numOfBabies;
    }
    ~MotherFucker(){
      cout<<"the object have been DELETED\n";
    }
};
int main()
{
    MotherFucker mother(45,2);
    mother.print();
    MotherFucker other(45,2);
    other.print();
    return 0;
}
