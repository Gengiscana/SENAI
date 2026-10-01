const itens = require("../../dados/itens.json")

function subtotais() {
    itens.forEach(p => {
        p.subtotal = p.quantidade * p.preco
    })
}

const criar = (req, res) => {
    const dados = req.body
    dados.id = Number(itens[itens.length - 1].id) + 1 //autoIncrement
    itens.push(dados)
    res.status(201).json(dados)
}
const listar = (req, res) => {
    subtotais()
    res.json(itens)
}
const alterar = (req, res) => {
    // const id = req.params.id
    // const lista = req.body
    // let status = 0

    // itens.forEach((itens) => {
    //     if(itens.id == id) {
    //         status = 1
    //         itens.cpf = lista.cpf
    //         itens.nome = lista.nome
    //     }
    // })
    // if (status == 1) {
    //     res.json(itens)
    // }else{
    //     res.status(404).send("item não encontrado")
    // }
    let status = 0
    const id = req.params.id
    const dados = req.body
    const item = itens.find((p) => p.id == id)
    if (itens.id == id) {
        const chaves = Object.keys(dados)
        status = 1
        chaves.forEach((chaves) => {
            item[chaves] = dados[chaves]
        })
        res.json(itens)
    } if (status == 0) {
        res.status(404).send("item não encontrado")
    }
}
const excluir = (req, res) => {
    const id = req.params.id
    let status = 0
    itens.forEach((item, indice) => {
        if (item.id == id) {
            status = 1
            itens.splice(indice, 1)
        }
    })
    if (status == 1) {
        res.json(itens)
    } else {
        res.status(404).send("item não encontrado")
    }
}

module.exports = {
    criar, listar, alterar, excluir
}