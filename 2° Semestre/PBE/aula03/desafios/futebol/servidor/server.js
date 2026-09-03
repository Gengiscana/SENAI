const express = require("express")
const times = require("../dados.json")

const calcularJogos = () => {
    times.forEach(p=>{
        p.jogos = p.derrotas + p.vitorias + p.empates
    })
}

const calcularPontos = () => {
    times.forEach(p=>{
        p.pontos = p.vitorias*3 + p.empates
    })
}

const mostrarTimes = (req, res) => {
    calcularJogos()
    calcularPontos()
    res.send(times)
}

const novoTime = (req, res) => {
    if(req.body){
        times.push(req.body)
        res.send("Time registrado")
    }else{
        res.send("Não foi possivel registrar")
    }
}

const excluirTime = (req, res) => {
    const id = req.params.id;
    let status = 0

    times.forEach((time, indice) => {
        if (time.id == id) {
            status = 1
            times.splice(indice, 1)
        }
    })
    if (status == 1) {
        res.send("Time Excluido com Sucesso")
    } else {
        res.status(404).send("Time não encontrado")
    }
}

const atualizarTime = (req, res) => {
    const id = req.query.id
    const dados = req.body
    let status = 0

    times.forEach((times) => {
        if (times.id == id) {
            status = 1;
            times.nome = dados.nome
            times.vitorias = dados.vitorias
            times.empates = dados.empates
            times.derrotas = dados.derrotas
        }
    });
    if (status == 1) {
        res.send("Time atualizado com Sucesso !")
    } else {
        res.status(404).send("Time não encontrado")
    }
}

const app = express()
app.use(express.urlencoded({extended:true}))
const porta = 3000

app.post("/", novoTime)
app.get("/", mostrarTimes)
app.delete("/:id", excluirTime)
app.patch("/", atualizarTime)

app.listen(porta, () => {
    console.log(`Servidor http://127.0.0.1:${porta}`)
    console.log(`Registro http://127.0.0.1:5500/registro/`)
})