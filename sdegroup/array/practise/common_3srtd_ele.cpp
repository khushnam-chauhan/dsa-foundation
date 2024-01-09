//approach 1: using set 
// approach 2: removing duplicates first 


#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> commonElement(int a[],int b[],int c[],int n1,int n2,int n3){
    vector<int> ans;
    set<int> common;
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n3; k++)
            {
                if ((a[i]==b[j])&& (b[j]==c[k]))
                {
                    common.insert(a[i]);
                }
                
            }
            
        }
        
    }
    for(auto i:common){
        ans.push_back(i);
    }
    return ans;
}
int main(){
    int a[]={1,2,3,3,4,5,6,9};
    int b[]={2,3,4,3,6,7,8,9};
    int c[]={1,3,4,3,7,8};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    int n3=sizeof(c)/sizeof(c[0]);
    vector<int> result=commonElement(a,b,c,n1,n2,n3);
    for(auto ele:result){
        cout<<ele<<" ";
    }
    return 0;

}