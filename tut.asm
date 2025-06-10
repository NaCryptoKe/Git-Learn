.text
.globl	start

start:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$16, %esp
	movl	$5, 12(%esp)
	movl	$3, 8(%esp)
	movl	12(%esp), %edx
	movl	8(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	4(%esp), %eax
	leave
	ret