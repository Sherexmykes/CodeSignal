#include <iostream>
#include <sstream>

template <class T>
class ListNode
{
	public:
		ListNode(T x): value(x), next(nullptr) {}
		~ListNode() { std::cout << "deleting " << value << std::endl;}
		T value;
		ListNode *next;
};

ListNode<int> *removeKFromList(ListNode<int> *l, int k) {
	if (l != nullptr) {
		ListNode<int> *current = l;

		while (current != nullptr) {
			if (current->next and current->next->value == k) {
				ListNode<int> *temp = current->next->next;
				delete current->next;
				current->next = temp;
			} else {
				current = current->next;
			}
		}

		if (l->value == k) {
			ListNode<int> *temp = l->next;
			delete l;
			l = temp;
		}
	}

	return l;
}

void DeleteNodes(ListNode<int> *l) {
	while (l != nullptr) {
		ListNode<int> *temp = l->next;
		delete(l);
		l = temp;
	}
}

void ShowNodes(ListNode<int> *l) {
	ListNode<int> *node = l;

	std::cout << "[";
	while (node != nullptr) {
		std::cout << node->value << (node->next == nullptr ? "" : ", ");
		node = node->next;
	}
	std::cout << "]\n";
}

int main()
{
	std::string arr = "";
	std::getline(std::cin, arr);
	arr = arr.substr(1, arr.size()-2);

	std::istringstream is(arr);
	std::string value = "";
	ListNode<int> *l = new ListNode<int>(0);
	ListNode<int> *node = l;

	while (std::getline(is, value, ',')) {
		ListNode<int> *temp = new ListNode<int>(std::atoi(value.c_str()));
		node->next = temp;
		node = temp;
	}

	int k = 0;
	std::cin >> k;

	l = removeKFromList(l->next, k);
	ShowNodes(l);
	DeleteNodes(l);
}
	


	