# Read data/people.csv and compute simple summaries
import csv, statistics as stats, pathlib
path = pathlib.Path(__file__).resolve().parents[2] / "data" / "people.csv"
ages = []
with open(path, newline="") as f:
    for row in csv.DictReader(f):
        ages.append(int(row["age"]))
print("count:", len(ages))
print("min  :", min(ages))
print("max  :", max(ages))
print("mean :", round(stats.mean(ages),2))
