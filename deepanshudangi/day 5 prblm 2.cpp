Problem Statement for BinarySearch

    Problem Statement

        Consider the implementation of binary search shown below :

    def binary_search(array, value) :
    low = 0 high = len(array) - 1 while low <= high :
    mid = (low + high) / 2 if array[mid] == value : return '1' if array[mid] < value : low = mid + 1 if array[mid] > value : high = mid - 1 return '0'

                                                                                                                                    Clearly,
    if the input array is sorted, the procedure returns '1' if the given value is present in the given array and it returns '0' if the value is not in the array.

                                  In this problem we 'll take a look at what happens if the array isn' t sorted.Even in those cases binary search can sometimes give the correct answer,
    but sometimes we can search for a value that is present in the array and the search will fail to find it.

        Let P be a permutation of numbers from 0 to N -
        1,
    inclusive.The signature of P is a string sig(P) of length N defined as follows
    :

    sig(P) = binary_search(P, 0) + binary_search(P, 1) + ... + binary_search(P, N - 1)

                                                                   In words,
    character i of the signature of a permutation tells us whether binary search correctly locates the value i in this permutation.

        You are given a String S containing N zeros and ones.Count all permutations P of order N such that their signature is S.Return that count modulo 10 ^
        9 + 7.

            Definition

                Class
    : BinarySearch
        Method
    : count
        Parameters
    : String
        Returns
    : int
        Method signature
    : int count(String S)(be sure your method is public)

              Notes -
          In the pseudocode for binary search,
      the valid indices into an array of length N are values from 0 to N - 1, inclusive.- Also in the pseudocode, "/" represents integer division that truncates(e.g., 9 / 2 = 4).

                                                                                                                          Constraints -
                                                                                                                          S will have between 1 and
                                                                                                                      50 characters,
      inclusive.- Each character of S will be either '0' or '1'.

                                                            Examples 0)

    "111" Returns : 1 There is only one permutation with this signature : P = {0, 1, 2}
        .In other words,
    for N = 3 binary search always works if and only if the input permutation is sorted in increasing order.1)

                                                    "000" Returns : 0 There is no permutation with this signature.I.e.,
    for N = 3 there is no permutation such that binary search always fails.2)

        "101" Returns : 2 The two permutations with this signature are P = {0, 2, 1} and P = {1, 0, 2}
        .3)

            "100011" Returns : 12 4)

                "0011101100010010010111010111010" Returns : 373885200
