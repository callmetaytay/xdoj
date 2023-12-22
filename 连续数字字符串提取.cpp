#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isContinuous(string str) {
	int len=str.length();
	for(int i=0;i<len-1;i++){
		if((str[i]!=str[i+1]+1)&&(str[i]!=str[i+1]-1)){
			return false;
		}
	}
	return true;
}

int main() {
    string s;
    getline(cin, s);

    vector<string> continuenum; 
    int count=0;
    int i = 0;
    while (i < s.length()) {
        if (isdigit(s[i])) {
            string temp;
            temp += s[i];
            int j = i + 1;
            while (j < s.length() && isdigit(s[j])) {
                temp += s[j];
                ++j;
            }
            continuenum.push_back(temp); 
            count++;
            i = j;
        } else {
            ++i;
        }
    }
   for(int t=0;t<count;t++){
   	if(isContinuous(continuenum[t]))
         cout<<continuenum[t]<<endl;
     }

    return 0;
}

