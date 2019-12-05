extends Node2D

const Test = preload("res://bin/test.gdns")
onready var test = Test.new()

# Declare member variables here. Examples:
# var a = 2
# var b = "text"

# Called when the node enters the scene tree for the first time.
func _ready():
	pass # Replace with function body.

# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass

# test string
func _on_Button_pressed():
	for i in range(10000):
		var data = "0123456789abcdefghijklmnopqrstuvwxyz"
		test.test_string(data)
	pass # Replace with function body.


# test array
func _on_Button2_pressed():
	for i in range(10000):
		var data = []
		for j in range(1024):
			data.push_back(j)
		test.test_array(data)
	pass # Replace with function body.


# test dictionary
func _on_Button3_pressed():
	for i in range(10000):
		var data = { "playerid": 12334, "nickname": "Mike", "birthday": "2019-08-05" }
		test.test_dictionary(data)
	pass # Replace with function body.


#test pool_byte_array
func _on_Button4_pressed():
	for i in range(10000):
		var data = []
		for j in range(1024):
			data.push_back(11)
		var bytes = PoolByteArray(data)
		test.test_pool_byte_array(bytes)
	pass # Replace with function body.


#test pool_int_array
func _on_Button5_pressed():
	for i in range(10000):
		var data = []
		for j in range(1024):
			data.push_back(65537)
		var ints = PoolIntArray(data)
		test.test_pool_int_array(ints)
	pass # Replace with function body.

#test pool_string_array
func _on_Button6_pressed():
	for i in range(10000):
		var data = []
		for j in range(1024):
			data.push_back("hello world")
		var strings = PoolStringArray(data)
		test.test_pool_string_array(strings)
	pass # Replace with function body.

#test variant
func _on_Button7_pressed():
	for i in range(10000):
		var data = { "playerid": 12334, "nickname": "Mike", "birthday": "2019-08-05" }
		test.test_variant(data)
	pass # Replace with function body.
