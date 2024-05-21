# basic
print("Hello, World!")

age = 25
print('Age type->',type(age))


temperature = 36.6
print('temperature->',temperature)

name = "Alice"
print('My name is ',name)


is_student = True
print('This is boolean ',is_student)

# Intermediate Variables
fruits = ['apple', 'banana','mongo']
print("fruits name -> ",fruits)


# List and Tuple
 
# Lists and tuples are both used to store collections of items.
# Lists are mutable, meaning their elements can be changed after the list has been created.
# Lists are defined using square brackets [].
# my_list = [1, 2, 3, 4, 5]
# So it is mutable , Methods: Lists have several built-in methods for modifying their contents, such as append(), remove(), pop(), sort(), and reverse().

#Tuples
#Immutable: Tuples are immutable, meaning their elements cannot be changed after the tuple has been created.
#Syntax: Tuples are defined using parentheses ().
#Copy code
#my_tuple = (1, 2, 3, 4, 5)
#Methods: Since tuples are immutable, they have fewer built-in methods than lists. They include methods like count() and index()

#a dictionary is a collection of key-value pairs. It is an unordered, mutable, and indexed data structure. Dictionaries are highly efficient for retrieving values when the key is known.

# my_dict ={
#     "name":"Prithwi",
#     "age":25,
#     "city":"chandauli"
# }


# original_list = [1, 2, 3, 4]
# newList = original_list.append(100)
# print('newList ->',newList)
# print('original-list ->',original_list)


#USING SLICING
original_list = [1, 2, 3, 4]
newList = original_list[:]  # Create a copy of the original list by #USING method SLICING
#newList = original_list.copy(); Create a copy of the original list by #USING CPOY method
print('newList ->',newList)
print(original_list)

# Create a list of squares for even numbers between 0 and 9
squares = [x**2 for x in range(10) if x % 2 == 0]
print(squares)  # Output: [0, 4, 16, 36, 64]