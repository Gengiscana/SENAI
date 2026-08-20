// char nome[100]
//['F', 'u', '1', 'a', 'n', 'o']

//"Fulano"

//let const

// let valor = "10.5";

// console.log(typeof(valor))

function somar(n1, n2) {
    let res = n1 + n2;
    console.log("Resultado - " + res);
}

somar(5, 10);

function calculaIRPF(salario) {
    let novoSalario = salario - (salario * 0.1);
    return novoSalario;
}

function calculaINSS(salario) {
    let novoSalario = salario - (salario * 0.05);
    return novoSalario;
}

let salario = 2500;

salario = calculaIRPF(salario);
salario = calculaINSS(salario);

console.log("Salario Atulizado - R$" + salario)

//Arrow function
const multiplica = (n1, n2) => {
    let res = n1 * n2;
    console.log("Multiplicacao = " + res);
};

multiplica(5, 20);

let senha = "senhador";

console.log(senha.length);

if(senha.length < 8) {
    console.log("Senha fora do padrao");
}else{
    console.log("Cadastrado com sucesso !");
}

let numeros = [1, 2, 3, 4, 5];

console.log(numeros.length);

console.log("-----------------------");

let nomes = [
    "Samuel Gomes",
    "SAMUEL CARDEAL",
    "Ana Godoy",
    "ANa gOMeS  ",
    "davi samuel",
    "DAVI CARDEAL",
    "Juliano Morais ",
    " juliano javi"
];

let busca = "J";

nomes.forEach( (nome, indice) => {
    // let novoNome = nome.toUpperCase();
    // novoNome = novoNome.trim();
    // if(novoNome.includes(busca.toUpperCase())){
    //     console.log(indice, nome)
    // }

    if(nome.trim().toUpperCase().includes(busca.toUpperCase())) {
        console.log(indice, nome);
    }
});

console.log("----------------------------");

console.log(numeros);

numeros.push(6);
numeros.push(7);

console.log(numeros);

numeros.pop();
numeros.pop();
numeros.pop();

console.log(numeros);

numeros.splice(1, 1);

console.log(numeros);

console.log("----------------------");

let exemplo = {
    "nome":"Fulano da Silva",
    "nascimento":"01/01/1830",
    "endereco":"Rua Sem Saida, n° 30",
    "numeros":["19912345678", "1931321213"]
};

console.log(exemplo.numeros[1]);

exemplo.numeros.push("19974185236");

console.log(exemplo.numeros);