.table
 char str_char3[]="Olá Mundo" 
 char str_char4[]="Olá Mundo 2" 
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
mul $2, $1, $0 // var f */ var g  
return $2 // return * 
main:
mov $3, &str_char3  
param $3  
call writeln_str, 1 
mov $4, &str_char4  
param $4  
call writeln_str, 1 
