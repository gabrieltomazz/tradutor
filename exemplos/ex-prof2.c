int main() {

    set notas;
    notas = EMPTY;
    add(10 in add(10.0 in add(10 in notas)));
    float media1; float media2;
    float soma; soma = 0;
    
    int a; 
    set b; 
    a = b;

    elem i;

    forall(i in notas) soma = soma + i;

    media1 = soma/3 - 1/10*10;

    media2 = soma/3;

    if (media1 == media2 && media1 >= 5) writeln("Parabéns!");

    return 0;

}