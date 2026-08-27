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

const app = express()
const porta = 3000
app.use(express.urlencoded({extended:true}))

app.post("/", novoTime)
app.get("/", mostrarTimes)

app.listen(porta, () => {
    console.log(`Servidor: http://127.0.0.1:${porta}`)
    console.log(`Registro: http://127.0.0.1:5500/registro/`)
})