king, queen, rook, bishop, knight, pawn = map(int, input().split())
king, queen, rook, bishop, knight, pawn = king - 1, queen - 1, rook - 2, bishop - 2, knight - 2, pawn - 8
king, queen, rook, bishop, knight, pawn = -king, -queen, -rook, -bishop, -knight, -pawn
print(' '.join(map(str, [king, queen, rook, bishop, knight, pawn])))