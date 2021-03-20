class ABBA:
    def canObtain(self, initial, target):
        if initial == target:
            return 'Possible'
        if len(initial) == len(target):
            return 'Impossible'
        if target[-1] == 'A':
            return self.canObtain(initial, target[:-1])
        if target[-1] == 'B':
            return self.canObtain(initial, target[:-1][::-1])
