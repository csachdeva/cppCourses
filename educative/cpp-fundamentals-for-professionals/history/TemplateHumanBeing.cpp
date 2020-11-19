#include <iostream>

class HumanBeing {
  public:
    HumanBeing(std::string n): name(n) {}

    std::string getName() const {
      return name;
    }

    void chanName(const std::string & newName) {
      name = newName;
    }
  private:
    std::string name;
};

class Man: public HumanBeing {
  using HumanBeing::HumanBeing;
  public:
    std::string getSex() const {
       return "male";
    }
};

class Woman: public HumanBeing {
   using HumanBeing::HumanBeing;

   public:
    /* Woman(std::string n): HumanBeing(n) {} */
    std::string getSex() const {
       return "female";
    }
};

template<typename T>
void xchg(T& x, T& y) {
  T t = x;
  x = y;
  y = t;
}

template<typename T, int N>
class Array {
  public:
    int getSize() const {
      return N;
    }
  private:
    T *elem[N];
};

int main() {
   int i = 10;
   int j = 20;
   std::cout << "i = " << i << ",j = " << j << std::endl;

   xchg(i, j);
   std::cout << "i = " << i << ",j = " << j << std::endl;

   Man huber("Huber");
   Man maier("Maier");
   std::cout << huber.getName() << " , " << maier.getName() << std::endl;

   xchg(huber, maier);
   std::cout << huber.getName() << " , " << maier.getName() << std::endl;

   Array<double, 10> doubleArray;
   std::cout << doubleArray.getSize() << std::endl;

   Array<Man, 5> manArray;
   std::cout << manArray.getSize() << std::endl;

   return 0;
}
