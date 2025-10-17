# APPLIED PYTHON PROGRAMMING LAB (JNTUH)

This folder contains **structured Python lab programs** mapped across **10 weeks**.  
Each program is a simple, self-contained `.py` with clear comments and sample I/O.  
A couple of small datasets and one notebook are included for data tasks.

## Layout
```
Applied-Python-Programming-Lab/
  src/week01..week10/     # Python programs grouped by lab week
  data/                   # small CSV/JSON sample files
  notebooks/              # 1-2 quick demo notebooks
  docs/                   # extra notes
  tests/                  # basic unit tests
  requirements.txt        # numpy, pandas, matplotlib
  run.sh                  # helper to run a file like: ./run.sh week03/03_dict_frequency.py
```
## Setup
```bash
python3 -m venv .venv
source .venv/bin/activate   # Windows: .venv\Scripts\activate
pip install -r requirements.txt
```

## Run
```bash
# generic helper (from repo root)
./run.sh week01/01_hello.py

# or directly
python src/week01/01_hello.py
```

## Tests
```bash
pytest -q
```

> All code avoids internet access and uses only standard libraries unless otherwise noted in `requirements.txt`.
