extern printf
section .text	;CODE SECTION
	global main
main:
	push	rbp	;set up stack fram

	mov	rdi, fmt
	mov	rsi, msg
	mov	rax, 0
	call	printf	;call to printf function

	pop	rbp	;restore stack

	mov	rax, 0	;normal, no error, return value
	ret

section .data	;DATA SECTION

	msg:	db "Hello, Holberton", 0
	fmt:	db "%s", 10, 0

