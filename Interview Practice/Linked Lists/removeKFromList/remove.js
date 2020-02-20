'use strict';

process.stdin.setEncoding('utf-8');
var os = require('os');
var input = '';

process.stdin.on('data', data => {
	input += data;

	if (data.split(os.EOL)[0] == "") {
		var arr = input.split(os.EOL)[0].replace("[", "").replace("]", "").split(",").map(x=>+x);
		var k = parseInt(input.split(os.EOL)[1]);
		main(arr, k);
		process.stdin.emit("end");
	}
});

process.stdin.on("end", _ => {
});

function ListNode(x) {
	this.value = x;
	this.next = null;
}

function removeKFromList(l, k) {
	var current = l

	while (current != null) {
		if (current.next != null && current.next.value == k) {
			current.next = current.next.next;
		} else {
			current = current.next;
		}
	}

	return l && l.value == k ? l.next : l;
}

function main(arr, k) {
	var l = new ListNode(arr[0]);
	var node = l;

	for (var num of arr) {
		if (arr.indexOf(num) != 0) {

			var temp = new ListNode(num);
			node.next = temp;
			node = temp;
		}
	}

	l = removeKFromList(l, k);
	show(l);
}

function show(l) {
	process.stdout.write("[");
	while (l != null) {
		process.stdout.write(l.value + (l.next == null ? "" : ", "));
		l = l.next;
	}
	process.stdout.write("]");
}