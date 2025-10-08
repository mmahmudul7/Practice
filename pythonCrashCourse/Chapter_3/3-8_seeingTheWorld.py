locations = ['dhaka', 'rajshahi', 'kazla', 'zero point', 'binodpur bazar']

print(locations) # ['dhaka', 'rajshahi', 'kazla', 'zero point', 'binodpur bazar']
print(sorted(locations)) # ['binodpur bazar', 'dhaka', 'kazla', 'rajshahi', 'zero point']
print(locations) # ['dhaka', 'rajshahi', 'kazla', 'zero point', 'binodpur bazar']
locations.reverse()
print(locations) # ['binodpur bazar', 'zero point', 'kazla', 'rajshahi', 'dhaka']
locations.reverse()
print(locations) # ['dhaka', 'rajshahi', 'kazla', 'zero point', 'binodpur bazar']
locations.reverse()
print(locations) # ['binodpur bazar', 'zero point', 'kazla', 'rajshahi', 'dhaka']

locations.sort()
print(locations) # ['binodpur bazar', 'dhaka', 'kazla', 'rajshahi', 'zero point']
locations.sort(reverse=True)
print(locations) # ['zero point', 'rajshahi', 'kazla', 'dhaka', 'binodpur bazar']