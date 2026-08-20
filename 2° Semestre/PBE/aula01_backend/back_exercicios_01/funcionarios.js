const Funcionarios = [
    {Nome: "Pietro Bonese", Cargo: "Garoto de Programa", Salário: "R$15000", Tempo: "6 anos"},
    {Nome: "Buno Vascon", Cargo: "Caçador", Salário: "R$37000 em média", Tempo: "5 anos"},
    {Nome: "Gabriel Pereira", Cargo: "Provador de Aperitivos", Salário: "R$5392.77", Tempo: "35 anos"},
    {Nome: "Nhanhu Nhinhunim Nunimnunim", Cargo: "Vendedor de Açai com Leite Ninho", Salário: "R$2500", Tempo: "23 anos"},
]
Funcionarios.forEach(wow =>
    console.log(`Nome: ${wow.Nome}, Cargo: ${wow.Cargo}, Salário: ${wow.Salário}, Tempo: ${wow.Tempo}`)
)