const express = require("express")
const cors = require("cors")

const app = express()

app.use(cors())
app.use(express.json())

/*
    importar as rotas
*/

const usuarioroutes = require("./src/routes/usuario.routes")
const consumoroutes = require("./src/routes/consumo.routes")
app.use("/usuarios", usuarioroutes)
app.use("/consumos", consumoroutes)

app.listen(3000, () => {
    console.log(`Servidor respondendo em: http://localhost:3000`)
})