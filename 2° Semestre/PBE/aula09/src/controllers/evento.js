const con = require('../db')

const cadastrar = (req, res) => {
    const { usuarioId, cidade, tipoEvento, temperaturaMaxima, nivelImpacto } = req.body
    try {
        const sql = 'INSERT INTO evento (usuarioId, cidade, tipoEvento, temperaturaMaxima, nivelImpacto) VALUES (?, ?, ?, ?, ?);'
        con.query(sql, [usuarioId, cidade, tipoEvento, temperaturaMaxima, nivelImpacto], (err, results) => {
            if (err) {
                console.error(err)
                res.status(500).json({ error: 'Erro ao cadastrar evento' })
            } else {
                const novoevento = req.body
                novoevento.id = results.insertId
                res.status(201).json({ message: 'Evento cadastrado com sucesso', event: novoevento })
            }
        })
    } catch (error) {
        console.error(error)
        res.status(400).json({ error: 'Erro ao cadastrar evento', details: 'Informe { usuarioId, cidade, tipoEvento, temperaturaMaxima, nivelImpacto }' })
    }
}

const listar = (req, res) => {
    const sql = 'SELECT * FROM evento;'
    con.query(sql, (err, results) => {
        if (err) {
            console.error(err)
            res.status(500).json({ error: 'Erro ao buscar eventos' })
        } else {
            res.json(results)
        }
    })
}

const atualizar = (req, res) => {
    const { id } = req.params
    const { usuarioId, cidade, tipoEvento, temperaturaMaxima, nivelImpacto } = req.body
    const sql = 'UPDATE evento SET usuarioId = ?, cidade = ?, tipoEvento = ?, temperaturaMaxima = ?, nivelImpacto = ? WHERE id = ?'
    con.query(sql, [usuarioId, cidade, tipoEvento, temperaturaMaxima, nivelImpacto, id], (err, results) => {
        if (err) {
            console.error(err)
            res.status(500).json({ error: 'Erro ao cadastrar evento' })
        } else if (results.affectedRows == 0) {
            res.status(404).json({ error: 'Evento não encontrado' })
        } else {
            res.json({ message: 'Evento atualizado com sucesso', event: { id, ...req.body } })
        }
    })
}

const deletar = (req, res) => {
    const { id } = req.params
    const sql = 'DELETE FROM evento WHERE id = ?'
    con.query(sql, [id], (err, results) => {
        if (err) {
            console.error(err)
            res.status(500).json({ error: 'Erro ao deletar evento' })
        } else {
            res.json({ message: 'Evento deletado com sucesso', id})
        }
    })
}

module.exports = {
    cadastrar,
    listar,
    atualizar,
    deletar
}