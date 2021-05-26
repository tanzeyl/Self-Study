import time

while True:
    t = time.localtime()
    print("\n")
    print("|--------------------------|")
    print("|--------------------------|")
    print("|{}hours {}minutes {}seconds.|".format(t.tm_hour, t.tm_min, t.tm_sec))
    print("|--------------------------|")
    print("|--------------------------|")
    time.sleep(1)
