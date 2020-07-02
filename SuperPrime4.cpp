#include <iostream>
#include <vector>
/** 
  * ������������
  */
class Prime {
public:
  Prime(int n) : num_(n) {
  }
  Prime(const Prime &obj) : num_(obj.num_) {
  }
  ~Prime() {
  }
  bool isPrime() const {  //������ 
    return false;
  }
  Prime& operator= (const Prime &obj) {
    // this->num_ = obj.num_;
    return *this;
  }
private:
  const unsigned int num_;  //�����������ǳ��� 
}; 
/**
  * ����һ��ͳ�����������ĳ���
  * ʹ����STL������/ģ�弼��/��������
  */ 
int main() {
  //������������ļ��� 
  std::vector<Prime> nums;
  Prime p(2);       //��2����һ������ 
  nums.push_back(p); //�Ѷ�����뼯�ϡ�   �ʣ�����2��������ͬһ�������� 
  // delete p;  // ����ô֪ͨnums�����󱻸ɵ��ˣ� 
  //�����������󼯺ϣ�ͳ��������������� 
  int count = 0;
  for (std::vector<Prime>::iterator it = nums.begin(); it != nums.end(); ++it) {
    if (it->isPrime())  //�ж϶����Ƿ�Ϊ���� ��   it���󡰵ȼۡ�p���� 
      count += 1;
  }
  std::cout << "How many : " << count << std::endl;
  return 0;
} 
