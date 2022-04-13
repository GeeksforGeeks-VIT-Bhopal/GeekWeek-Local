#!/bin/python3

import datetime
import math
import os
import random
import re
import sys
from datetime import datetime as dt
# Complete the time_delta function below.
def time_delta(t1, t2):
    fmt = '%a %d %b %Y %H:%M:%S %z'
    return(int(abs((dt.strptime(t1, fmt) - 
                   dt.strptime(t2, fmt)).total_seconds())))

if __name__ == '__main__':
    t = int(input())

    for i in range(0,t):
        t1 = input()

        t2 = input()

        delta = time_delta(t1, t2)

        print(delta)

