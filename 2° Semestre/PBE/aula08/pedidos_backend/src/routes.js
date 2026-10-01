const express = require("express")
const router = express.Router()

const Cliente = require("./controllers/cliente")
const Produto = require("./controllers/produto")
const Item = require("./controllers/item")
const Pedidos = require("./controllers/pedido")

const rotaInicial = (req, res) => {
    res.json("produtos MVC respondendo")
}

router.get("/", rotaInicial)
router.get("/produtos", Produto.listar)
router.get("/clientes", Cliente.listar)
router.post("/produtos", Produto.criar)
router.post("/clientes", Cliente.criar)
router.delete("/produtos/:id", Produto.excluir)
router.delete("/clientes/:id", Cliente.excluir)
router.put("/produtos/:id", Produto.alterar)
router.put("/clientes/:id", Cliente.alterar)
router.get("/pedidos", Pedidos.listar)
router.get("/itens", Item.listar)
router.post("/pedidos", Pedidos.criar)
router.post("/itens", Item.criar)
router.delete("/pedidos/:id", Pedidos.excluir)
router.delete("/itens/:id", Item.excluir)
router.put("/pedidos/:id", Pedidos.alterar)
router.put("/itens/:id", Item.alterar)

module.exports = router