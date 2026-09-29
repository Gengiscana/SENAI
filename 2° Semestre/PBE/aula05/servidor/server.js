const express = require("express")
const item = require("../inventario.json")

const mostrarItens = (req, res) => {
    res.send(item)
}

const novoItem = (req, res) => {
    if (req.body) {
        item.push(req.body)
        res.send("Item regidtrado.")
    } else {
        res.status(404).send("Não foi possilve registrar.")
    }
}

const atualizarItem = (req, res) => {
    const id = req.params.id
    const inventario = req.body
    let status = 0

    item.forEach((item) => {
        if (item.id == id) {
            status = 1
            item.item = inventario.item
            item.local = inventario.local
            item.dataRegistro = inventario.dataRegistro
            item.valor = inventario.valor
            item.patrimonio = inventario.patrimonio
        }
    })
    if (status == 1) {
        res.send("Item atualizado com sucesso.")
    } else {
        res.status(404).send("Item não encontrado.")
    }
}
const excluirItem = (req, res) => {
    const id = req.params.id
    let status = 0

    item.forEach((itens, indice) => {
        if (itens.id == id) {
            status = 1
            item.splice(indice, 1)
        }
    })
    if (status == 1) {
        res.send("Item excluido com sucesso.")
    } else {
        res.status(404).send("Item não encontrado")
    }
}

const buscarId = (req, res) => {
    const id = req.params.id
    let status = 0

    item.forEach((itens, indice) => {
        if (itens.id == id) {
            status = 1
            res.send(item[indice], 1)
        }
    })
    if (status == 0) {
        res.status(404).send("Item não encontrado")
    }
}

const app = express()
app.use(express.urlencoded({ extended: true }))
const porta = 3000

app.get("/inventario/", mostrarItens)
app.get("/inventario/:id", buscarId)
app.post("/inventario/", novoItem)
app.delete("/inventario/:id", excluirItem)
app.put("/inventario/:id", atualizarItem)

app.listen(porta, () => {
    console.log(`Servidor http://127.0.0.1:${porta}`)
    console.log(`Registro http://127.0.0.1:5500/registro/`)
})