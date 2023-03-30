section .data
    message db 'Hello, Holberton', 0xA, 0

section .text
    global main

    extern printf

main:
    ; Prepare the arguments for printf
    lea rdi, [message]
    xor eax, eax

    ; Call printf
    call printf

    ; Exit the program
    xor eax, eax
    ret

