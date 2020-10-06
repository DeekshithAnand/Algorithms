ip = input().strip()

totalLength = len(ip)
c_count = 0
v_count = 0

for i in range(totalLength):
        #vowel
    if ip[i] in ('A','E','I','O','U'):
        v_count+=(totalLength - i )   
    else:
        #consonant
        c_count += (totalLength - i)
    
if c_count > v_count:
    winner = f"Stuart {c_count}"
else:
    winner = f"Kevin {v_count}"
print(winner)

