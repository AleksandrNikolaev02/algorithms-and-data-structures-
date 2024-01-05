#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
    stack <char> KvadrSkob, KrugSkob, FigureSkob; 
    string str;
    cin>>str;
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(')  KrugSkob.push(str[i]);
            else if(str[i] == '[')  KvadrSkob.push(str[i]);
                else if(str[i] == '{')  FigureSkob.push(str[i]); 
    }
    
    for(int j = 0; j < str.size(); j++){
        if(str[j] == ')')  KrugSkob.pop();
            else if(str[j] == ']')  KvadrSkob.pop();
                else if(str[j] == '}')  FigureSkob.pop();
    }
    
    if(KrugSkob.size() == 0 && KvadrSkob.size() == 0 && FigureSkob.size() == 0) cout<<"Ok"<<endl;
        else cout<<"No"<<endl;
    
    return 0;
}
