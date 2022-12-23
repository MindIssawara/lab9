#include<iostream>
#include<string>
using namespace std;

int main(){
    string ch;
    int age,cost,h;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=25){
        cout << "Enter your height: ";
        cin>>h;
        if(h<100){
            ch = "Chopper";
        }else if(h<180){
            ch = "Usopp";
        } else{
            cout<<"Enter your bounty: ";
            cin>>cost;
            if(cost>1100000000){
                ch = "Zoro";
            }else{
                ch = "Sanji";
            }
        
        }

    }else if(age<=60){
        cout<<"Enter your bounty: ";
        cin>>cost;
        if(cost<=500000000){
            ch = "Franky";
        } else{
            ch = "Jinbe";
        }
    }else {
        ch = "Brook";
    }
    cout<<"Your character = "<<ch;
}
