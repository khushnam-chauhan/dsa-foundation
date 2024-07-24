#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int smartPower(int a, int b){
    if(b>18) return 0;
    if(b==0) return 1;
    int nas=a*smartPower(a,b-1);
    return nas;
    

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<smartPower(a,b);
    return 0;
}
