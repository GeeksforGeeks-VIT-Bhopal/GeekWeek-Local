class Solution {
public:
    int myAtoi(string str) {
      int pointer(0);
      int result(0);
      int sign(0);
      
      // Discard white spaces
      while(str[pointer]==' '){
        ++pointer;
      }
      
      // Check for signs
      if(str[pointer]=='-'){
        sign = -1;
        ++pointer;
      }
      else if(str[pointer]=='+'){
        sign = 1; 
        ++pointer;
      }
      else if(isdigit(str[pointer])){
        sign = 1;        
      }
      else{
        return 0;
      }
      
      // Check for double signs...
      if(!isdigit(str[pointer])) return 0;
      
      // Convert the number found
      while(pointer < str.size() 
            && isdigit(str[pointer])){
        
        int digit = (int) str[pointer]-'0';
        
        // Check overflow for adding any number
        if(INT_MAX/10 >= result){ 
          result *= 10; 
        }
        else{
          return sign==-1 ? INT_MIN : INT_MAX;
        }
        
        // Check for overflow for at the unit level
        if(INT_MAX-digit >= result){
          result += digit;
        }
        else{
          return sign==-1 ? INT_MIN : INT_MAX;
        }
        
        ++pointer;
      }
      
      return sign*result;
    }
};
