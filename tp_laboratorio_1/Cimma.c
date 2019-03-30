int Sumar(int num1, int num2)
{
    int resultado;
    resultado = num1 + num2;
    return resultado;
}

int Restar(int num1, int num2)
{
    int resultado;
    resultado = num1 - num2;
    return resultado;
}

int Dividir(int num1, int num2)
{
    float resultado = 0;
    resultado = num1 / num2;
    return resultado;
}

int Multiplicar(int num1, int num2)
{
    int resultado;
    resultado = num1 * num2;
    return resultado;
}

int Factorial1(int num1)  //Función factorial para el caso de A
{
    int factorial = 1;
    int i;

    for(i = 1; i <= num1; i++)
    {                               // f * i = f * i = f * i = f * i = f  * i = f
        factorial = factorial * i;  // 1 * 1 = 1 * 2 = 2 * 3 = 6 * 4 = 24 * 5 = 120 ....
    }
    return factorial;
}

int Factorial2(int num2)  //Repito la función para el caso de B
{
    int factorial = 1;
    int i;

    for(i = 1; i <= num2; i++)
    {                               // f * i = f * i = f * i = f * i = f  * i = f
        factorial = factorial * i;  // 1 * 1 = 1 * 2 = 2 * 3 = 6 * 4 = 24 * 5 = 120 ....
    }
    return factorial;
}

