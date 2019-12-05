#include "test_bind.h"


godot::Test::Test()
{
}

godot::Test::~Test()
{
}


void godot::Test::test_string(const String data)
{
	Godot::print("test_string data=" + data);
}

void godot::Test::test_array(const Array data)
{
	Godot::print("test_string data.size=" + String::num( data.size()));
}

void godot::Test::test_dictionary(const Dictionary data)
{
	Godot::print("test_string data[0]=" + data.to_json());
}

void godot::Test::test_pool_byte_array(const PoolByteArray data)
{
	Godot::print("test_string data.size=" + String::num(data.size()));
}

void godot::Test::test_pool_int_array(const PoolIntArray data)
{
	Godot::print("test_string data.size=" + String::num(data.size()));
}

void godot::Test::test_pool_string_array(const PoolStringArray data)
{
	Godot::print("test_string data.size=" + String::num(data.size()));
}

void godot::Test::test_variant(const Variant data)
{
}

void godot::Test::_init()
{

}

void godot::Test::_register_methods()
{
	register_method("test_string", &Test::test_string);
	register_method("test_array", &Test::test_array);
	register_method("test_dictionary", &Test::test_dictionary);
	register_method("test_pool_byte_array", &Test::test_pool_byte_array);
	register_method("test_pool_int_array", &Test::test_pool_int_array);
	register_method("test_pool_string_array", &Test::test_pool_string_array);
	register_method("test_variant", &Test::test_variant);
}