import matplotlib.pyplot as plt

x = [1, 2, 3]
y = [5, 7, 4]

x2 = [1, 2, 3]
y2 = [10, 14, 12]

# fig = plt.figure()

ax = plt.subplot2grid((1, 1), (0, 0))

ax.plot(x, y, label='First Line')
ax.plot(x2, y2, label='Second Line')
ax.axhline(max(y), color='black', linewidth=0.75)
ax.fill_between(x, y, 0, alpha=0.2)
ax.fill_between(x2, y2, y, alpha=0.2)

for label in ax.xaxis.get_ticklabels():
    label.set_rotation(45)

ax.grid(True) # color='lightgreen', linestyle='dotted'

ax.xaxis.label.set_color('c')
ax.yaxis.label.set_color('r')

ax.set_yticks([1, 3, 5, 7, 9, 11, 13, 15])

ax.spines['left'].set_color('r')
ax.spines['left'].set_linewidth(2)
ax.spines['bottom'].set_color('c')
ax.spines['bottom'].set_linewidth(2)
ax.spines['right'].set_visible(False)
ax.spines['top'].set_visible(False)

ax.tick_params(axis='x', colors='c')
ax.tick_params(axis='y', colors='r')

plt.title('Interesting Graph\nCheck It Out')
plt.xlabel('X')
plt.ylabel('Y')
plt.legend()
plt.subplots_adjust(left=0.09, bottom=0.15, right=0.94, top=0.9, wspace=0.2, hspace=0)
plt.show()