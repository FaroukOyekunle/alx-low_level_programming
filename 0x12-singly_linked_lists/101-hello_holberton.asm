section .data
    message db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf
    global main

main:
    push rbp
    mov rdi, format
    mov rsi, message
    xor rax, rax
    call printf
    pop rbp
    xor rax, rax
    ret

