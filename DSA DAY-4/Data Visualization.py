import matplotlib.pyplot as plt
value1 = [72,76,24,40,57,62,75,78,31,32]
value2=[62,5,91,25,36,32,96,95,30,90]
value3=[23,89,12,78,72,89,25,69,68,86]
value4=[99,73,70,16,81,61,88,98,10,87]
box_plot_data=[value1,value2,value3,value4]
box=plt.boxplot(box_plot_data,vert=1,patch_artist=True,labels=['course1','course2','course3','course4'])
colors = ['cyan', 'lightblue', 'lightgreen', 'tan']
for patch, color in zip(box['boxes'], colors):
    patch.set_facecolor(color)
plt.show()

