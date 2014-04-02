.text
	.globl lab3S
	.type lab3S, @function
lab3S:
	/* numerator */
	/* a*a */
	movb a, %al
	imulb a
	movw %ax, res
	/* a*a-2 */
	subw $2, res
	movb c, %al
	cbw
	addw %ax, res
	movw res, %ax
	movw %ax, numer
	/* denom */
	/* 22/b */
	movw $22, %ax
	idivb b
	cbw
	movw %ax, denom
	/* c+22/b */
	movb c, %al
	cbw
	add %ax, denom
	/* result */
	movw numer, %ax
	cwd
	idivw denom
	movw %ax, res
	.size lab3S, . - lab3S

	/* (a*a-2+c)/(c+22/b) */
