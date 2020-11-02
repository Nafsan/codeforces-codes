import math

for _ in range(int(input())):
    n, m, k = map(int, input().split())
    card_for_one_player = int(n / k)
    if m <= card_for_one_player:
        print(m)
    else:
        rem = m-card_for_one_player
        ans = int(math.ceil(rem/(k-1)))
        print(card_for_one_player-ans)

