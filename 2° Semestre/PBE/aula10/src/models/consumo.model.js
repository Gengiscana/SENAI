const con = require("../config/db")

const listar = async () => {
    const [resultado] = await con.query(
        "SELECT id, usuarioId, local, equipamento, consumoKwh, mesReferencia, status FROM consumo"
    )

    return [resultado]
}

const buscar = async (id) => {
    const [resultado] = await con.query(
        "SELECT id, usuarioId, local, equipamento, consumoKwh, mesReferencia, status FROM consumo WHERE id = ?", [id]
    )

    return resultado
}

const excluir = async (id) => {
    const [resultado] = await con.query(
        "DELETE FROM consumo WHERE id = ?", [id]
    )

    return resultado
}

module.exports = {
    listar,
    buscar,
    excluir
}