section .text
  global _start

_start:
  movl edx,len
  movl ecx,msg
  movl ebx,1
  movl eax,4
  int 0x80

  movl eax,1
  int 0x80

section.data
msg db 'Hello World', 0xa
len eq $ - msg
