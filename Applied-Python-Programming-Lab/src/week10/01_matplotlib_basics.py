import matplotlib.pyplot as plt
x = list(range(1,11))
y = [i*i for i in x]
plt.plot(x,y, marker='o')
plt.title('Squares 1..10')
plt.xlabel('x'); plt.ylabel('x^2')
plt.tight_layout()
plt.savefig('docs/squares_plot.png')
print("Saved docs/squares_plot.png")
