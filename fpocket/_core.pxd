# fpocket/_core.pxd
cdef extern from "fpocket_core.h":
    int detect_pockets(const char *input_pdb_filename, const char *output_dir)
