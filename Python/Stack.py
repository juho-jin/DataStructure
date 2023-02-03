from typing import Any

class ArrayStack:
    def __init__(self) -> None:
        self.AStack = []
        self.Ruler = 0
    
    def size(self) -> int:
        return len(self.AStack)
    
    def empty(self) -> bool:
        if self.Ruler == 0:
            return True
        else:
            return False

    def top(self) -> Any:
        if self.Ruler == 0:
            print('This Array Stack is Empty')
            return 0
        else:
            return self.AStack[self.Ruler - 1]
    
    def push(self, evalue) -> None:
        self.AStack.append(evalue)
        self.Ruler = self.Ruler + 1
    
    def pop(self) -> Any:
        value = self.AStack[self.Ruler - 1]
        del self.AStack[self.Ruler - 1]
        self.Ruler = self.Ruler - 1
        return value

