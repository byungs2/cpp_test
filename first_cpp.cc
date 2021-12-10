#include <iostream>
#include <string>

struct Address {
  int height;
  void *next;
}

class Array {
  private:
    const int dim;
    int *size;
    Address *top;

  public:
    Array (int dim, int *size) : dim(dim) {
      this->size = new int[dim];
      for (int i = 0; i < dim; i++) {
        this->size + i = size + i;
      }
    }

    void init_array() {
      Address *current = this->top;
      for (int i = 0; i < dim; i++) {
        static_cast<int *>(current->next) = new int[size[i]];

      }
    }
}

int main()
{
	

	return 0;
}
