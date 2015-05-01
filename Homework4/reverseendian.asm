; -----------------------------------------------------------------------------
; A 64-bit function that returns the gcd of its arguments
; The function has signature:
;
;   void byteswap(uint32_t *x)
;
; Note that the parameter has been passed in rdi : (holds x*)
; Return the value in rax
; -----------------------------------------------------------------------------

	global  byteswap
        section .text


byteswap:
		mov	al, [rdi]
		mov	cl, [rdi+1]
		mov	dl, [rdi+2]
		mov	bl, [rdi+3]

		mov	[rdi], bl
		mov	[rdi+1], dl
		mov	[rdi+2], cl
		mov	[rdi+3], al

		ret



