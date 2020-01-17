//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker that is a really cool name.
Fahsai: I think you are Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47.  I have a free movie tickets for you. 
Fahsai: Let's go to cinema together!!! 
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watch Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/ 
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	int id;
    string name;
    string ans[4];
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name? \n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!!" << name << " that is a really cool name. \n";
    cout << "Fahsai: I think you are Engineering student. What is your student ID?\n";
    cout << name <<":"<<" ";
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR "<<(id/10000000)-12 <<". I have a free movie tickets for you.\n";
    cout << "Fahsai: Let's go to cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name <<": "<<" ";
    getline(cin,ans[1]);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name <<": "<<" ";
    getline(cin,ans[2]);
    cout << "Fahsai:"<<ans[2]<<"....that is OK!!! I'm looking forward to watch "<<ans[1]<<" with you.\n";
    cout << name <<": "<<" ";
    getline(cin,ans[3]);
    cout << "Fahsai: 555+ see you "<<ans[3]<<". Bye Bye \\(^ ^)/ \n";

    return 0;

}