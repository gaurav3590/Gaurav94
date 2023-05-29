class A:
    def fun(self):
        print('function(A)')

class B:
    def fun(self):
        print('function(B)')

class C1(A,B):
    pass
class C2(B,A):
    pass

check1=C1()
check2=C2()
check1.fun()
check2.fun()
