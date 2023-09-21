assembly
section .data
	format db "Hello, Holberton", 0

section .text
	global _start

_start:
	; Call printf
	mov rdi, format
	xor eax, eax
	call printf

	; Exit the program
	xor edi, edi
	mov eax, 60
	syscall
