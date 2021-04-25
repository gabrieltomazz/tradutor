int main() {

    set a; set b; elem x; a = EMPTY; b = EMPTY;

    add(1 in add(2 in add(3 in a)));

    a = (2+3) *4;

    for(i = 1; i <= 10; i = i + 1) writeln(i); 
    // b = 3 * 4;
    // add(exists(x in a) in a);
    // add( add( a in c) in b);
    //add(exists(x in a) in b);
}
