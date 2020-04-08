    segment .data
start       dq  9
end         dq  10
sum         dq  0

    segment .text
    global main ;Tell linker about main
main:
    mov rax, [start]    ;Move start to rax
    mov rbx, [end]
    mov rcx, [sum]
    mov rdx, 0
    set_incrementor_loop:
        cmp rax, rdx                ;Compare to see if incrementor is equal to start
        je start_loop               ;If they are equal, move down to main loop
        inc rdx                     ;If they are not equal, increase incrementor by one
        jmp set_incrementor_loop    ;Restart the loop
    start_loop:
        cmp rbx, rdx    ;Compare to see if the incrementor variable is equal to end variable
        je end_loop     ;Jump to the end_loop if incrementor is equal to end
        add rcx, rdx    ;Add what is in the incrementor variable to sum
        inc rdx         ;Increment the incrementor by 1
        jmp start_loop  ;Start the loop over
    end_loop:
        add rcx, rdx    ;Add the final number to the sum
        mov [sum], rcx  ;Move the sum from the register to the sum variable
        mov rdx, rcx    ;Move the final sum to rdx register
