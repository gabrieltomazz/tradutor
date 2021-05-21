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
 
func:
mul $3, #1, #0 // var f */ var g  
mov $2, $3 // var u = * 
return $2 // return 
main:
mov $2, 5  // num 5
mov $1, $2 // var b = 5 
mov $3, 2  // num 2
param $1 // var b 
param $3 // var 2 
call func, 2 // call 
pop $4 // pop 
mov $5, 5  // num 5
add $6, $4, $5 // var func + var 5  
mov $0, $6 // var a = + 
println $0 // print 
nop 
