import pandas as pd, pathlib
base = pathlib.Path(__file__).resolve().parents[2]
df = pd.read_csv(base/'data'/'people.csv')
print(df.head())
print("\nAge stats:")
print(df['age'].describe())
