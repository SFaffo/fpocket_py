// fpocket_core.h
#ifndef FPOCKET_CORE_H
#define FPOCKET_CORE_H

#ifdef __cplusplus
extern "C" {
#endif

int detect_pockets(const char *input_pdb_filename, const char *output_dir);

#ifdef __cplusplus
}
#endif

#endif // FPOCKET_CORE_H
