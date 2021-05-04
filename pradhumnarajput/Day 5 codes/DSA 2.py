class AB:
    def createString(self, N, K):
        places_max = int(N / 2)
        if N % 2:
            places_max += 1
        places_list = (N - i for i in range(places_max))
        letters = list('A' * N)
        pairs = 0
        for places in places_list:
            for i in range(1, places):
                if pairs == K:
                    return ''.join(letters)
                letters[i - 1] = 'A' 
                letters[i] = 'B'  
                pairs += 1
            if pairs == K:
                return ''.join(letters)
            pairs -= 1  
        return ''