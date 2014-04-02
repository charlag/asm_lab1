.text
	.globl lab3S
	.type lab3S, @function
lab3S:
	/* numer */

	/* a*a */
	movw a, %ax
	mulw a
	lea numer, %ebx /* ebx = &numer */
	movw %ax, numer
	movw %dx, 2(%ebx)
	/* a*a-2 */
	sub $2, numer
	xorw %ax, %ax
	movw c, %ax
	add %ax, numer
	/* denom */
	/* 22/b */
	xorw %dx, %dx
	movw $22, %ax
	divw b
	leal denom, %ebx
	movw %ax, denom
	movw $0, 2(%ebx)
	/* c+22/b */
	movw c, %ax
	add %ax, denom
	/* result */
	/*
	lea numer, %ebx
	movw 2(%ebx), %bx
	movw numer, %ax
	*/
	movl numer, %eax
	cltd
	idivl denom
	movl %eax, res
	ret
	/* (a*a-2+c)/(c+22/b) */
