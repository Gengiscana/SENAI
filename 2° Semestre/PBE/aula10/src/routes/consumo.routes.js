const express = require("express")
const routes = express.Router()

const { cadastrar, listar, buscar, excluir, atualizar } = require("../controllers/consumo.controller")

routes.get("/listar", listar)
routes.get("/buscar/:id", buscar)
routes.delete("/excluir/:id", excluir)

module.exports = routes