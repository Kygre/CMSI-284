		global  gcd
        section .text


gcd:	xor		rax,rax
		mov		rax, rdi

loop:	cmp 	rsi, 0
		jne		logic
		ret

logic:
		xor		rdx,rdx ; clear upper part of dividend

		div		rsi

		mov		rax , rsi ; move y to x spot
		mov 	rsi, rdx  ; move remainder into y
		jmp 	loop


