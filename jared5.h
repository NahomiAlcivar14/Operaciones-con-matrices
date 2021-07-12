void mediayvarianza (float m1[5][5]){
    int sumatoria = 0;
    int cantidadElementos = 5*5;
    double sum[5]; 
	  double avg[5];
	  double variance[5];
	  double deviation[5];

    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            int elementoActual = m1[y][x];
            sumatoria = sumatoria + elementoActual;
        }
    }

    double promedio = (float) sumatoria / (float) cantidadElementos;
    cout<<"Media: "<<promedio<<endl;
    
    ////////////////////////////////////
    // varianzas
	for(int x=0; x<5; x++) {
		variance[x] = 0;
		for(int y=0; y<5; y++) {
			double range = pow(m1[x][y] - avg[x], 2);
			variance[x] += range;
		}
		variance[x] = variance[x] / 5;
		cout<<endl<<"Variaciones: "<<variance[x]<<endl;
	}
 
	
}
