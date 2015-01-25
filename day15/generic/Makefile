all:
	g++ template1.cpp -o template1
	g++ template2.cpp -o template2
	g++ template3.cpp -o template3
	g++ template_study.cpp -o template_study
	objdump template_study -D > template_study.S
	g++ template_class.cpp -o template_class
	g++ template_friend.cpp -o template_friend

clean:
	rm -rf template1 template2 template3 template_study template_class template_friend
