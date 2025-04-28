# fpocket-py

**fpocket-py** è una versione Python bindings della libreria originale **fpocket**, realizzata tramite **Cython**.  
Fpocket è uno strumento di analisi delle cavità proteiche basato su triangolazione di Voronoi.

## Installazione

1. Clona la repository:
    ```bash
    git clone https://github.com/SFaffo/fpocket-py.git
    cd fpocket_py
    ```

2. Installa con `pip`:
    ```bash
    pip install .
    ```

    Oppure in sviluppo:
    ```bash
    pip install -e .
    ```

> È necessario Python >=3.8, oltre a Cython e un compilatore C compatibile.

## Utilizzo rapido

Esempio minimale per avviare un'analisi fpocket da Python:

```python
import fpocket_py as fp

results = fp.run_fpocket("path/to/protein.pdb")

for pocket in results.pockets:
    print(f"Pockets trovati: Volume={pocket.volume}, Score={pocket.score}")
