	global power_of_difference
	extern pow
	section .text

power_of_difference:	subsd		xmm0,xmm1
						cvtsi2sd	xmm1,edi
						call		pow
						ret
