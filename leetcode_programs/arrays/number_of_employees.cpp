#include<iostream>
#include<vector>
using namespace std;
int number_of_employee_met_target(vector<int>& hours, int target) {
        int count=0;
        for(int i=0;i<hours.size();i++){
            if(hours[i]>=target){
                count++;

            }
        }
        return count;
    }
int main(){
    vector<int> arr={1,2,3,4,5,6};
    int target=3;
    int result= number_of_employee_met_target(arr,target);
    cout<<result;
    return 0;

}