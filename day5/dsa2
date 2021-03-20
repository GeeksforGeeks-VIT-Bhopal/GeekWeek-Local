#include <string>
#include <iostream>
#include <math.h>
using namespace std;

class Arrows{
public:
    bool isAnArrow(string substring){
        int length = substring.length();
    	if(substring[0] == '<'){
			for(int i = 1; i<length; ++i){
				for(int j=1; j<length; ++j){
					if (substring[i] != substring[j]){
						return false;
					} 
                    if ((substring[i] != '-') && (substring[i] != '=')){
						return false;
					}
				}
			}
			return true;
		}
		else if(substring[length-1] == '>'){
			for(int i = 0; i<length-1; ++i){
				for(int j=0; j<length-1; ++j){
					if (substring[i] != substring[j]){
						return false;
					} else if ((substring[i] != '-') && (substring[i]!='=')){
						return false;
					}
				}
			}
			return true;
		} else {
			return false;
		}

	}
	int longestArrow(string s){
		int answer = -1;
		string substring;
		int length = s.length();
		//The following for loops are meant to generate every substring
		for (int i=0; i<length; i++){
			for (int j=0; j<=length-i; j++){
				substring = s.substr(i,j);
				if(isAnArrow(substring)){
                    answer = max(answer, (int) substring.length());
				}
			}
		}
		return answer;
	}
};
