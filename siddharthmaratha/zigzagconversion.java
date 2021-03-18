class Solution {
public String convert(String s, int numRows) {
if
(numRows==1)
return s;
StringBuilder[]res=new StringBuilder[numRows];
boolean flag=true;
for
(int i=0;i<numRows;i++){
res[i]=new StringBuilder();
}
int j=-1;
for
(int i=0;i<s.length();i++){
res[flag?++j:--j].append(s.charAt(i));
if
(j==0){
flag=true;
}
if
(j==numRows-1){
flag=false;
}
}
StringBuilder sb=new StringBuilder();
for
(StringBuilder r:res)
sb.append(r);
return sb.toString();
}
}
