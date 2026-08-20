const alunos = [
    { nome: "Rafael Victor", idade: 15, cidade:"São Paulo", nota_final: 9.5},
    { nome: "Buna Vascobina", idade: 13, cidade:"Paulo São", nota_final: 8},
    { nome: "Pola Tubaina", idade: 16, cidade:"Paulo Paulo", nota_final: 8.5},
    { nome: "Lablazo Nigginiri", idade: 14, cidade:"São São", nota_final: 9.5},
    { nome: "Nhaum Cet", idade: 133, cidade:"Pausão", nota_final: 10},
]
alunos.forEach(aluno =>
    console.log(`Nome: ${aluno.nome}, Idade: ${aluno.idade}, Cidade: ${aluno.cidade}, Nota Final: ${aluno.nota_final}`)
)