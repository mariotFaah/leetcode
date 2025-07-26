"""
   Premierement nous creons la class Node pour le donnee
   # Apres nous devons creer la class liste_chainee, en definissons la tete et aussi creer la methode ajouter pour lui
   # Finalement nous creons ensemble la methode afficher node;premierement on cree un variable courant qui contient le noeud hearder pui, on parcour la liste tant que le node ne contient pas le donnee None
"""
class Node:
    def __init__(self, donnee):
        self.donnee = donnee
        self.next = None

class Liste_chainee:
    def __init__(self):
        self.head = None

    def ajouter_debut(self, donnee):
        nouveau_node = Node(donnee)
        nouveau_node.next = self.head
        self.head = nouveau_node
    
    def afficher_liste(self):
        courant = self.head
        while courant:
            print(courant.donnee, end="->")
            courant = courant.next
        print("None")

# utilisation des deux methodes ajouter debut et afficher liste
ma_liste = Liste_chainee()
ma_liste.ajouter_debut(5)
ma_liste.ajouter_debut(15)
ma_liste.ajouter_debut(22)
ma_liste.afficher_liste()


