//Variadas não tipadas
x = 47
y = 20
//Processamentos
soma = x + y
sub = x - y
mult = x * y
div = x / y
resto = x % y
raiz = Math.sqrt(x)
potencia = Math.pow(x, 2)
//Saidas concatenadas
console.log("A soma de " + x + " + " + y + " = " + soma)
console.log("A subtração de " + x + " - " + y + " = " + sub)
//Saidas concatenadas com aspas simples 'apóstrofes'
console.log('A multiplicação de ' + x + ' * ' + y + ' = ' + mult)
console.log(' A divisão de ' + x + ' / ' + y + ' = ' + div.toFixed(2))
console.log('O resto da divisão de ' + x + ' % ' + y + ' = ' + resto)
//Saidas com template string (crase)
console.log(`A raiz quadrada de ${y} = ${raiz.toFixed(2)}`)
console.log(`A Potência de ${x}² = ${potencia}`)