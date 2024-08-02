#include "mkl_pardiso_shim.h"

// C routines
void pardiso(_MKL_DSS_HANDLE_t pt, const MKL_INT *maxfct, const MKL_INT *mnum,
             const MKL_INT *mtype, const MKL_INT *phase, const MKL_INT *n,
             const void *a, const MKL_INT *ia, const MKL_INT *ja,
             MKL_INT *perm, const MKL_INT *nrhs, MKL_INT *iparm,
             const MKL_INT *msglvl, void *b, void *x, MKL_INT *error) {
    mkl_pardiso(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO(_MKL_DSS_HANDLE_t pt, const MKL_INT *maxfct, const MKL_INT *mnum,
             const MKL_INT *mtype, const MKL_INT *phase, const MKL_INT *n,
             const void *a, const MKL_INT *ia, const MKL_INT *ja,
             MKL_INT *perm, const MKL_INT *nrhs, MKL_INT *iparm,
             const MKL_INT *msglvl, void *b, void *x, MKL_INT *error) {
    MKL_PARDISO(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardisoinit(_MKL_DSS_HANDLE_t pt, const MKL_INT *mtype, MKL_INT *iparm) {
    mkl_pardisoinit(pt, mtype, iparm);
}

void PARDISOINIT(_MKL_DSS_HANDLE_t pt, const MKL_INT *mtype, MKL_INT *iparm) {
    MKL_PARDISOINIT(pt, mtype, iparm);
}

void pardiso_handle_store(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    mkl_pardiso_handle_store(pt, dirname, error);
}

void PARDISO_HANDLE_STORE(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    MKL_PARDISO_HANDLE_STORE(pt, dirname, error);
}

void pardiso_handle_restore(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    mkl_pardiso_handle_restore(pt, dirname, error);
}

void PARDISO_HANDLE_RESTORE(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    MKL_PARDISO_HANDLE_RESTORE(pt, dirname, error);
}

void pardiso_handle_delete(const char *dirname, MKL_INT *error) {
    mkl_pardiso_handle_delete(dirname, error);
}

void PARDISO_HANDLE_DELETE(const char *dirname, MKL_INT *error) {
    MKL_PARDISO_HANDLE_DELETE(dirname, error);
}

void pardiso_64(_MKL_DSS_HANDLE_t pt, const long long int *maxfct,
                const long long int *mnum, const long long int *mtype,
                const long long int *phase, const long long int *n,
                const void *a, const long long int *ia, const long long int *ja,
                long long int *perm, const long long int *nrhs, long long int *iparm,
                const long long int *msglvl, void *b, void *x,
                long long int *error) {
    mkl_pardiso_64(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_64(_MKL_DSS_HANDLE_t pt, const long long int *maxfct,
                const long long int *mnum, const long long int *mtype,
                const long long int *phase, const long long int *n,
                const void *a, const long long int *ia, const long long int *ja,
                long long int *perm, const long long int *nrhs, long long int *iparm,
                const long long int *msglvl, void *b, void *x,
                long long int *error) {
    MKL_PARDISO_64(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardiso_handle_store_64(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    mkl_pardiso_handle_store_64(pt, dirname, error);
}

void PARDISO_HANDLE_STORE_64(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    MKL_PARDISO_HANDLE_STORE_64(pt, dirname, error);
}

void pardiso_handle_restore_64(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    mkl_pardiso_handle_restore_64(pt, dirname, error);
}

void PARDISO_HANDLE_RESTORE_64(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    MKL_PARDISO_HANDLE_RESTORE_64(pt, dirname, error);
}

void pardiso_handle_delete_64(const char *dirname, MKL_INT *error) {
    mkl_pardiso_handle_delete_64(dirname, error);
}

void PARDISO_HANDLE_DELETE_64(const char *dirname, MKL_INT *error) {
    MKL_PARDISO_HANDLE_DELETE_64(dirname, error);
}

int mkl_pardiso_pivot(const double* aii, double* bii, const double* eps) {
    return mkl_mkl_pardiso_pivot(aii, bii, eps);
}

int MKL_PARDISO_PIVOT(const double* aii, double* bii, const double* eps) {
    return MKL_MKL_PARDISO_PIVOT(aii, bii, eps);
}

int mkl_pardiso_pivot_(const double* aii, double* bii, const double* eps) {
    return mkl_mkl_pardiso_pivot_(aii, bii, eps);
}

int MKL_PARDISO_PIVOT_(const double* aii, double* bii, const double* eps) {
    return MKL_MKL_PARDISO_PIVOT_(aii, bii, eps);
}

void pardiso_getdiag(const _MKL_DSS_HANDLE_t pt, void *df, void *da,
                         const MKL_INT *mnum, MKL_INT *error) {
    mkl_pardiso_getdiag(pt, df, da, mnum, error);
}

void PARDISO_GETDIAG(const _MKL_DSS_HANDLE_t pt, void *df, void *da,
                         const MKL_INT *mnum, MKL_INT *error) {
    MKL_PARDISO_GETDIAG(pt, df, da, mnum, error);
}

void pardiso_export(void *pt, void* values, MKL_INT* ia, MKL_INT *ja,
                        const MKL_INT *step, const MKL_INT *iparm, MKL_INT *error) {
    mkl_pardiso_export(pt, values, ia, ja, step, iparm, error);
}

void PARDISO_EXPORT(void *pt, void* values, MKL_INT* ia, MKL_INT *ja,
                        const MKL_INT *step, const MKL_INT *iparm, MKL_INT *error) {
    MKL_PARDISO_EXPORT(pt, values, ia, ja, step, iparm, error);
}

// Fortran routines
void PARDISO_S_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                    int n, float *a, int *ia, int *ja, int *perm,
                    int nrhs, int *iparm, int msglvl, float *b, float *x, int *error) {
    MKL_PARDISO_S_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
               nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_D_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                    int n, double *a, int *ia, int *ja, int *perm,
                    int nrhs, int *iparm, int msglvl, double *b, double *x, int *error) {
    MKL_PARDISO_D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
               nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_SC_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                     int n, void *a, int *ia, int *ja, int *perm,
                     int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    MKL_PARDISO_SC_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_DC_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                     int n, void *a, int *ia, int *ja, int *perm,
                     int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    MKL_PARDISO_DC_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_S_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, float *a, int *ia,
                       int *ja, int *perm, int nrhs, int *iparm, int msglvl, float *b, float *x, int *error) {
    MKL_PARDISO_S_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_D_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, double *a, int *ia,
                       int *ja, int *perm, int nrhs, int *iparm, int msglvl, double *b, double *x, int *error) {
    MKL_PARDISO_D_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_SC_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                        int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    MKL_PARDISO_SC_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_DC_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                        int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    MKL_PARDISO_DC_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_S_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, float *a, long long *ia, long long *ja, long long *perm,
                       long long nrhs, long long *iparm, long long msglvl, float *b, float *x, long long *error) {
    MKL_PARDISO_S_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                  nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_D_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, double *a, long long *ia, long long *ja, long long *perm,
                       long long nrhs, long long *iparm, long long msglvl, double *b, double *x, long long *error) {
    MKL_PARDISO_D_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                  nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_SC_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                        long long n, void *a, long long *ia, long long *ja, long long *perm,
                        long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    MKL_PARDISO_SC_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                   nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_DC_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                        long long n, void *a, long long *ia, long long *ja, long long *perm,
                        long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    MKL_PARDISO_DC_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                   nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_S_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                          long long n, float *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                          long long *iparm, long long msglvl, float *b, float *x, long long *error) {
    MKL_PARDISO_S_64_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_D_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                          long long n, double *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                          long long *iparm, long long msglvl, double *b, double *x, long long *error) {
    MKL_PARDISO_D_64_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_SC_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                           long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                           long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    MKL_PARDISO_SC_64_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_DC_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                           long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                           long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    MKL_PARDISO_DC_64_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void PARDISO_EXPORT_S_(void *pt[], float *values, int *ia, int *ja, int step, int *iparm, int *error) {
    MKL_PARDISO_EXPORT_S_(pt, values, ia, ja, step, iparm, error);
}

void PARDISO_EXPORT_D_(void *pt[], double *values, int *ia, int *ja, int step, int *iparm, int *error) {
    MKL_PARDISO_EXPORT_D_(pt, values, ia, ja, step, iparm, error);
}

void PARDISO_EXPORT_C_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error) {
    MKL_PARDISO_EXPORT_C_(pt, values, ia, ja, step, iparm, error);
}

void PARDISO_EXPORT_Z_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error) {
    MKL_PARDISO_EXPORT_Z_(pt, values, ia, ja, step, iparm, error);
}

void PARDISO_GETDIAG_D_(void *pt[], double *diag_fact, double *diag_a, int mnum, int *error) {
    MKL_PARDISO_GETDIAG_D_(pt, diag_fact, diag_a, mnum, error);
}

void PARDISO_GETDIAG_Z_(void *pt[], void *diag_fact, void *diag_a, int mnum, int *error) {
    MKL_PARDISO_GETDIAG_Z_(pt, diag_fact, diag_a, mnum, error);
}

void pardiso_s_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                int n, float *a, int *ia, int *ja, int *perm,
                int nrhs, int *iparm, int msglvl, float *b, float *x, int *error) {
    mkl_pardiso_s_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                   nrhs, iparm, msglvl, b, x, error);
}

void pardiso_d_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                int n, double *a, int *ia, int *ja, int *perm,
                int nrhs, int *iparm, int msglvl, double *b, double *x, int *error) {
    mkl_pardiso_d_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                   nrhs, iparm, msglvl, b, x, error);
}

void pardiso_sc_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                 int n, void *a, int *ia, int *ja, int *perm,
                 int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    mkl_pardiso_sc_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                    nrhs, iparm, msglvl, b, x, error);
}

void pardiso_dc_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                 int n, void *a, int *ia, int *ja, int *perm,
                 int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    mkl_pardiso_dc_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                    nrhs, iparm, msglvl, b, x, error);
}

void pardiso_s_2d_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, float *a, int *ia,
                   int *ja, int *perm, int nrhs, int *iparm, int msglvl, float *b, float *x, int *error) {
    mkl_pardiso_s_2d_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardiso_d_2d_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, double *a, int *ia,
                   int *ja, int *perm, int nrhs, int *iparm, int msglvl, double *b, double *x, int *error) {
    mkl_pardiso_d_2d_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardiso_sc_2d_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                    int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    mkl_pardiso_sc_2d_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardiso_dc_2d_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                    int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    mkl_pardiso_dc_2d_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardiso_s_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                   long long n, float *a, long long *ia, long long *ja, long long *perm,
                   long long nrhs, long long *iparm, long long msglvl, float *b, float *x, long long *error) {
    mkl_pardiso_s_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                      nrhs, iparm, msglvl, b, x, error);
}

void pardiso_d_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                   long long n, double *a, long long *ia, long long *ja, long long *perm,
                   long long nrhs, long long *iparm, long long msglvl, double *b, double *x, long long *error) {
    mkl_pardiso_d_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                      nrhs, iparm, msglvl, b, x, error);
}

void pardiso_sc_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                    long long n, void *a, long long *ia, long long *ja, long long *perm,
                    long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    mkl_pardiso_sc_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                       nrhs, iparm, msglvl, b, x, error);
}

void pardiso_dc_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                    long long n, void *a, long long *ia, long long *ja, long long *perm,
                    long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    mkl_pardiso_dc_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                       nrhs, iparm, msglvl, b, x, error);
}

void pardiso_s_64_2d_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                      long long n, float *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                      long long *iparm, long long msglvl, float *b, float *x, long long *error) {
    mkl_pardiso_s_64_2d_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardiso_d_64_2d_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                      long long n, double *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                      long long *iparm, long long msglvl, double *b, double *x, long long *error) {
    mkl_pardiso_d_64_2d_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardiso_sc_64_2d_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                       long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    mkl_pardiso_sc_64_2d_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardiso_dc_64_2d_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                       long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    mkl_pardiso_dc_64_2d_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void pardiso_export_s_(void *pt[], float *values, int *ia, int *ja, int step, int *iparm, int *error) {
    mkl_pardiso_export_s_(pt, values, ia, ja, step, iparm, error);
}

void pardiso_export_d_(void *pt[], double *values, int *ia, int *ja, int step, int *iparm, int *error) {
    mkl_pardiso_export_d_(pt, values, ia, ja, step, iparm, error);
}

void pardiso_export_c_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error) {
    mkl_pardiso_export_c_(pt, values, ia, ja, step, iparm, error);
}

void pardiso_export_z_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error) {
    mkl_pardiso_export_z_(pt, values, ia, ja, step, iparm, error);
}

void pardiso_getdiag_d_(void *pt[], double *diag_fact, double *diag_a, int mnum, int *error) {
    mkl_pardiso_getdiag_d_(pt, diag_fact, diag_a, mnum, error);
}

void pardiso_getdiag_z_(void *pt[], void *diag_fact, void *diag_a, int mnum, int *error) {
    mkl_pardiso_getdiag_z_(pt, diag_fact, diag_a, mnum, error);
}
