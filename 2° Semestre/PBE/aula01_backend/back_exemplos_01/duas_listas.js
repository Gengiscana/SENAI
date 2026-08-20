var frutas = ["maçã", "banana", "laranja", "uva", "abacaxi"]
var precos = [2.5, 3.0, 1.5, 4.0, 5.0]
for (var i = 0; i < frutas.length; i++) {
    console.log(`${i}: ${frutas[i]}\t R$ ${precos[i].toFixed(2)}`)
}
frutas.forEach((fruta, indice) => {
    console.log(`${indice}: ${fruta} \t R$ ${precos[indice].toFixed(2)}`)
})