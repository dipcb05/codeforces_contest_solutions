#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    scanf("%d", &t);
    for(int i = 0; i < t ; i++){
        
        string s1;
        cin>>s1;
        bool s = false;
        
        for(int j = 0; j < s1.length(); j++){
            if(s1.length() > 1 && j < s1.length() - 1){
                if(s1[j] == 'Y' || s1[j] == 'e' || s1[j] == 's'){
                    if(s1[j] == 'Y'){
                        if(s1[j+1] == 'e') s = true;
                        else {
                            s = false;
                            break;
                        }
                    }
                    else if(s1[j] == 'e'){
                        if(s1[j+1] == 's') s = true;
                        else {
                            s = false;
                            break;
                        }
                        
                    } 
                    else if(s1[j] == 's'){
                        if(s1[j+1] == 'Y') s = true;
                        else {
                            s = false;
                            break;
                        }
                    } 
        
                }
                else{
                    s = false;
                    break;
                }
            }
            else if(s1.length() == 1 || j == s1.length() - 1){
                    if(s1[j] == 'Y' || s1[j] == 'e' || s1[j] == 's'){
                      s = true;
                    }
            }
        }
        
        (s == true) ? printf("YES\n") : printf("NO\n");
        s = false;
    }
	return 0;
}
