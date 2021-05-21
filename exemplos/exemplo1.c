int func(int f) {
    
    int i;
    for (i = 1; i < f; i = i+1) {
        writeln(i);
    }
    return f;
}

int main () {
    int c;
    
    writeln("Digite um número:");
    read(c);
    if(c > 10){
        writeln("Número maior que 10");
    }else{
        writeln("Número menor que 10");
    }

    writeln("Contando.. ");
    
    func(c);
}