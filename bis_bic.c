int bis(int x, int m);
int bic(int x, int m);

/* Calcular x|y usando solo llamadas a las funciones bis y bic */
int bool_or(int x, int y) {
int resultado = bis(x, y);
return resultado;
}

/* Calcula x^y usando solo llamadas a las funciones bis y bic */
int bool_xor(int x, int y) {
int resultado = bis(bic(x, y), bic(y, x));
return resultado;
}
