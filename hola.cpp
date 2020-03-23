int main() {
    
    operacion(10,"+", 30.01);

    return 0;
}

float operacion(float aA, char* OP, float bB){
    switch(OP){
        case "+":
            sumar(aA,bB);
        break;
    }
}

float sumar(float a, float b){
    return a+b;
}
