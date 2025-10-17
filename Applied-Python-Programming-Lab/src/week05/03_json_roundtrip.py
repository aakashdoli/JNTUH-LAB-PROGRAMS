import json
user = {"name":"Aakash","skills":["python","c"],"active":True,"score":91}
s = json.dumps(user, indent=2)
print("JSON:"); print(s)
obj = json.loads(s)
print("Back to dict:", obj)
