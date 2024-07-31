#include "mkl_pardiso.h"

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
