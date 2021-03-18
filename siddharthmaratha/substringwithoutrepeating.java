class Solution {
    public int lengthOfLongestSubstring(String s) {int inputLength = s.length();
    
    if(inputLength<1)
        return 0;
    
    Map<Character,Integer> finalMaps = new LinkedHashMap<>();
    int longestSubStringCount = 0;
    
    for(int i=0;i<inputLength;i++)
    {
        char temp = s.charAt(i);
        if(!finalMaps.containsKey(temp))
            finalMaps.put(temp,i);
            
        else{
            i = finalMaps.get(temp);
            finalMaps.clear();               
        }
        
        longestSubStringCount = Math.max(longestSubStringCount,finalMaps.size());
    }
    
    return longestSubStringCount;
        
    }
}
