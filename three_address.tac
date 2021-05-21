.table
.code

write_str: 
mov $0, 0 
mov $1, #0 
L1: 
mov $2, $1[$0] 
seq $3, $2, '\0' 
brnz L2, $3 
print $2 
add $0, $0, 1 
jump L1 
L2:
return 0 
 
writeln_str: 
mov $0, 0 
mov $1, #0 
L3: 
mov $2, $1[$0] 
seq $3, $2, '\0' 
brnz L4, $3 
print $2 
add $0, $0, 1 
jump L3 
L4:
println 
 return 0 
 
fib:
mov $2, 1  // num 1
seq $3, $1, $2 // var i == var 1 
brz L5, $3
mov $4, 1  // num 1
return $4 // return 1 
jump L6 
L5: 
mov $5, 2  // num 2
seq $6, $1, $5 // var i == var 2 
brz L7, $6
mov $7, 1  // num 1
return $7 // return 1 
jump L8 
L7: 
mov $8, 1  // num 1
sub $9, $1, $8 // var i + var 1  
param $9 // var - 
call fib, 1 // call 
pop $10 // pop 
mov $11, 2  // num 2
sub $12, $1, $11 // var i + var 2  
param $12 // var - 
call fib, 1 // call 
pop $13 // pop 
add $14, $10, $13 // var fib + var fib  
return $14 // return + 
L8: 
L6: 
mov $15, 0  // num 0
return $15 // return 0 
main:
mov $17, 0  // num 0
mov $16, $17 // var i = 0 
scani $16 
mov $18, 0  // num 0
slt $19, $18, $16 // var i > var 0 
brz L9, $19
param $16 // var i 
call fib, 1 // call 
pop $20 // pop 
print $20 // print 
L9: 
nop 
