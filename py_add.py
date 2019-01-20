import sys

def adding(a, b):
	return a+b
if __name__ == "__main__":
	n1=int(sys.argv[1])
	n2=int(sys.argv[2])
	res=adding(n1, n2)
	sys.stdout.write(str(res))
