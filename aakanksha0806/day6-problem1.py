#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n=str(bin(int(input()))).replace('b','0').split('0')
    print(len(max(n)))