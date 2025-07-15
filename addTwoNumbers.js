// LeetCode 2. Add Two Numbers
//
// Intuition : Ma première impression est de lire attentivement le sujet proposé.
//
// Approach : J’ai écrit le code dans mon cahier, puis je l’ai expliqué à ChatGPT pour m’aider à l’améliorer.
//
// Complexity :
// - Time complexity : pas encore évalué
// - Space complexity : pas encore évalué

// Définition de la structure ListNode
function ListNode(val, next) {
    this.val = (val === undefined ? 0 : val);
    this.next = (next === undefined ? null : next);
}

/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
function addTwoNumbers(l1, l2) {
    let teteFictive = new ListNode(0);
    let courant = teteFictive;
    let retenue = 0;

    while (l1 !== null || l2 !== null || retenue !== 0) {
        let x = 0;
        let y = 0;

        if (l1 !== null) {
            x = l1.val;
        }

        if (l2 !== null) {
            y = l2.val;
        }

        let somme = x + y + retenue;

        if (somme >= 10) {
            retenue = 1;
        } else {
            retenue = 0;
        }

        let chiffre = somme % 10;
        courant.next = new ListNode(chiffre);
        courant = courant.next;

        if (l1 !== null) {
            l1 = l1.next;
        }

        if (l2 !== null) {
            l2 = l2.next;
        }
    }

    return teteFictive.next;
}

