//Harshil Nagori
//24070123046
#include <iostream>
using namespace std;
#include<string>

class Name{
public:
string name1;
string name2;

Name(string n1, string n2){
    name1=n1;   
    name2=n2;   

void add(){
   cout<<name1+name2;   
}      
};
int main() 
{
    Name N1("Harshil","Nagori");
    N1.add();

}

//Output
//HarshilNagori
