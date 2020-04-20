    segment .data
numbersToSort   dq  32, -1, -2, 99, 1, 32, 0, 100     ;Create array of numbers to sort
listSize        dq  8                                   ;Set the size of the array

    segment .text
    global main                         ;Tell linker about main

main:

    mov rdi, 0                          ;Set rdi as error checker
    mov rsi, [listSize]                 ;Move listSize value to rsi
    imul rsi, 8                         ;Multiply listSize by 8
    sub rsi, 8                          ;Subtract 8 from rsi for later comparison
    lea rax, [numbersToSort]            ;Move memory address of the arary to rax
    mov rdx, 0                          ;Set rdx as incrementor
    
compare:

    mov rbx, [rax+rdx]                  ;Move first element into rbx
    mov rcx, [rax+rdx+8]                ;Move second element into rcx
    cmp rbx, rcx                        ;Compare first and second elements
    jle checkCount                      ;If first is less than or equal to second, jump to next loop
    jg greaterThan                      ;If first is greater than second, jump to loop to switch values

checkCount:

    cmp rdx, rsi                        ;Check Count
    jl  notEnd                          ;If not done, jump to notEnd loop
    jge end                             ;If done, jump to done loop

greaterThan:

    mov rdi, 1
    xchg rbx, rcx
    mov [rax+rdx], rbx
    mov [rax+rdx+8], rcx
    loop checkCount
    
notEnd:

    add rdx, 8
    loop compare
    
end:

    cmp rdi, 0
    je finish
    xor rdi, rdi
    xor rdx, rdx
    loop compare
    
finish:

    xor rdx, rdx
