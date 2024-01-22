#include<iostream>
using namespace std;


int main(){
int n=4;
 for (int i = 0; i<=n; i++)
    {
        for (int j = n; j >0; j--)
        {
            if (j==i || i==n)
            {
                cout<<i;
            }
            else{
                cout<<" ";
            }
            //this will give 
            //    1
            //   2
            //  3
            // 4444
        }

                //pattern is 
                //    1
                //   2 2
                //  3   3
                // 4444444

                // and we have achived this by upper loop
            //    1
            //   2
            //  3
            // 4444

            //so we can see now we have to start from 2nd line so the 
            //value of j will start from 2



        for (int j = 2; j <=n; j++)
        {
            if (j==i||i==n)
            {
                cout<<i;
            }
            else{
                cout<<" ";
            }
            //output of this loop 
                // 2
                //  3
                // 444
        }
        cout<<endl;
}
}