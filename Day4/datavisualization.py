import matplotlib.pyplot as plt
plt.title("Top Guild Analysis")
plt.xlabel("Days")
plt.ylabel("Points")

guild=['Rawbits','Phoenix', 'Server_monks']
data=[[917,1204,765],[978,1050,704],[714,838,1008]]

plt.plot(guild,data,label=guild)
plt.legend(guild)
positions=(0,1,2)
labels=("Day1","Day2","Day3")
plt.xticks(positions, labels)

plt.show()
