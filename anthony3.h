void potencia (float matriz[5][5], int n, float resultado[5][5]){
    for (int i = 0;i<5;i++)
        for (int j = 0;j<5;j++)
        resultado[i][j] = pow(matriz[i][j], n);
}
