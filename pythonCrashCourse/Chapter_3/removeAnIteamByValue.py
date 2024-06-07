motorcycles = ["honda", "yahama", "suzuki", "ducati"]
print(motorcycles)

motorcycles.remove("ducati")
print(motorcycles)

# another script
motorcycles = ["honda", "yahama", "suzuki", "ducati"]
print(f"\n{motorcycles}")

too_expensive = "ducati"
motorcycles.remove(too_expensive)
print(motorcycles)

print(f"\nA {too_expensive.title()} is too expensive for me.")