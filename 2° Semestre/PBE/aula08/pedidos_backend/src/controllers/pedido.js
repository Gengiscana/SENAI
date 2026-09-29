const pedidos = require("../../dados/pedidos.json")

function subtotais(){
    pedidos.forEach(p=>{
        p.subtotal = p.quantidade * p.preco
    })
}

const criar = (req, res) => {
    const dados = req.body
    dados.id = Number(pedidos[pedidos.length - 1].id) + 1 //autoIncrement
    pedidos.push(dados)
    res.status(201).json(dados)
}
const listar = (req, res) => {
    subtotais()
    res.json(pedidos)
}
const alterar = (req, res) => {
    const id = req.params.id
    const lista = req.body
    let status = 0

    pedidos.forEach((pedidos) => {
        if(pedidos.id == id) {
            status = 1
            pedidos.cpf = lista.cpf
            pedidos.nome = lista.nome
        }
    })
    if (status == 1) {
        res.send("Pedido atualizado")
    }else{
        res.status(404).send("Pedido não encontrado")
    }
}
const excluir = (req, res) => {
    const id = req.params.id
    let status = 0
    pedidos.forEach((pedido, indice) => {
        if(pedido.id == id){
            status = 1
            pedidos.splice(indice)
        }
    })
    if(status == 1 ){
        res.send("Pedido excluido")
    }else{
        res.status(404).send("Pedido não encontrado")
    }
}

module.exports = {
    criar, listar, alterar, excluir
}