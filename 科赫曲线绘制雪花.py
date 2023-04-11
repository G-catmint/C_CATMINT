import turtle
import sys
def koch(t,order,size):
    if order == 0:
        t.forward(size)
    else:
        koch(t, order - 1, size / 3)
        t.left(60)
        koch(t, order - 1, size / 3)
        t.right(120)
        koch(t, order - 1, size / 3)
        t.left(60)
        koch(t, order - 1, size / 3)
def main():
    n = int(sys.argv[1])
    step = 50
    p = turtle.Turtle()
    p.color('blue')
    for i in range(0,3):
        koch(p,n,step)
        p.right(120)

if __name__ == '__main__': main()