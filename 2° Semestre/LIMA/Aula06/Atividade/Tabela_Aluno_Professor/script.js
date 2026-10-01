const botao = document.querySelector("#botao")
const nome = document.querySelector("#nome")
const email = document.querySelector("#email")
const telefone = document.querySelector("#telefone")
const endereco = document.querySelector("#endereco")
const salvar = document.querySelector("#salvar")
const tabela_aluno = document.querySelector("#tabela_aluno")
const tabela_professor = document.querySelector("#tabela_professor")
const prof = document.querySelector("#prof")
const aluno = document.querySelector("#aluno")
const alerta = document.querySelector("#alerta")

salvar.addEventListener("click", function () {
    const selecionado = document.querySelector('input[name="tipo"]:checked')

    const linha = document.createElement("tr")
    const colunaNome = document.createElement("td")
    const colunaEmail = document.createElement("td")
    const colunaTelefone = document.createElement("td")

    colunaNome.textContent = nome.value
    colunaEmail.textContent = email.value
    colunaTelefone.textContent = telefone.value

    linha.append(colunaNome)
    linha.append(colunaEmail)
    linha.append(colunaTelefone)

    if (!selecionado) {
        alerta.textContent = "Selecione um dos dois"
        return
    } else if (selecionado.value === "Professor") {
        tabela_professor.append(linha)
    } else if(selecionado.value === "Aluno"){
        tabela_aluno.append(linha)
    }
})