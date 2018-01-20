/*
問題文
3本の柱が等間隔に並んでいます。柱の高さは左から順に a メートル,b メートル,c メートル です。 柱の先端が同一直線上に並んでいる時、つまり b-a=c-b を満たしているとき、この柱の並び方を美しいと呼びます。
柱の並び方が美しいかどうかを判定してください。
*/
#include<iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;

	std::cout << (b - a == c - b ? "YES" : "NO") << std::endl;

	return 0;
}