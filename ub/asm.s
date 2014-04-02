.text
	.globl lab3S
	.type lab3S, @function
lab3S:
	/* numer */
	/* a*a */
	movb a, %al
	mulb a
	movw %ax, res
	/* a*a-2 */
	subw $2, res
	xor %ax, %ax
	movb c, %al
	addw %ax, res
	movw res, %ax
	movw %ax, numer
	/* denom */
	/* 22/b */
	xorw %ax, %ax
	movb $22, %al
	divb b
	/* c+22/b */	
	movw %ax, denom
	movb c, %al
	add %al, denom
	/* result */
	movw numer, %ax
	cwd
	idivw denom
	movw %ax, res
	ret

	/* (a*a-2+c)/(c+22/b) */
