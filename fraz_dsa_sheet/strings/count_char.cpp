#include<iostream>
using namespace std;

void count_char( string s){
    int count_c=0;
    int count_num=0;
    int count_sym=0;
    for(auto ch:s){
        if(ch>='A' && ch<='Z'){
            count_c++;
        }else if(ch>='a' && ch<='z'){
            count_c++;
        }
        else if(ch<='9' && ch>='0'){
            count_num++;
        }else{
            count_sym++;
        }
    }
    cout<<"the string has "<<count_c<<" characters and " <<count_num<<" numbers and "<< count_sym<<" symbols."<<endl;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    count_char(str);

}