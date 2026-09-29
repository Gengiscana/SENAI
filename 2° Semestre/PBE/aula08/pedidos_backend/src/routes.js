const express = require("express")
const router = express.Router()

const Cliente = require("./controllers/cliente")
const Pedido = require("./controllers/pedido")

const rotaInicial = (req, res) => {
    res.json("Pedidos MVC respondendo")
}

router.get("/", rotaInicial)
router.get("/pedidos", Pedido.listar)
router.get("/clientes", Cliente.listar)
router.post("/pedidos", Pedido.criar)
router.post("/clientes", Cliente.criar)
router.delete("/pedidos/:id", Pedido.excluir)
router.delete("/clientes/:id", Cliente.excluir)
router.put("/pedidos/:id", Pedido.alterar)
router.put("/clientes/:id", Cliente.alterar)

module.exports = router