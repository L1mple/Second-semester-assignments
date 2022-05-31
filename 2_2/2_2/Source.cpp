#include <cstddef>

template <typename T>
class Array {
public:
	explicit Array(size_t size = 2, const T& value = T()) {
		T* massive = new T[size];
		for (size_t i = 0; i < size; i++) {
			massive[i] = value;
		}
		ar = massive;
		this->size = size;
	};
	Array(const Array& other) {
		this->size = other.size;
		this->ar = new T[size];
		for (size_t i = 0; i != (size + 1); i++) {
			ar[i] = other.ar[i];
		}
	};
	~Array() {
		delete[] ar;
	};
	Array& operator=(const Array& other) {
		if (this != &other) {
			delete[] ar;
			size = other.size;
			ar = new T[size];
			for (size_t i = 0; i < size; i++) {
				ar[i] = other.ar[i];
			}
		}
	};

	size_t sizee() const {
		return this -> size;
	}


	T& operator[](size_t index) {
		return ar[index];
	}



	const T& operator[](size_t index) const {
		return ar[index];
	}
private:
	size_t size;
	T* ar;
};
int main() {
	return 0;
}