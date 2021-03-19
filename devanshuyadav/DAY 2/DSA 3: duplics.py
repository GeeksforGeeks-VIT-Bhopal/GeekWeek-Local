# ques: https://www.codingninjas.com/codestudio/problems/remove-consecutive-duplicates_893195
def remove_adjacent_dupes(s=""):
    if len(s) < 2:
        return s
    elif s[0] == s[1]:
        return remove_adjacent_dupes(s[1:])
    else:
        return s[0] + remove_adjacent_dupes(s[1:])


print(remove_adjacent_dupes(str(input())))
