import matplotlib.pyplot as plt

population_ages = [22, 55, 62, 45, 21, 22, 34, 43, 43, 4, 99, 102, 110, 120, 122, 130, 111, 115, 112, 80, 75, 65, 54, 44, 43, 42, 48]

ids = [x for x in range(len(population_ages))]

plt.bar(ids, population_ages)

plt.title('Interesting Graph\nCheck It Out')

plt.xlabel('X')
plt.ylabel('Y')

plt.legend()
plt.show()