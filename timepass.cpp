#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    istringstream ss(s);
    uint32_t date, month, year;
    char delimitter1, delimitter2;
    regex valid("[0-9]{2}[/][0-9]{2}[/][0-9]{4}");
    try{
        if(regex_match(s,valid)){
            cout<<"correct"<<endl;
        }
        else{
            throw string("Invalid input format");
        }
    }
    catch(const string& e){
        std::cerr << e << '\n';
    }
    return 0;
}