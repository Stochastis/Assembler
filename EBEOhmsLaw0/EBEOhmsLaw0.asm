            segment .data
voltage     dq  15                  ;the value to calculate
amperage    dq  0                   ;the amperage input
resistance  dq  1                   ;the resistance input

            segment .text
            global main             ;Tell linker about main
main:
                                    ;move variables to registers   
            mov rax, [amperage]
            mov rbx, [resistance]
            mov rcx, [voltage]
    
                                    ;if amperage is zero, calculate it
            amperage_section:
            cmp rax, 0              ;see if we are calculating amperage by testing
            jne resistance_section  ;if we are not calculating amperage go to next
            mov rax, rcx            ;move voltage to rax register
            mov rcx, 0              ;clear the rcx register
            mov rdx, 0              ;clear the rdx register
            idiv rbx                ;how you divide numbers. Takes rax / rbx. Stores result in rax. Stores remainder in rdx.
            mov[amperage], rax        
            jmp end
            
                                    ;if resistance is zero, calculate it
            resistance_section:
            cmp rbx, 0              ;see if we are calculating resistance by testing
            jne voltage_section     ;if we are not calculating resistance go to next
            mov rbx, rax            ;move amperage to rbx register
            mov rax, 0              ;clear the rax register
            mov rax, rcx            ;move voltage to the rax register
            mov rcx, 0              ;clear the rcx register
            mov rdx, 0              ;clear the rdx register
            idiv rbx                ;how you divide numbers. Takes rax / rbx. Stores result in rax. Stores remainder in rdx.
            mov[resistance], rax        
            jmp end
    
                                    ;if voltage is zero, calculate it
            voltage_section:
            imul rax, rbx           ;multiply Amperage and Resistance
            mov[voltage], rax       ;move voltage variable to rax where the answer is.
            jmp end
            
            end:
