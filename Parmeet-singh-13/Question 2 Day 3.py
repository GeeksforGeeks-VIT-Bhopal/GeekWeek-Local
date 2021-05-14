def is_leap(n):
    if (n % 4) == 0:
        if (n % 100) == 0:
            if (n % 400) == 0:
              return True
            else:
                return
        else:
            return
    else:
        return


b = int(input())
print(is_leap(b))
