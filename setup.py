# setup.py
from setuptools import setup, Extension
from Cython.Build import cythonize
import os

# Tutti i file C
c_src_dir = "c_src"
c_files = [os.path.join(c_src_dir, file) for file in os.listdir(c_src_dir) if file.endswith(".c")]

# Aggiungiamo anche il nostro fpocket_core.c
c_files.append(os.path.join("fpocket", "fpocket_core.c"))

extensions = [
    Extension(
        "fpocket._core",
        sources=["fpocket/_core.pyx"] + c_files,
        include_dirs=["include", "fpocket"], # dove ci sono .h
        language="c"
    )
]

setup(
    name="fpocket_py",
    ext_modules=cythonize(extensions, compiler_directives={'language_level': "3"}),
    packages=["fpocket"],
)
