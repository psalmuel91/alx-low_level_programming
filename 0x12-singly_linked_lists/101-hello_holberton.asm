section	.text
	extern printf
	global main

main:
	push rbp

	mov esi, fmt
	mov edi, msg
	mov eax, 0
	call printf

	pop rbp
	mov eax, 0
	ret

section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0
