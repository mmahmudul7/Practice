# https://pypi.org/project/opencv-python/

import cv2

cam = cv2.VideoCapture(0)

if not cam.isOpened():
    print("Error: Camera not accessible!")
else:
    while True:
        ret, frame = cam.read()
        if not ret:
            print("Failed to grab frame!")
            break

        cv2.imshow('my cam', frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    cam.release()
    cv2.destroyAllWindows()