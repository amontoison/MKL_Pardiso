# MKL_Pardiso
Shim library for the oneMKL Pardiso solver

```shell
gcc -shared -o libmkl_pardiso_shim.so mkl_pardiso_shim.c -Iinclude -Llib -lmkl_rt
gcc -shared -o libmkl_pardiso.so mkl_pardiso.c -Iinclude -L. -lmkl_pardiso_shim
```
