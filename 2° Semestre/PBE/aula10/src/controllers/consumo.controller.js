const consumomodel = require("../models/consumo.model")

const listar = async (req, res) => {
    const resposta = await consumomodel.listar()
    res.status(200).json(resposta).end()
}

const buscar = async (req, res) => {
    const resposta = await consumomodel.buscar(req.params.id)
    res.status(200).json(resposta).end()
}

const excluir = async (req, res) => {
    const resposta = await consumomodel.excluir(req.params.id)
    res.status(204).json(resposta).end()
}

module.exports = {
    listar,
    buscar,
    excluir
}