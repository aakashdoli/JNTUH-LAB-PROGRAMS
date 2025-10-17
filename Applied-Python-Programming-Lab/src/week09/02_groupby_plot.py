import pandas as pd, matplotlib.pyplot as plt, pathlib
base = pathlib.Path(__file__).resolve().parents[2]
df = pd.read_csv(base/'data'/'people.csv')
g = df.groupby('city')['age'].mean().sort_values()
print(g)

ax = g.plot(kind='bar', title='Average Age by City')
ax.set_ylabel('Age')
plt.tight_layout()
plt.savefig(base/'docs'/'avg_age_by_city.png')
print("Saved plot to docs/avg_age_by_city.png")
