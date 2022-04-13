import numpy as np
import matplotlib.pyplot as pl

val=[[5.,25.,45.,20.],[4.,23.,49.,17.],[6.,22.,47.,19.]]

x=np.arange(4)
Marks=[60,76,54,80]
pl.bar(x+0.00,val[0],color='b',width=0.25)
pl.bar(x+0.25,val[1],color='g',width=0.25)
pl.bar(x+0.50,val[2],color='r',width=0.25)

pl.show()
