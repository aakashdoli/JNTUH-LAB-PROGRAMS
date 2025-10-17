# Copy a file
import sys, shutil
if len(sys.argv)!=3:
    print("Usage: python 01_file_copy.py src dest"); sys.exit(1)
shutil.copyfile(sys.argv[1], sys.argv[2])
print("Copied.")
