const produtos = require("../../dados/produtos.json")

function subtotais() {
    produtos.forEach(p => {
        p.subtotal = p.quantidade * p.preco
    })
}

const criar = (req, res) => {
    const dados = req.body
    dados.id = Number(produtos[produtos.length - 1].id) + 1 //autoIncrement
    produtos.push(dados)
    res.status(201).json(dados)
}
const listar = (req, res) => {
    subtotais()
    res.json(produtos)
}
const alterar = (req, res) => {
    // const id = req.params.id
    // const lista = req.body
    // let status = 0

    // produtos.forEach((produtos) => {
    //     if(produtos.id == id) {
    //         status = 1
    //         produtos.cliente_id = lista.cliente_id
    //         produtos.produto = lista.produto
    //         produtos.preco = lista.preco
    //         produtos.quantidade = lista.quantidade
    //     }
    // })
    // if (status == 1) {
    //     res.json(produtos)
    // }else{
    //     res.status(404).send("produto não encontrado")
    // }
    const id = req.params.id
    const dados = req.body
    const chaves = Object.keys(dados)
    const produto = produtos.find((p) => p.id == id)

    chaves.forEach((chaves) => {
        produto[chaves] = dados[chaves]
    })
    res.json(produtos)
}
const excluir = (req, res) => {
    const id = req.params.id
    let status = 0
    produtos.forEach((produto, indice) => {
        if (produto.id == id) {
            status = 1
            produtos.splice(indice, 1)
        }
    })
    if (status == 1) {
        res.json(produtos)
    } else {
        res.status(404).send("produto não encontrado")
    }
}

module.exports = {
    criar, listar, alterar, excluir
}