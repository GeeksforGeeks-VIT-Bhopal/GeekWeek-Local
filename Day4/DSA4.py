class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        results = []
        
        if not digits:
            return results
        
        mapping = {
            "2": ["a", "b", "c"],
            "3": ["d", "e", "f"],
            "4": ["g", "h", "i"],
            "5": ["j", "k", "l"],
            "6": ["m", "n", "o"],
            "7": ["p", "q", "r", "s"],
            "8": ["t", "u", "v"],
            "9": ["w", "x", "y", "z"]            
        }
        
        self.helper(results, "", digits, mapping)
                    
        return results
    
    def helper(self, results, combination, digits, mapping):
        if digits == "":
            results.append(combination)
            return
            
        letters = mapping[digits[0]]
        
        for letter in letters:
            combination += letter
            self.helper(results, combination, digits[1:], mapping)            
            combination = combination[:-1]
