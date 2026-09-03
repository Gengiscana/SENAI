const express = require('express')
const pedidos = require('../dados.json')

const calcularSubtotais = () => {
    pedidos.forEach(p => {
        p.subtotal = p.quantidade * p.preco
    })
}

const listarPedidos = (req, resp) => { //determina a comunicação (resposta)
    calcularSubtotais()
    resp.send(pedidos)
}

const novoPedido = (req, resp) => {
    if (req.body) {
        pedidos.push(req.body)
        resp.send("Pedido recebido, em Processamento")
    } else {
        resp.send("Erro ao receber pedido")
    }
}

const excluirPedido = (req, resp) => {
    const id = req.params.id;
    let status = 0

    pedidos.forEach((pedido, indice) => {
        if (pedido.id == id) {
            status = 1
            pedidos.splice(indice, 1)
        }
    })
    if (status == 1) {
        resp.send("Pedido Excluido com Sucesso")
    } else {
        resp.status(404).send("Pedido não encontrado")
    }

}

const atualizarPedido = (req, resp) => {
    const id = req.query.id
    const dados = req.body
    let status = 0

    pedidos.forEach((pedido) => {
        if (pedido.id == id) {
            status = 1;
            pedido.nome = dados.nome
            pedido.quantidade = dados.quantidade
            pedido.preco = dados.preco
            pedido.peso = dados.peso

        }
    });
    if (status == 1) {
        resp.send("Pedido atualizado com Sucesso !")
    } else {
        resp.status(404).send("Pedido não encontrado")
    }
}

const app = express()
app.use(express.urlencoded({ extended: true }))
const porta = 3000

app.post("/", novoPedido) //cadastrar
app.get("/", listarPedidos)//rota (listar ou buscar)
app.delete("/:id", excluirPedido)
app.patch("/", atualizarPedido)
//tudo minusculo
//PUT ou PATCH (atualizar)
//DELETE (excluir)

/* Receber Dados no Back-End*/
/*
 Body -> JSON, FORM, FORM-ENCODED (mais seguro)
 PARAMS -> minhaloja.com/produtos/sapato
 QUERY -> minhaloja.com/produtos&marca=x
*/

app.listen(porta, () => {
    console.log(`Servidor http://127.0.0.1:${porta}`)
    console.log(`Cliente http://127.0.0.1:5500/cliente/`)
})