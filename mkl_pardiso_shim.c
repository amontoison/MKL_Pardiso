#include "mkl_pardiso.h"

// Headers
void PARDISO_S_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                    int n, float *a, int *ia, int *ja, int *perm,
                    int nrhs, int *iparm, int msglvl, float *b, float *x, int *error);

void PARDISO_D_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                    int n, double *a, int *ia, int *ja, int *perm,
                    int nrhs, int *iparm, int msglvl, double *b, double *x, int *error);

void PARDISO_SC_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                     int n, void *a, int *ia, int *ja, int *perm,
                     int nrhs, int *iparm, int msglvl, void *b, void *x, int *error);

void PARDISO_DC_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                     int n, void *a, int *ia, int *ja, int *perm,
                     int nrhs, int *iparm, int msglvl, void *b, void *x, int *error);

void PARDISO_S_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, float *a, int *ia,
                       int *ja, int *perm, int nrhs, int *iparm, int msglvl, float *b, float *x, int *error);

void PARDISO_D_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, double *a, int *ia,
                       int *ja, int *perm, int nrhs, int *iparm, int msglvl, double *b, double *x, int *error);

void PARDISO_SC_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                        int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error);

void PARDISO_DC_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                        int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error);

void PARDISO_S_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, float *a, long long *ia, long long *ja, long long *perm,
                       long long nrhs, long long *iparm, long long msglvl, float *b, float *x, long long *error);

void PARDISO_D_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, double *a, long long *ia, long long *ja, long long *perm,
                       long long nrhs, long long *iparm, long long msglvl, double *b, double *x, long long *error);

void PARDISO_SC_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                        long long n, void *a, long long *ia, long long *ja, long long *perm,
                        long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error);

void PARDISO_DC_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                        long long n, void *a, long long *ia, long long *ja, long long *perm,
                        long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error);

void PARDISO_S_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                          long long n, float *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                          long long *iparm, long long msglvl, float *b, float *x, long long *error);

void PARDISO_D_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                          long long n, double *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                          long long *iparm, long long msglvl, double *b, double *x, long long *error);

void PARDISO_SC_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                           long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                           long long *iparm, long long msglvl, void *b, void *x, long long *error);

void PARDISO_DC_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                           long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                           long long *iparm, long long msglvl, void *b, void *x, long long *error);

void PARDISO_EXPORT_S_(void *pt[], float *values, int *ia, int *ja, int step, int *iparm, int *error);

void PARDISO_EXPORT_D_(void *pt[], double *values, int *ia, int *ja, int step, int *iparm, int *error);

void PARDISO_EXPORT_C_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error);

void PARDISO_EXPORT_Z_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error);

void PARDISO_GETDIAG_D_(void *pt[], double *diag_fact, double *diag_a, int mnum, int *error);

void PARDISO_GETDIAG_Z_(void *pt[], void *diag_fact, void *diag_a, int mnum, int *error);

// C routines
void mkl_pardiso(_MKL_DSS_HANDLE_t pt, const MKL_INT *maxfct, const MKL_INT *mnum,
                 const MKL_INT *mtype, const MKL_INT *phase, const MKL_INT *n,
                 const void *a, const MKL_INT *ia, const MKL_INT *ja,
                 MKL_INT *perm, const MKL_INT *nrhs, MKL_INT *iparm,
                 const MKL_INT *msglvl, void *b, void *x, MKL_INT *error) {
    pardiso(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO(_MKL_DSS_HANDLE_t pt, const MKL_INT *maxfct, const MKL_INT *mnum,
                 const MKL_INT *mtype, const MKL_INT *phase, const MKL_INT *n,
                 const void *a, const MKL_INT *ia, const MKL_INT *ja,
                 MKL_INT *perm, const MKL_INT *nrhs, MKL_INT *iparm,
                 const MKL_INT *msglvl, void *b, void *x, MKL_INT *error) {
    PARDISO(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void mkl_pardisoinit(_MKL_DSS_HANDLE_t pt, const MKL_INT *mtype, MKL_INT *iparm) {
    pardisoinit(pt, mtype, iparm);
}

void MKL_PARDISOINIT(_MKL_DSS_HANDLE_t pt, const MKL_INT *mtype, MKL_INT *iparm) {
    PARDISOINIT(pt, mtype, iparm);
}

void mkl_pardiso_handle_store(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    pardiso_handle_store(pt, dirname, error);
}

void MKL_PARDISO_HANDLE_STORE(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    PARDISO_HANDLE_STORE(pt, dirname, error);
}

void mkl_pardiso_handle_restore(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    pardiso_handle_restore(pt, dirname, error);
}

void MKL_PARDISO_HANDLE_RESTORE(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    PARDISO_HANDLE_RESTORE(pt, dirname, error);
}

void mkl_pardiso_handle_delete(const char *dirname, MKL_INT *error) {
    pardiso_handle_delete(dirname, error);
}

void MKL_PARDISO_HANDLE_DELETE(const char *dirname, MKL_INT *error) {
    PARDISO_HANDLE_DELETE(dirname, error);
}

void mkl_pardiso_64(_MKL_DSS_HANDLE_t pt, const long long int *maxfct,
                    const long long int *mnum, const long long int *mtype,
                    const long long int *phase, const long long int *n,
                    const void *a, const long long int *ia, const long long int *ja,
                    long long int *perm, const long long int *nrhs, long long int *iparm,
                    const long long int *msglvl, void *b, void *x,
                    long long int *error) {
    pardiso_64(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_64(_MKL_DSS_HANDLE_t pt, const long long int *maxfct,
                    const long long int *mnum, const long long int *mtype,
                    const long long int *phase, const long long int *n,
                    const void *a, const long long int *ia, const long long int *ja,
                    long long int *perm, const long long int *nrhs, long long int *iparm,
                    const long long int *msglvl, void *b, void *x,
                    long long int *error) {
    PARDISO_64(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void mkl_pardiso_handle_store_64(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    pardiso_handle_store_64(pt, dirname, error);
}

void MKL_PARDISO_HANDLE_STORE_64(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    PARDISO_HANDLE_STORE_64(pt, dirname, error);
}

void mkl_pardiso_handle_restore_64(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    pardiso_handle_restore_64(pt, dirname, error);
}

void MKL_PARDISO_HANDLE_RESTORE_64(_MKL_DSS_HANDLE_t pt, const char *dirname, MKL_INT *error) {
    PARDISO_HANDLE_RESTORE_64(pt, dirname, error);
}

void mkl_pardiso_handle_delete_64(const char *dirname, MKL_INT *error) {
    pardiso_handle_delete_64(dirname, error);
}

void MKL_PARDISO_HANDLE_DELETE_64(const char *dirname, MKL_INT *error) {
    PARDISO_HANDLE_DELETE_64(dirname, error);
}

int mkl_mkl_pardiso_pivot(const double* aii, double* bii, const double* eps) {
    return mkl_pardiso_pivot(aii, bii, eps);
}

int MKL_MKL_PARDISO_PIVOT(const double* aii, double* bii, const double* eps) {
    return MKL_PARDISO_PIVOT(aii, bii, eps);
}

int mkl_mkl_pardiso_pivot_(const double* aii, double* bii, const double* eps) {
    return mkl_pardiso_pivot_(aii, bii, eps);
}

int MKL_MKL_PARDISO_PIVOT_(const double* aii, double* bii, const double* eps) {
    return MKL_PARDISO_PIVOT_(aii, bii, eps);
}

void mkl_pardiso_getdiag(const _MKL_DSS_HANDLE_t pt, void *df, void *da,
                         const MKL_INT *mnum, MKL_INT *error) {
    pardiso_getdiag(pt, df, da, mnum, error);
}

void MKL_PARDISO_GETDIAG(const _MKL_DSS_HANDLE_t pt, void *df, void *da,
                         const MKL_INT *mnum, MKL_INT *error) {
    PARDISO_GETDIAG(pt, df, da, mnum, error);
}

void mkl_pardiso_export(void *pt, void* values, MKL_INT* ia, MKL_INT *ja,
                        const MKL_INT *step, const MKL_INT *iparm, MKL_INT *error) {
    pardiso_export(pt, values, ia, ja, step, iparm, error);
}

void MKL_PARDISO_EXPORT(void *pt, void* values, MKL_INT* ia, MKL_INT *ja,
                        const MKL_INT *step, const MKL_INT *iparm, MKL_INT *error) {
    PARDISO_EXPORT(pt, values, ia, ja, step, iparm, error);
}

// Fortran routines
void MKL_PARDISO_S_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                    int n, float *a, int *ia, int *ja, int *perm,
                    int nrhs, int *iparm, int msglvl, float *b, float *x, int *error) {
    PARDISO_S_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
               nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_D_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                    int n, double *a, int *ia, int *ja, int *perm,
                    int nrhs, int *iparm, int msglvl, double *b, double *x, int *error) {
    PARDISO_D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
               nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_SC_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                     int n, void *a, int *ia, int *ja, int *perm,
                     int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    PARDISO_SC_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_DC_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                     int n, void *a, int *ia, int *ja, int *perm,
                     int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    PARDISO_DC_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_S_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, float *a, int *ia,
                       int *ja, int *perm, int nrhs, int *iparm, int msglvl, float *b, float *x, int *error) {
    PARDISO_S_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_D_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, double *a, int *ia,
                       int *ja, int *perm, int nrhs, int *iparm, int msglvl, double *b, double *x, int *error) {
    PARDISO_D_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_SC_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                        int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    PARDISO_SC_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_DC_2D_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                        int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error) {
    PARDISO_DC_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_S_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, float *a, long long *ia, long long *ja, long long *perm,
                       long long nrhs, long long *iparm, long long msglvl, float *b, float *x, long long *error) {
    PARDISO_S_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                  nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_D_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, double *a, long long *ia, long long *ja, long long *perm,
                       long long nrhs, long long *iparm, long long msglvl, double *b, double *x, long long *error) {
    PARDISO_D_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                  nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_SC_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                        long long n, void *a, long long *ia, long long *ja, long long *perm,
                        long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    PARDISO_SC_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                   nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_DC_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                        long long n, void *a, long long *ia, long long *ja, long long *perm,
                        long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    PARDISO_DC_64_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm,
                   nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_S_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                          long long n, float *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                          long long *iparm, long long msglvl, float *b, float *x, long long *error) {
    PARDISO_S_64_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_D_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                          long long n, double *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                          long long *iparm, long long msglvl, double *b, double *x, long long *error) {
    PARDISO_D_64_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_SC_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                           long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                           long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    PARDISO_SC_64_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_DC_64_2D_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                           long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                           long long *iparm, long long msglvl, void *b, void *x, long long *error) {
    PARDISO_DC_64_2D_(pt, maxfct, mnum, mtype, phase, n, a, ia, ja, perm, nrhs, iparm, msglvl, b, x, error);
}

void MKL_PARDISO_EXPORT_S_(void *pt[], float *values, int *ia, int *ja, int step, int *iparm, int *error) {
    PARDISO_EXPORT_S_(pt, values, ia, ja, step, iparm, error);
}

void MKL_PARDISO_EXPORT_D_(void *pt[], double *values, int *ia, int *ja, int step, int *iparm, int *error) {
    PARDISO_EXPORT_D_(pt, values, ia, ja, step, iparm, error);
}

void MKL_PARDISO_EXPORT_C_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error) {
    PARDISO_EXPORT_C_(pt, values, ia, ja, step, iparm, error);
}

void MKL_PARDISO_EXPORT_Z_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error) {
    PARDISO_EXPORT_Z_(pt, values, ia, ja, step, iparm, error);
}

void MKL_PARDISO_GETDIAG_D_(void *pt[], double *diag_fact, double *diag_a, int mnum, int *error) {
    PARDISO_GETDIAG_D_(pt, diag_fact, diag_a, mnum, error);
}

void MKL_PARDISO_GETDIAG_Z_(void *pt[], void *diag_fact, void *diag_a, int mnum, int *error) {
    PARDISO_GETDIAG_Z_(pt, diag_fact, diag_a, mnum, error);
}
