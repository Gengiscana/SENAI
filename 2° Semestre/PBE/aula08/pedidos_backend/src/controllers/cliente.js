const clientes = require("../../dados/clientes.json")

function subtotais(){
    clientes.forEach(p=>{
        p.subtotal = p.quantidade * p.preco
    })
}

const criar = (req, res) => {
    const dados = req.body
    dados.id = Number(clientes[clientes.length - 1].id) + 1 //autoIncrement
    clientes.push(dados)
    res.status(201).json(dados)
}
const listar = (req, res) => {
    subtotais()
    res.json(clientes)
}
const alterar = (req, res) => {
    const id = req.params.id
    const lista = req.body
    let status = 0

    clientes.forEach((clientes) => {
        if(clientes.id == id) {
            status = 1
            clientes.cpf = lista.cpf
            clientes.nome = lista.nome
        }
    })
    if (status == 1) {
        res.send("Cliente atualizado")
    }else{
        res.status(404).send("Cliente não encontrado")
    }
}
const excluir = (req, res) => {
    const id = req.params.id
    let status = 0
    clientes.forEach((cliente, indice) => {
        if(cliente.id == id){
            status = 1
            clientes.splice(indice)
        }
    })
    if(status == 1 ){
        res.send("Cliente excluido")
    }else{
        res.status(404).send("Cliente não encontrado")
    }
}

module.exports = {
    criar, listar, alterar, excluir
}