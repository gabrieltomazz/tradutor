int func(int f, int g) {
    int u;
    u = f * g; 
    return u;
}

int main () {
    float a; 
    int b; 
    b = 5;
    a = func(2,b) + 5;
    writeln(a);
}