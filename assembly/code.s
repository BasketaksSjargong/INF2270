	.section	__TEXT,__text,regular,pure_instructions
	.globl	_sum
	.align	4, 0x90
_sum:                                   ## @sum
	pushq	%rbp
Ltmp2:
Ltmp3:
	movq	%rsp, %rbp
Ltmp4:
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %esi
	addl	-8(%rbp), %esi
	movl	%esi, -12(%rbp)
	movl	-12(%rbp), %esi
	movl	_accum(%rip), %edi
	addl	%esi, %edi
	movl	%edi, _accum(%rip)
	movl	-12(%rbp), %eax
	popq	%rbp
	retq

	.globl	_accum                  ## @accum
