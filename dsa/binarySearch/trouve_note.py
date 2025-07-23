'''
Écris une fonction trouve_note(notes, note_recherchee)
qui utilise la recherche binaire pour :
✅ dire si la note recherchée existe dans la liste (True ou False).
notes = [2, 5, 8, 10, 12, 14, 16, 18, 20]

'''
def trouve_note(notes, note_recherchee):
    min = 0
    max = len(notes)-1
    while min <= max:
        milieu = (min+max)//2
        notes[milieu]
        if notes[milieu] == note_recherchee:
            return True
        elif notes[milieu] < note_recherchee:
            min = notes[milieu] + 1
        else :
            max = notes[milieu] - 1
    return False

notes = [1, 2, 3, 4,4,5]
print(trouve_note(notes,5))

