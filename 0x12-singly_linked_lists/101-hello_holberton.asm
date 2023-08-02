	extern printf

	global main
main:  
	mov rax, rsp
	and rsp, 0xFFFFFFFFFFFFFFF0
	sub rsp, 32

	mov rdi, format
	call printf

	mov rsp, rax

	ret

	format: db `Hello, Holberton\n`,0
