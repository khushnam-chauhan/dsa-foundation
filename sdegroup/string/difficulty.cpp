
#include <iostream> 
using namespace std; 

bool isVowel(char ch){
    return ( ch == 'a' || ch == 'e' || 
             ch == 'i' || ch == 'o' || 
             ch == 'u');
}
int calcDiff(string str,int len ){
    int count_conso=0;
    int count_vowel=0;
    int hard=0;
    int easy=0;
    int consec=0;
    for(int i=0;i<len;i++){
        if(str[i]!=' ' && isVowel(tolower(str[i]))){
            count_vowel++;
            consec=0;
        }
        else if(str[i]!=' '){
            count_conso++;
            consec++;
        }
        if(consec==4){
            hard++;
            while (i<len && str[i]!= ' ')
            i++;
            count_conso=0;
            count_vowel=0;
            consec=0;
            
        }
        else if(i<len && (str[i]!=' ' || i== len-1)){
            count_conso>count_vowel?hard++:easy++;
            count_conso=0;
            count_vowel=0;
            consec=0;
        }
    }

    return (5*hard)+(2*easy);

}
// vowel check
int main() 
{ 
	string str = "We are geeks";
    int len = str.length();
	cout << calcDiff(str,len) << endl; 

	return 0; 
} 
