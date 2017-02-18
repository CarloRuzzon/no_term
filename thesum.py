f = open('sum.dat', 'r');
s=0
if not f:
    print "Il numero sommato sara 0"
else:
    line = f.readline()
    s = int(line)
    f.close()
num= input("Inserire il valore da sommare:")
s+=num
print "Il nuovo valore: ", s

f = open('sum.dat', 'w');
f.write(str(s))
f.close()

