const express = require('express')
const pacientes = require('../dados.json')

const calcularIMC = () => {
    pacientes.forEach(p=>{
        p.imc = p.peso/(p.altura*p.altura)
    })
}
const mostrarPaciente = (req, res) => {
    calcularIMC()
    res.send(pacientes)
}

const novoPaciente = (req, res) => {
    if(req.body){
        pacientes.push(req.body)
        res.send("Paciente registrado")
    }else{
        res.send("Erro ao registrar")
    }
}

const porta = 3000
const app = express()
app.use(express.urlencoded({extended:true}))

app.post("/", novoPaciente)
app.get("/", mostrarPaciente)

app.listen(porta, () => {
     console.log(`Servidor http://127.0.0.1:${porta}`)
     console.log(`Clinica http://127.0.0.1:5500/clinica/`)
})