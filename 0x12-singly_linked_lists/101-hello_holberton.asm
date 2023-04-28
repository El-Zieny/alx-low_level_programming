global main

section .data
	h: db "Hello, Holberton", 10

section .text
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, h
	mov rdx, 17
	syscall

	mov rdx, 60
	mov rdi, 0
	syscall
