if((n.size())==1) return stoi(n);
long sum=0;
for(int i=0;i<n.size();i++){
    string str="";
    str= str + n[i];
    sum = sum + (stoi(str));
}
n=to_string(sum*k);
return superDigit(n, 1);