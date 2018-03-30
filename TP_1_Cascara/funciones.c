float sumar(float a, float b){
    float resultado;
        resultado = a + b;

    return resultado;
}

float restar(float c, float d){
    float resultado;
        resultado = c-d;
    return resultado;

}

float division (float e, float f){
    float resultado;

        resultado = e/f;
    return resultado;
  }

float multiplicacion(float g, float h){
    float resultado;

    resultado = g*h;
    return resultado;
}

int factorial(int i){
    int resultado;
        if(i == 1){
            return 1;
        }
        resultado = i*factorial(i-1);

        return resultado;
}
