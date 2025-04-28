# fpocket/_core.pyx

cdef extern from "fpocket_core.h":
    int detect_pockets(const char *input_pdb_filename, const char *output_dir)

def run_fpocket(str input_pdb_filename, str output_dir):
    """
    Wrapper Python per la funzione detect_pockets in C
    """
    cdef int ret
    ret = detect_pockets(input_pdb_filename.encode('utf-8'), output_dir.encode('utf-8'))
    if ret != 0:
        raise RuntimeError(f"Fpocket failed with error code {ret}")
    return ret
