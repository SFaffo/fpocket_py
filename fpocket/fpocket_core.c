// fpocket_core.c
#include "fpmain.h"
#include "fpocket_core.h"
#include "tparams.h" // serve per la struct t_params

#include <stdlib.h>
#include <string.h>

/**
 * Funzione principale per detect_pockets
 * input_pdb_filename: path al file PDB da analizzare
 * output_dir: directory dove salvare i risultati
 */
int detect_pockets(const char *input_pdb_filename, const char *output_dir) {
    t_params *params;

    params = init_def_tparams(); // Inizializza i parametri di default
    if (!params) {
        return -1; // errore di allocazione
    }

    params->pdb_path = strdup(input_pdb_filename); // Salva path pdb
    params->out_path = strdup(output_dir);         // Salva output directory
    params->flag_out = 1;                           // Abilita output directory

    int result = main_fpocket(params); // Lancia il cuore di fpocket

    free_tparams(params); // Libera memoria
    return result; // 0 successo, diverso da 0 errore
}
