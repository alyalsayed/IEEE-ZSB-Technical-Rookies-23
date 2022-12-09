import math
import os
import random
import re
import sys

def climbingLeaderboard(ranked, player):
    points = sorted(list(set(ranked)), reverse=True)
    hero_ranks = []
    for score in player:
        while points and score >= points[-1]:
            points.pop()
        hero_ranks.append(len(points) + 1)
    return hero_ranks
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    ranked_count = int(input().strip())
    ranked = list(map(int, input().rstrip().split()))
    player_count = int(input().strip())
    player = list(map(int, input().rstrip().split()))
    result = climbingLeaderboard(ranked, player)
    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')
    fptr.close()
