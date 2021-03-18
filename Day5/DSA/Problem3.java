class ABBA(object):
    def canObtain(self, initial, target):
        if len(initial) == len(target):
            if initial == target:
                return 'Possible'
            else:
                return 'Impossible'
        else:
            result_op_1 = self.canObtain(initial + 'A', target)
            result_op_2 = self.canObtain(initial[::-1] + 'B', target)
            if result_op_1 == 'Possible':
                return result_op_1
            else:
                return result_op_2
