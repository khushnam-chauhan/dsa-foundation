#include<iostream>
#include<vector>
using namespace std;
void sort_colors(vector<int>& colors){
    int low=0;
    int high=colors.size()-1;
    int mid=0;
   while(mid<=high){
    if (colors[mid]==0)
    {
        swap(colors[mid],colors[low]);
        low++;
        mid++;
    }
    else if(colors[mid]==1){
        mid++;
    }
    else if(colors[mid]==2){
        swap(colors[mid],colors[high]);
        high--;
    }
    
   } 
}

int main(){
    vector<int> colors={0,1,2,2,1,0};
    sort_colors(colors);
    for(auto ele:colors){
        cout<<ele<<" ";
    }
    return 0;
}



    //  if (colors[i]==0)
    //  {
    //     zeros++;
    //   }else if (colors[i]==1)
    //  {
    //     ones++;
    //  }else if (colors[i]==2)
    //  {
    //     twos++;
    //  }
        
        
    // }
    // int i=0;
    // while (zeros--)
    // {
    //     sorted.push_back(0);
    //     i++;
    // }
    
    // while (ones--)
    // {
    //     sorted.push_back(1);
    //     i++;
    // }
    
    // while (twos--)
    // {
    //     sorted.push_back(2);
    //     i++;
    // }
    

    // return sorted;
    