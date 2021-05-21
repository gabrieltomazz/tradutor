int func(int f, int g) {
    int u;
    u = f + g; 
    return u;
}

int main () {
    int a; 
    int b; 
    b = 5;
    a = func(2,3) + 5;
    writeln(a);
}