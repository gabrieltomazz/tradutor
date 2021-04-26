int i;

int fib(int i){

    // if (1 > 1.0) return 1;

    // else if (1.5 || i) return 1;

    // else 
    return fib(i-1.0) + fib(i-2.0);

}

int main() {

    int i, c, d;

    read(i);

    // if (i < 0) write('e');

    // else {

        i = fib(i);
        write("O resultado é:");
        writeln(i);

   // }

    return 0;

}