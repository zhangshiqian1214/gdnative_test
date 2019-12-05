#pragma once


#include <Godot.hpp>
#include <Reference.hpp>
#include <Array.hpp>
#include <Dictionary.hpp>
#include <PoolArrays.hpp>
#include <Variant.hpp>

namespace godot {
	class Test : public Reference {
		GODOT_CLASS(Test, Reference)
	public:
		void _init();
		static void _register_methods();

	public:
		Test();
		~Test();

		void test_string(const String data);
		void test_array(const Array data);
		void test_dictionary(const Dictionary data);
		void test_pool_byte_array(const PoolByteArray data);
		void test_pool_int_array(const PoolIntArray data);
		void test_pool_string_array(const PoolStringArray data);
		void test_variant(const Variant data);
	};
}