import random
import time
from datetime import datetime

for i in range(10):
	time = datetime.now()
	random.seed(time)
	print(time)

