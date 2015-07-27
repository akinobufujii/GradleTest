#ifndef __HELLO_H__
#define __HELLO_H__

// テストクラス
// 入力された文言を叫ぶだけ
class Hello
{
private:
	const char* _who;

public:
	Hello(const char * who);
	void sayHello(unsigned n = 1);
};

#endif	// __HELLO_H__
