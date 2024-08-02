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

void pardiso_s_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                int n, float *a, int *ia, int *ja, int *perm,
                int nrhs, int *iparm, int msglvl, float *b, float *x, int *error);

void pardiso_d_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                int n, double *a, int *ia, int *ja, int *perm,
                int nrhs, int *iparm, int msglvl, double *b, double *x, int *error);

void pardiso_sc_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                 int n, void *a, int *ia, int *ja, int *perm,
                 int nrhs, int *iparm, int msglvl, void *b, void *x, int *error);

void pardiso_dc_(void *pt[], int maxfct, int mnum, int mtype, int phase,
                 int n, void *a, int *ia, int *ja, int *perm,
                 int nrhs, int *iparm, int msglvl, void *b, void *x, int *error);

void pardiso_s_2d_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, float *a, int *ia,
                   int *ja, int *perm, int nrhs, int *iparm, int msglvl, float *b, float *x, int *error);

void pardiso_d_2d_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, double *a, int *ia,
                   int *ja, int *perm, int nrhs, int *iparm, int msglvl, double *b, double *x, int *error);

void pardiso_sc_2d_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                    int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error);

void pardiso_dc_2d_(void *pt[], int maxfct, int mnum, int mtype, int phase, int n, void *a, int *ia,
                    int *ja, int *perm, int nrhs, int *iparm, int msglvl, void *b, void *x, int *error);

void pardiso_s_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                   long long n, float *a, long long *ia, long long *ja, long long *perm,
                   long long nrhs, long long *iparm, long long msglvl, float *b, float *x, long long *error);

void pardiso_d_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                   long long n, double *a, long long *ia, long long *ja, long long *perm,
                   long long nrhs, long long *iparm, long long msglvl, double *b, double *x, long long *error);

void pardiso_sc_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                    long long n, void *a, long long *ia, long long *ja, long long *perm,
                    long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error);

void pardiso_dc_64_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                    long long n, void *a, long long *ia, long long *ja, long long *perm,
                    long long nrhs, long long *iparm, long long msglvl, void *b, void *x, long long *error);

void pardiso_s_64_2d_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                      long long n, float *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                      long long *iparm, long long msglvl, float *b, float *x, long long *error);

void pardiso_d_64_2d_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                      long long n, double *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                      long long *iparm, long long msglvl, double *b, double *x, long long *error);

void pardiso_sc_64_2d_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                       long long *iparm, long long msglvl, void *b, void *x, long long *error);

void pardiso_dc_64_2d_(void *pt[], long long maxfct, long long mnum, long long mtype, long long phase,
                       long long n, void *a, long long *ia, long long *ja, long long *perm, long long nrhs,
                       long long *iparm, long long msglvl, void *b, void *x, long long *error);

void pardiso_export_s_(void *pt[], float *values, int *ia, int *ja, int step, int *iparm, int *error);

void pardiso_export_d_(void *pt[], double *values, int *ia, int *ja, int step, int *iparm, int *error);

void pardiso_export_c_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error);

void pardiso_export_z_(void *pt[], void *values, int *ia, int *ja, int step, int *iparm, int *error);

void pardiso_getdiag_d_(void *pt[], double *diag_fact, double *diag_a, int mnum, int *error);

void pardiso_getdiag_z_(void *pt[], void *diag_fact, void *diag_a, int mnum, int *error);
