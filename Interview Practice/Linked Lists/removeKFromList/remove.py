class ListNode():
    def __init__(self, x):
        self.value = x
        self.next = None


def removeKFromList(l, k):
    current = l

    while current:
        if current.next and current.next.value == k:
           current.next = current.next.next
        else:
            current = current.next

    return l.next if l and l.value == k else l


l = list(map(int, input().replace("[", "").replace("]", "").replace(",", '').split()))
k = int(input())
ll = ListNode(None)
node = ll

for i in l:
    temp = ListNode(i)
    node.next = temp
    node = temp

ll = removeKFromList(ll.next, k)

node = ll
l = []
while node != None:
    l.append(node.value)
    node = node.next

print(l)
