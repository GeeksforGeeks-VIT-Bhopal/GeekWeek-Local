class Solution {
public:
  string multiply(string num1, string num2) {
    if(num1 == "0" || num2 == "0")
      return "0";

    vector<int> arr(num1.length() + num2.length(), 0);
    for(int i = num1.length()-1; i >= 0; i--){
      for(int j = num2.length()-1; j >= 0; j--){
        int multi = (num1[i]-'0') * (num2[j]-'0') + arr[i+j+1];
        arr[i+j+1] = multi % 10;
        arr[i+j] += multi / 10;
      }
    }
    int index= 0;
    string result = "";
    while(arr[index] == 0) index++;
    for(int i = index; i < arr.size(); i++)
      result += arr[i]+'0';

    return result;
  }
};
