#include <stdio.h> 
#include <stdlib.h>
#include "glpk.h"


int main(void) {

    glp_prob *lp; 
    int ia[1+1000], ja[1+1000];
    double ar[1+1000], z,
            xa1t1, xa1t2, xa1t3, xa1t4, xa1t5,
            xa2t1, xa2t2, xa2t3, xa2t4, xa2t5,
            xa3t1, xa3t2, xa3t3, xa3t4, xa3t5;

    lp = glp_create_prob();
    glp_set_prob_name(lp, "sample");
    glp_set_obj_dir(lp, GLP_MAX);
    
    // Restições
    lp_add_rows(lp, 16);

    // Restrições Alunos
    glp_set_row_name(lp, 1, "v1a1");
    glp_set_row_bnds(lp, 1, GLP_LO, 1.0, 0.0);
    glp_set_row_name(lp, 2, "v2a1");
    glp_set_row_bnds(lp, 2, GLP_UP, 0.0, 4.0);
    glp_set_row_name(lp, 3, "v1a2");
    glp_set_row_bnds(lp, 3, GLP_LO, 1.0, 0.0);
    glp_set_row_name(lp, 4, "v2a2");
    glp_set_row_bnds(lp, 4, GLP_UP, 0.0, 4.0);
    glp_set_row_name(lp, 5, "v1a3");
    glp_set_row_bnds(lp, 5, GLP_LO, 1.0, 0.0);
    glp_set_row_name(lp, 6, "v2a3");
    glp_set_row_bnds(lp, 6, GLP_UP, 0.0, 4.0);

    // Restrições Tarefas
    glp_set_row_name(lp, 7, "v1t1");
    glp_set_row_bnds(lp, 7, GLP_LO, 1.0, 0.0);
    glp_set_row_name(lp, 8, "v2t1");
    glp_set_row_bnds(lp, 8, GLP_UP, 0.0, 13.0);
    glp_set_row_name(lp, 9, "v1t2");
    glp_set_row_bnds(lp, 9, GLP_LO, 1.0, 0.0);
    glp_set_row_name(lp, 10, "v2t2");
    glp_set_row_bnds(lp, 10, GLP_UP, 0.0, 8.0);
    glp_set_row_name(lp, 11, "v1t3");
    glp_set_row_bnds(lp, 11, GLP_LO, 1.0, 0.0);
    glp_set_row_name(lp, 12, "v2t3");
    glp_set_row_bnds(lp, 12, GLP_UP, 0.0, 8.0);
    glp_set_row_name(lp, 13, "v1t4");
    glp_set_row_bnds(lp, 13, GLP_LO, 1.0, 0.0);
    glp_set_row_name(lp, 14, "v2t4");
    glp_set_row_bnds(lp, 14, GLP_UP, 0.0, 8.0);
    glp_set_row_name(lp, 15, "v1t5");
    glp_set_row_bnds(lp, 15, GLP_LO, 1.0, 0.0);
    glp_set_row_name(lp, 16, "v2t5");
    glp_set_row_bnds(lp, 16, GLP_UP, 0.0, 5.0);


    // Função Objetivo
    glp_add_cols(lp, 5);
    glp_set_col_name(lp, 1, "xa1t1");
    glp_set_col_bnds(lp, 1, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 1, 3.0);
    glp_set_col_name(lp, 2, "xa1t2");
    glp_set_col_bnds(lp, 2, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 2, 5.0);
    glp_set_col_name(lp, 3, "xa1t3");
    glp_set_col_bnds(lp, 3, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 3, 5.0);
    glp_set_col_name(lp, 4, "xa1t4");
    glp_set_col_bnds(lp, 4, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 4, 3.0);
    glp_set_col_name(lp, 5, "xa1t5");
    glp_set_col_bnds(lp, 5, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 5, 8.0);

    glp_set_col_name(lp, 6, "xa2t1");
    glp_set_col_bnds(lp, 6, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 6, 8.0);
    glp_set_col_name(lp, 7, "xa2t2");
    glp_set_col_bnds(lp, 7, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 7, 5.0);
    glp_set_col_name(lp, 8, "xa2t3");
    glp_set_col_bnds(lp, 8, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 8, 5.0);
    glp_set_col_name(lp, 9, "xa2t4");
    glp_set_col_bnds(lp, 9, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 9, 2.0);
    glp_set_col_name(lp, 10, "xa2t5");
    glp_set_col_bnds(lp, 10, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 10, 3.0);

    glp_set_col_name(lp, 11, "xa3t1");
    glp_set_col_bnds(lp, 11, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 11, 8.0);
    glp_set_col_name(lp, 12, "xa3t2");
    glp_set_col_bnds(lp, 12, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 12, 3.0);
    glp_set_col_name(lp, 13, "xa3t3");
    glp_set_col_bnds(lp, 13, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 13, 3.0);
    glp_set_col_name(lp, 14, "xa3t4");
    glp_set_col_bnds(lp, 14, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 14, 2.0);
    glp_set_col_name(lp, 15, "xa3t5");
    glp_set_col_bnds(lp, 15, GLP_LO, 0.0, 0.0);
    glp_set_obj_coef(lp, 15, 2.0);

    // Matriz de Restrições

    // Alunos
    ia[1] = 1, ja[1] = 1, ar[1] = 1.0;     /* a[1,1] = 1 */ 
    ia[2] = 1, ja[2] = 2, ar[2] = 1.0;     /* a[1,2] = 1 */
    ia[3] = 1, ja[3] = 3, ar[3] = 1.0;     /* a[1,3] = 1 */
    ia[4] = 1, ja[4] = 4, ar[4] = 1.0;     /* a[1,4] = 1 */
    ia[5] = 1, ja[5] = 5, ar[5] = 1.0;     /* a[1,5] = 1 */

    ia[6] = 2, ja[6] = 1, ar[6] = 1.0;     /* a[2,1] = 1 */ 
    ia[7] = 2, ja[7] = 2, ar[7] = 1.0;     /* a[2,2] = 1 */
    ia[8] = 2, ja[8] = 3, ar[8] = 1.0;     /* a[2,3] = 1 */
    ia[9] = 2, ja[9] = 4, ar[9] = 1.0;     /* a[2,4] = 1 */
    ia[10] = 2, ja[10] = 5, ar[10] = 1.0;  /* a[2,5] = 1 */
    
    ia[11] = 3, ja[11] = 1, ar[11] = 1.0;  /* a[3,1] = 1 */ 
    ia[12] = 3, ja[12] = 2, ar[12] = 1.0;  /* a[3,2] = 1 */
    ia[13] = 3, ja[13] = 3, ar[13] = 1.0;  /* a[3,3] = 1 */
    ia[14] = 3, ja[14] = 4, ar[14] = 1.0;  /* a[3,4] = 1 */
    ia[15] = 3, ja[15] = 5, ar[15] = 1.0;  /* a[3,5] = 1 */

    // Tarefas
    ia[16] = 4, ja[16] = 1, ar[16] = 3.0;   /* a[4,1] = 3 */ 
    ia[17] = 4, ja[17] = 2, ar[17] = 8.0;   /* a[4,2] = 8 */
    ia[18] = 4, ja[18] = 3, ar[18] = 8.0;   /* a[4,3] = 8 */
    ia[19] = 4, ja[19] = 4, ar[19] = 0.0;   /* a[4,4] = 0 */
    ia[20] = 4, ja[20] = 5, ar[20] = 0.0;   /* a[4,5] = 0 */

    ia[21] = 5, ja[21] = 1, ar[21] = 5.0;   /* a[5,1] = 5 */
    ia[22] = 5, ja[22] = 2, ar[22] = 5.0;   /* a[5,2] = 5 */
    ia[23] = 5, ja[23] = 3, ar[23] = 3.0;   /* a[5,3] = 3 */
    ia[24] = 5, ja[24] = 4, ar[24] = 0.0;   /* a[5,4] = 0 */
    ia[25] = 5, ja[25] = 5, ar[25] = 0.0;   /* a[5,5] = 0 */

    ia[26] = 6, ja[26] = 1, ar[26] = 5.0;   /* a[6,1] = 5 */ 
    ia[27] = 6, ja[27] = 2, ar[27] = 5.0;   /* a[6,2] = 5 */
    ia[28] = 6, ja[28] = 3, ar[28] = 3.0;   /* a[6,3] = 3 */
    ia[29] = 6, ja[29] = 4, ar[29] = 0.0;   /* a[6,4] = 0 */
    ia[30] = 6, ja[30] = 5, ar[30] = 0.0;   /* a[6,5] = 0 */

    ia[31] = 7, ja[31] = 1, ar[31] = 3.0;     /* a[7,1] = 3 */ 
    ia[32] = 7, ja[32] = 2, ar[32] = 2.0;     /* a[7,2] = 2 */
    ia[33] = 7, ja[33] = 3, ar[33] = 2.0;     /* a[7,3] = 2 */
    ia[34] = 7, ja[34] = 4, ar[34] = 0.0;     /* a[7,4] = 0 */
    ia[35] = 7, ja[35] = 5, ar[35] = 0.0;     /* a[7,5] = 0 */

    ia[36] = 8, ja[36] = 1, ar[36] = 8.0;     /* a[8,1] = 8 */ 
    ia[37] = 8, ja[37] = 2, ar[37] = 3.0;     /* a[8,2] = 3 */
    ia[38] = 8, ja[38] = 3, ar[38] = 2.0;     /* a[8,3] = 2 */
    ia[39] = 8, ja[39] = 4, ar[39] = 0.0;     /* a[8,4] = 0 */
    ia[40] = 8, ja[40] = 5, ar[40] = 0.0;     /* a[8,5] = 0 */

    glp_load_matrix(lp, 40, ia, ja, ar);
    glp_simplex(lp, NULL);
    z = glp_get_obj_val(lp);
    xa1t1 = glp_get_col_prim(lp, 1);
    xa1t2 = glp_get_col_prim(lp, 2);
    xa1t3 = glp_get_col_prim(lp, 3);
    xa1t4 = glp_get_col_prim(lp, 4);
    xa1t5 = glp_get_col_prim(lp, 5);
    xa2t1 = glp_get_col_prim(lp, 6);
    xa2t2 = glp_get_col_prim(lp, 7);
    xa2t3 = glp_get_col_prim(lp, 8);
    xa2t4 = glp_get_col_prim(lp, 9);
    xa2t5 = glp_get_col_prim(lp, 10);
    xa3t1 = glp_get_col_prim(lp, 11);
    xa3t2 = glp_get_col_prim(lp, 12);
    xa3t3 = glp_get_col_prim(lp, 13);
    xa3t4 = glp_get_col_prim(lp, 14);
    xa3t5 = glp_get_col_prim(lp, 15);
    printf("\nz = %g; \n
            xa1t1 = %g; xa1t2 = %g; xa1t3 = %g; xa1t4 = %g; xa1t5 = %g\n
            xa2t1 = %g; xa2t2 = %g; xa2t3 = %g; xa2t4 = %g; xa2t5 = %g\n
            xa3t1 = %g; xa3t2 = %g; xa3t3 = %g; xa3t4 = %g; xa3t5 = %g\n", 
            z, xa1t1, xa1t2, xa1t3, xa1t4, xa1t5, xa2t1, xa2t2, xa2t3, 
            xa2t4, xa2t5, xa3t1, xa3t2, xa3t3, xa3t4, xa3t5);
    glp_delete_prob(lp);
    return 0; 
}  