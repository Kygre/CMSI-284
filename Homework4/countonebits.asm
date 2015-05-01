	global  onebits
    section .text


onebits:
	 ; x = x - ((x >> 1) & 0x55555555);
	mov	rax, rdi
	shr	rax, 0x1
	and	rax, 0x55555555
	sub	rdi, rax

	; x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
	mov	rax, rdi
	and	rax, 0x33333333


	mov	rcx, rdi
	shr	rcx, 0x2
	and	rcx, 0x33333333 

	add	rax, rcx
	mov	rdi, rax ; dump results into x

	;  x = (x + (x >> 4)) & 0x0F0F0F0F;
	mov	rax, rdi
	shr 	rdi, 4
	add	rdi, rax
	and	rdi, 0x0F0F0F0F

	; x = x + (x >> 8);
	mov	rax, rdi
	shr	rax, 8
	add	rdi, rax

	; x = x + (x >> 16);
	mov rax, rdi
	shr rax, 16
	add rdi, rax

	; return x & 0x0000003F;
	and rdi, 0x0000003F
	mov rax, rdi
	ret

