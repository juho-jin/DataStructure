from Stack import ArrayStack

# 1. ArrayStack Test
at = ArrayStack()
at.push(10)
at.push(15)
at.push(19)
at.push(13)
at.push(7)
print(at.top())
print(at.size())
at.pop()
print(at.top())
print(at.size())
at.pop()
print(at.top())
print(at.size())
