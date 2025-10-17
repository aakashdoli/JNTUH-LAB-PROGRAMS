# Mini project: simple CSV summary + plot
import pandas as pd, matplotlib.pyplot as plt, pathlib
base = pathlib.Path(__file__).resolve().parents[2]
df = pd.read_csv(base/'data'/'sales.csv')
summary = df.groupby('product')['revenue'].sum().sort_values(ascending=False)
print(summary)

ax = summary.plot(kind='bar', title='Revenue by Product')
ax.set_ylabel('Revenue')
plt.tight_layout()
plt.savefig(base/'docs'/'revenue_by_product.png')
print("Saved docs/revenue_by_product.png")
