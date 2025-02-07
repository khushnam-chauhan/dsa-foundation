//empty string
#include <bits/stdc++.h>
using namespace std;

char s[200002];
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n>>s;
	    int a=0,b=0;
	    for(int i=0;i<n;++i)
	    {
	        if(s[i]=='A')
	        {
	            if(b)--b;
	            ++a;
	        }
	        else
	        {
	            if(a)--a;
	            ++b;
	        }
	    }
	    cout<<(a+b)<<'\n';
	}
	return 0;
}

//adjacent sum
#include <bits/stdc++.h>
using namespace std;
int b[200002];
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    for(int i=1;i<n;++i)
	        cin>>b[i];
	    sort(b+1,b+n);
	    cout<<1;
	    int last=1;
	    for(int i=1;i<n;++i)
	    {
	        last=b[i]-last;
	        cout<<' '<<last;
	    }
	    cout<<'\n';
	}
	return 0;
}

//permutation k-mod
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int n,m;
	    cin>>n>>m;
	    if(m==1||(m==2&&n%2))
	        cout<<"-1";
	    else if(n%m!=1)
	    {
	        for(int i=2;i<=n;++i)
                cout<<i<<' ';
            cout<<'1';
	    }
	    else
	    {
	        for(int i=3;i<=n;++i)
	            cout<<i<<' ';
	       cout<<"1 2";
	    }
	    cout<<'\n';
	}
	return 0;
}

//