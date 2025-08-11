// leetcode 136 , niveau easy

function singleNumber(nums) {
  const counts = {};

  // Compter les occurrences de chaque nombre
  for (const num of nums) {
    counts[num] = (counts[num] || 0) + 1;
  }

  // Chercher le nombre avec occurrence 1
  for (const num of nums) {
    if (counts[num] === 1) {
      return num;
    }
  }

  return null; // Si aucun élément unique trouvé
}
