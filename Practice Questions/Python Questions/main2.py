import time

t = time.localtime()
# print("Transaction completed at", str(t.tm_hour) + "h" + str(t.tm_min) + "m" + str(t.tm_sec))
time_now = time.time()
deliver_time = time.time() + 86400 * 7
t.localtime(deliver_time)  # This will display the dte on which your delivery will arrive.

