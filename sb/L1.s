.text
	.globl lab3S
	.type lab3S, @function
lab3S:
	/* numerator */
	/* a*a */
	movb aaaS, %al
	imulb aaaS
	movw %ax, res
	/* a*a-2 */
	subw $2, res
	movb cccS, %al
	cbw
	addw %ax, res
	movw res, %ax
	movw %ax, numerator
	/* denominator */
	/* 22/b */
	movw $22, %ax
	idivb bbbS
	cbw
	movw %ax, denominator
	/* c+22/b */
	movb cccS, %al
	cbw
	add %ax, denominator
	/* result */
	movw numerator, %ax
	cwd
	idivw denominator
	movw %ax, res
	.size lab3S, . - lab3S

	/* (a*a-2+c)/(c+22/b) */
