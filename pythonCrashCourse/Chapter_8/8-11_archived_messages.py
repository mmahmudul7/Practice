def send_messages(msgs, messages):
    while msgs:
        current_msg = msgs.pop()
        messages.append(current_msg)

def show_messages(msgs):
    for msg in msgs:
        print(msg)

texts = ["how are you?", "I am fine", "I love python"]
sent_text = []

send_messages(texts[:], sent_text)
show_messages(sent_text)

print("Original messages: ", texts)
print("Sent messges: ", sent_text)