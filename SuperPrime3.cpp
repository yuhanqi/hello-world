//��ҵ��������������9081321110693270343633073697474256143563558458718976746753830538032062222085722974121768604305613921745580037409259811952655310075487163797179490457039169594160088430571674960498834085812920457916453747019461644031395307920624947349951053530086146486307198155590763466429392673709525428510973272600608981219760099374675982933766845473509473676470788342281338779191792495900393751209539300628363443012 6538005862664913074813656220643842443844131905754565672075358391135537108795991638155474452610874309742867231360502542308382199053675592825240788613991898567277116881793749340807728335795394301261629479870548736450984003401594705923178314906195914825136973281314862289454100745237769034410057080703111299605127114594552921209928891515242515620324828055912854227507525717981351447473570262981491527798 
//�����������Ĵ��룬ʹ����Դ���������������볬������
//ͬʱ��ϸ����������ı�̷�ʽ 
#include <iostream>
class BigPrime {
public:
  BigPrime(int n) : num(n){
  }
  virtual bool isPrime() const {
    return false;
  }
private:
  const int num;
}; 
class BigSuperPrime : public BigPrime {
public:
  BigSuperPrime(int n) : BigPrime(n), num(n){
  }
  virtual bool isPrime() const {
    return true;
  }
private:
  const int num;
};
template <class T>
class Set {
public:
  Set(int sz);
  ~Set();
  bool add(T *bp);
  bool remove(T *bp);
  int count() const {
  	int ret = 0;
  	for (int i = 0; i < index; i++) {
  	  if (pset[i]->isPrime())
  	    ret += 1;
	  }
  	return ret;
  }
  int sum() const {
  	return 0;
  } 
private:
  T **pset;
  int size, index;
};
int main() {
  Set<BigPrime> set(1000);
  BigSuperPrime bp(2), bp1(3);
  set.add(&bp);
  set.add(&bp1);
  std::cout << set.count() << std::endl;
  return 0;
} 

template <class T>
Set<T>::Set(int sz):size(sz) {
  index = 0;
  pset = new T*[size];  //����洢�ռ� 
}

template <class T>
Set<T>::~Set() {
  delete[] pset;  //���� 
}

template <class T>
bool Set<T>::add(T *bp) {
  pset[index++] = bp;
  return true;
}
