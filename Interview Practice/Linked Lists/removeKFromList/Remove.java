import java.util.Arrays;
import java.util.Scanner;

class ListNode<T> {
	T value;
	ListNode<T> next;

	ListNode(T x) {
		value = x;
	}
}

class Remove {
	static ListNode<Integer> removeKFromList(ListNode<Integer> l, int k) {
		ListNode<Integer> current = l;

		while (current != null) {
			if (current.next != null && current.next.value == k) {
				current.next = current.next.next;
			} else {
				current = current.next;
			}
		}

		return l != null && l.value == k ? l.next : l;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String line = in.nextLine();
		String[] values = line.replace("[", "").replace("]", "").split(", ");
		int k = in.nextInt();
		ListNode<Integer> l = null;
		ListNode<Integer> node = null;

		for (String value : values) {
			if (value.isEmpty()) break;
			if (Arrays.asList(values).indexOf(value) == 0) {
				l = new ListNode<Integer>(Integer.parseInt(value));
				node = l;
			} else {
				ListNode<Integer> temp = new ListNode<>(Integer.parseInt(value));
				node.next = temp;
				node = temp;
			}
		}

		l = removeKFromList(l, k);
		System.out.print("[");
		while (l != null) {
			System.out.print(l.value + (l.next == null ? "" : ", "));
			l = l.next;
		}
		System.out.print("]");
	}
}