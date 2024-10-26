sudo apt install gdb

gdb --version
gdb --help


# gdb는 기본적으로 AT&T문법을 따릅니다. 하지만 intel 문법이 보기 좋기 때문에 intel 문법으로 변경하고 시작합니다.

(gdb) set disassembly-flavor intel
$ echo set disassembly-flavor intel >> ~/.gdbinit
(gdb) show disassembly-flavor


$ gdb <binary>
(gdb) q
(gdb) quit


# 현재 터미널에서 실행하고 있는 프로그램이 있을 때 Ctrl+Z를 누르면 suspend가 되고 bg명령어를 치면 background에서 실행시킬 수 있습니다.
# ps를 입력하면 현재 실행 중인 process를 볼 수 있습니다.

(gdb) b <function>
(gdb) break <function>
(gdb) b *main
(gdb) break *main+8


# move current location
(gdb) run
(gdb) cont
(gdb) ni






layout asm

# list

(gdb) list main


# info
(gdb) info break
(gdb) info breakpoints
(gdb) info b
(gdb) delete 3
(gdb) delete

(gdb) info address
(gdb) info variables
(gdb) info threads
(gdb) info line
(gdb) info locals

(gdb) info reg
(gdb) info ref <register_name>
(gdb) x/d $rsp