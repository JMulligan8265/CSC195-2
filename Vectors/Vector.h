#pragma once
#include <initializer_list>
#include <limits>
#include <iostream>
#include <cassert>
namespace vec
{
	template<typename T>
	class vector
	{
	public:
		vector() {
			
		}
		vector(size_t capacity)
		{
			_size = capacity;
			reserve(capacity);
		}
		vector(const std::initializer_list<T>& ilist) {
			reserve(_size * 2);
			for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
			{
				push_back(*iter);
			}
		}
		vector(const vector& other) {
			reserve(other._capacity * 2);
			_size = other._size;
			//_elements = new T[other._size];

			for (int i = 0; i < other._size; i++) {
				_elements[i] = other._elements[i];
				T();
			}
		}
		~vector() {
			delete[] _elements;
		}
		vector& operator = (const vector& other) {
			//_size = other._size;
			reserve(other._capacity * 2);
			_size = other._size;
			for (int i = 0; i < _size; i++) {
				_elements[i] = other._elements[i];
				
			}
			return *this;
		}
		T& operator [] (size_t position) {
			return _elements[position];
		}
		const T& operator [] (size_t position) const {
			return _elements[position];
		}
		T& at(size_t position) {
			assert(true);
			return _elements[position];
		}
		const T& at(size_t position) const {
			// assert
			return _elements[position];
		}
		T& front() {
			return _elements[0];
		}
		T& back() {
			return _elements[_size - 1];
		}
		T* data() {
			return &_elements[0];
			
		}
		void push_back(const T& value) {
			size_t newSize = _size + 1;
			// new size bigger than cap
			if (newSize > _capacity) {
				reserve(newSize);
			}

			_elements[_size++] = value;;
		}
		void pop_back() {
			// can size be less than 0
			if (_size > 1) {
				_size = _size - 1;
			}
			
		}
		void reserve(size_t capacity) {
			//Check if more memory needs to be reserved.
			//Get new buffer from heap at least as big as the new capacity.
			//Maintain written values.
			//Delete old memory/buffer.
			//assign elements to new buffer
			//update capacity.

			if (capacity <= _capacity) {
				return;
			}

			T* copy = _elements;
			size_t newCapacity = capacity + 5;
			_elements = new T[newCapacity];

			for (int i = 0; i < _size; i++) {
				_elements[i] = copy[i];
			}
			
			delete[] copy;
			_capacity = newCapacity;
		}
		void resize(size_t new_size, const T& value = T{}) {
			if (new_size < _size) {
				int start = _size;
				_size = new_size;
				for (int i = start; i < new_size; i++) {
					_elements[i] = NULL;
				}
				
			}
			else if (new_size > _size) {
				if (_capacity < new_size) {
					reserve(new_size * 2);
				}
				int start = _size;
				_size = new_size;
				for (int i = start; i < _size; i++) {
					_elements[i] = value;
				}
			}
		}
		void clear() {
			_size = 0;
		}
		void swap(vector& other) {
			

			vector copy1 = other;
			T* copy2 = _elements;

			
			other.reserve(other._size * 2);
			other._size = _size;
			//other._elements = new T[other._size];
			for (int i = 0; i < other.size(); i++) {
				other._elements[i] = copy2[i];
			}
			
			
			reserve(copy1._size * 2);
			_size = copy1._size;
			//_elements = new T[_size];
			for (int i = 0; i < _size; i++) {
				_elements[i] = copy1._elements[i];
			}
		}
		bool empty() const {
			return _size == 0;
		}
		size_t size() const {
			return _size;
		}
		size_t capacity() const {
			return _capacity;
		}
		size_t max_size() const { return std::numeric_limits<size_t>::max() / sizeof(T); }
	private:
		T* _elements{ nullptr };
		size_t _size{};
		size_t _capacity{};
	};
}
