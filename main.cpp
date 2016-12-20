#include <iostream>
#include <vector>

class solution {
  public:
    int bulbSwitch(int n){
        int count = 0;
        for (int idx = 1; idx <=n; ++idx)
            if (numOfFactors(idx, n)%2 != 0)
                count++;
        return count;
    }

  private:
    int numOfFactors(int num, int n) {
        int factorCount = 0;
        for (int i = 1; i <= n; i++)
            if (num%i == 0)
                factorCount++;
        return factorCount;
    }
};

int main() {
    int num = 10;

    solution soln;
    int on = soln.bulbSwitch(num);
    std::cout << "The number of bulbs on is:\n"
              << on << std::endl;
}
