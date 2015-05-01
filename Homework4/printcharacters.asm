	global	main
	extern	printf

main:
		mov		rsi, 0x20
top:
		cmp		rsi, 0x7E
		mov		rdi, format
		jg		bottom


print:  
		xor     rax, rax
        push    rsi
        call    printf
        pop     rsi

		inc 	rsi
		mov     rdx, rsi ; save copy of current character
        and     rdx, 0xF ; modulus 16
        cmp     rdx, 0x0
		jne	top

		mov     rdi, nl ; if zero mod 16 print newline
		xor     rax, rax
        push    rsi
        call    printf
        pop     rsi

        jmp     top

bottom:
        mov     edi, nl
        xor     rax, rax
        call    printf
        ret


format: db      '%c', 0
nl:     db      10, 0

