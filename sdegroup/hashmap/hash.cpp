#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

 // orderedmap= o(log n)
 // unordered_map = o(1)

int main(){
    unordered_map<string,int> m;
    // insertion
    pair<string,int>p("hello",7);
    m.insert(p);
    m["nope"]= 4;
    // access
    cout<<m["hello"]<<endl;
    cout<<m.at("hello")<<endl;

    // search
    if(m.find("hello")!=m.end()){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    //size
    cout<<m.size()<<endl;

    // traversing in map
    for(auto i : m){
        cout<<i.first<<" ->"<<i.second<<endl;
    }


   

    
}