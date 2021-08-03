class ABBA:
    def _canObtain(self, target, index_end, reversed_end):
        while True:
            # Try first move
            try:
                if target[index_end] == 'A':
                    index_end += 1
                    continue
            except IndexError:
                pass

            # Try second move
            try:
                target = target[::-1]
                tmp_a = index_end
                index_end = reversed_end
                reversed_end = tmp_a

                if target[index_end] == 'B':
                    index_end += 1
                    continue
                else:
                    return False
            except IndexError:
                pass

            return True

    def canObtain(self, initial, target):
        # Try starting with the first move
        index_start = 0

        while True:
            inhttps://www.onlinegdb.com/online_python_compiler#tab-stdindex_start = target.find(initial, index_start)
            index_end = len(initial) + index_start
            reversed_start = len(target) - index_end - 1
            reversed_end = len(initial) + reversed_start

            if index_start == -1:
                break

            if self._canObtain(target, index_end, reversed_end):
                return 'Possible'

            index_start += 1

        # Try starting with the second move (reversed)
        reversed_target = target[::-1]
        reversed_start = 0

        while True:
            reversed_start = reversed_target.find(initial, reversed_start)
            reversed_end = len(initial) + reversed_start
            index_start = len(target) - reversed_end - 1
            index_end = len(initial) + index_start

            if reversed_start == -1:
                break

            if self._canObtain(target, index_end, reversed_end):
                return 'Possible'

            reversed_start += 1

        return 'Impossible'
