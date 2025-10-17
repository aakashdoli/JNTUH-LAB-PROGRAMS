import numpy as np
A = np.array([[1,2],[3,4]])
B = np.array([[5,6],[7,8]])
print("A+B=
", A+B)
print("A@B=
", A@B)
print("det(A)=", np.linalg.det(A))
print("eig(A)=", np.linalg.eigvals(A))
