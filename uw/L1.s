.text
	.globl lab3S
	.type lab3S, @function
lab3S:
	/* numerator */
	/* a*a */
	movw aaaS, %al
	mulw aaaS
	mov %ax, res
	/* a*a-2 */
	subw $2, res
	xor %ax, %ax
	movb cccS, %al
	addw %ax, res
	movw res, %ax
	movw %ax, numerator
	/* denominator */
	/* 22/b */
	xorw %ax, %ax
	movb $22, %al
	divb bbbS
	/* c+22/b */	
	movw %ax, denominator
	movb cccS, %al
	add %al, denominator
	/* result */
	movw numerator, %ax
	cwd
	idivw denominator
	movw %ax, res
	.size lab3S, . - lab3S

	/* (a*a-2+c)/(c+22/b) */
