import random

class Die:
    def __init__(self,low=1,high=6):
        self.value = random.randint(low,high)

    def __str__(self):
        return f'{self.value}'
die1 = Die()
die2 = Die()
print(die1,die2)
d_n_d_die = Die(1,12)
print(d_n_d_die)