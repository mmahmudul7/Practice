from user import Admin

mahmud = Admin('Mahmudul', 'Hasan', 23, 'male')
mahmud.privileges.show_privilleges()
print("\nAdding privileges...")
mahmud_privileges = ["can add post", "can delete post", "can ban user"]
mahmud.privileges.privileges = mahmud_privileges
mahmud.privileges.show_privilleges()