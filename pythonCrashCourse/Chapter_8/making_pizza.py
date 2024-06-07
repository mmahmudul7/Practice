######## Example 1
'''
import pizza

pizza.make_pizza(16, "pepperoni")
pizza.make_pizza(12, "mushrooms", "green peppers", "extra cheese")
'''
######## Example 2
'''
from pizza import make_pizza

make_pizza(16, "pepperoni")
make_pizza(12, "mushrooms", "green peppers", "extra cheese")
'''
######## Example 4
'''
import pizza as p

p.make_pizza(16, "pepperoni")
p.make_pizza(12, "mushrooms", "green peppers", "extra cheese")
'''
######## Example 5
from pizza import *

make_pizza(16, "pepperoni")
make_pizza(12, "mushrooms", "green peppers", "extra cheese")
