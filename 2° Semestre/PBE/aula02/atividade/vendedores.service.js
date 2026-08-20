let vendedores = require("./mockup.vendedores")

const cadastrar = (matricula, nome, salario, comissao) => {
    let vendedor = {
        matricula,
        nome,
        salario,
        comissao
    }

    vendedores.push(vendedor)
}

const listar = () => {
    vendedores.forEach( (vendedor, indice) => {
        console.log(vendedor)
    } )
}

const buscar = (busca) => {
    vendedores.forEach( (vendedor) => {
        let temp = JSON.stringify(vendedor).toLowerCase()
        if(temp.includes(busca.toLowerCase())){
            console.log(vendedor)
        }
    } )
}

const buscarPorMatricula = (busca) => {
    vendedores.forEach( (vendedor) => {
        let matricula = vendedor.matricula

        if(matricula == busca){
            console.log(vendedor)
        }
    } )
}

const buscarPorNome = (busca) => {
    vendedores.forEach( (vendedor) => {
        let nome = vendedor.nome.toLowerCase()

        if(nome == busca.toLowerCase()){
            console.log(vendedor)
        }
    } )
}

const excluirPorMatricula = (matricula) => {
    vendedores.forEach( (vendedor, indice) => {
        let matriculaTemp = vendedor.matricula

        if(matriculaTemp == matricula){
            vendedores.splice(indice, 1)
        }
    } )
}

buscarPorMatricula("003")

buscarPorNome("Polyphemeus da Silva")

console.log("------------------------")

cadastrar("005", "Gusta Bonin", 17500, 0.15)

excluirPorMatricula("003")

listar()