#include <iostream>
using namespace std;

int countGift(int age){
    
    int m = -1;
    if(age>0){
        if((age%2) ==1){
            m = age*age;
        }else{
            m = age*age*age;
        }
    }
    return m;
}

int main()
{
   int age;
   cout<<"Enter age : ";
   cin>>age;
   int h = countGift(age);
   if(h==-1){
       cout<<"Invalid";
   }else{
       cout<<h;
   }
}
