s = "@1 @2 @3 are my values"
for i,f in enumerate(['apples','oranges','pears']):
    s = s.replace(f'@{i+1}',f)
print(s)