#include <iostream>
class SuperPrime {
class Prime {
  public:
  	SuperPrime():number(0) {
  	SuperPrime():number(0) {   
  	  size = 0;
  	}
  	SuperPrime(int n):number(n) {
  	  size = 0;
  	  split();   
  	Prime():number(0) {
	}
  	~SuperPrime() {
  	  for (int i = 0; i < size; ++i)  
		delete N[i]; 
  	Prime(int n):number(n) {
	}
  	bool isSuperPrime() {
  	  split();
  	  int a = sum();
	  int b = multi();
	  int c = squareSum();
	  if (isPrime(number) && isPrime(a) && isPrime(b) && isPrime(c))
  	  SuperPrime a(sum());    
	  SuperPrime b(multi());
	  SuperPrime c(squareSum());
	  if (isPrime() && a.isPrime() && b.isPrime() && c.isPrime())
	    return true; 
	~Prime() {
	}
  	bool isPrime() { 
  	  if(number==1||number==0)
		return false;
	  for(int i=2;i<number;i++)
	  {
		if(number%i==0)
			return false;
	  }
			//2到number-1的因子 
  	  return false;
	}
  private:
  	const int number;
  	int N[100], size;
  	bool isPrime(int n) { 

  	SuperPrime *N[100];
	int size;
  	bool isPrime() { 
  	  //2到number-1的因子 
  	  return false;
}; 
class PrimeSet {
  public:
  	PrimeSet(int size) {
  	  //集合的构造什么？ 
  	  N = new Prime*[size];
  	  this->size = size;
  	  index = 0;
	}
	~PrimeSet() {
  	  for (int i = 0; i < index; ++i)  //销毁对象 
		delete N[i]; 
	  delete[] N;
	}
	bool add(int n) {
	  if(index == size)  return false;
	  Prime *p = new Prime(n);
	  N[index] = p;
	  index += 1;
	  return true;
	}
	void split() {
	bool isAllPrime() {
	  for(int i = 0; i < index; i++)
	    if (!N[i]->isPrime())
	      return false;
	  return true;
	} 
  private:
  	Prime **N;
	int size, index;
};
class SuperPrime {
  public:
	SuperPrime():number(0), pset(3) {   
 	}
  	SuperPrime(int n):number(n), pset(3) {
  	  split();   
	}
  	~SuperPrime() {
	}
	bool isSuperPrime() {
	//怎么使用pset？ 
	    Prime p(number);
	  		if (p.isPrime()&&pset.isAllPrime())
			  return true; 
	    return false;
		}

  private:
  	const int number;
    PrimeSet pset;
  	int size_N,N[10];
	void split() {   
	  int temp = number;
	  while(temp > 0) {
	  for(int i=0;temp > 0;i++) {
	  	int n = temp % 10;
	  	temp /= 10;
	  	N[size] = new SuperPrime(n);   
	  	size += 1;
	  	N[i]=n;}
	  	pset.add(sum());
	  	pset.add(multi());
		pset.add(squareSum());   
	  } 
	}

	int sum() {
	  return 0;
		int sum_number=0;
		for(int i=0;i<size_N;i++)
		{
			sum_number+=N[i];
		}
	  return sum_number;
	}
	int multi() {
	  return 0;
		int multi_number=1;
		int i;
		for(i=0;i<size_N;i++)
		{
			multi_number*=N[i];
		}
	  return multi_number;
	}
	int squareSum() {
	  return 0;
		int square_num=0;
		for(int i=0;i<size_N;i++)
		{
			square_num+=(N[i]*N[i]);
		}
	  return square_num;
	}
};
class Set {
  public:
  	Set(int from, int to) {
  	  size = 0;
	}
  	~Set() {
	}
  	int count() {
  	  int count = 0;
  	  for (int i = 0; i < size; i++)
  	    if(set[i].isSuperPrime())
  	      count += 1;
	  return count; 
	}
  	int sum() {
  	  int sum = 0;
  	  /*
  	  for (int i = 0; i < size; i++)
  	    if(set[i].isSuperPrime())
  	      sum += set[i];
  	      */ 
	  return sum; 
	}
  private:
  	SuperPrime set[1000];
  	int size;
};
 };
int main() {
  Set ss(100, 999);
  std::cout << "How Many: " << ss.count() << std::endl;
  std::cout << "Sum is " << ss.sum() << std::endl;
  SuperPrime sp(113);
  if (sp.isSuperPrime())
    std::cout << "113 is SuperPrime" << std::endl;
  else
    std::cout << "113 is NOT SuperPrime" << std::endl;
  return 0;
    SuperPrime sp(113);
    if (sp.isSuperPrime())
        std::cout << "113 is SuperPrime" << std::endl;
    else
        std::cout << "113 is NOT SuperPrime" << std::endl;
    return 0;
}