#include <iostream>
class AnyThing {
  private:
  	static int count;  //��������� 
  	const int things;
  	AnyThing() : things(0) {       //˽�л����캯�� 
  	  count += 1;
	}
  public:
	~AnyThing() {
	  count -= 1;
	}
	static void show() {
	  std::cout << "How many Object: " << count << std::endl;
	}
	void show(int i) const {
	  std::cout << "How many Object: " << count << std::endl;
	  //things += i;
	}
	static AnyThing * create() {    //�����������ģʽ 
	  return new AnyThing();
	}
	static AnyThing * createGroup(int n) {    //�����������ģʽ 
	  return new AnyThing[n];
	}
};
int AnyThing::count = 0;
int main() {
   const AnyThing *p = AnyThing::create();
   AnyThing *pp = AnyThing::createGroup(10);
   p->show();
   delete p;
   AnyThing::show();
   delete[] pp;
   AnyThing::show(); 
   return 0; 
}
