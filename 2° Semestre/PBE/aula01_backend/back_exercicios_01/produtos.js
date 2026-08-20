const produtos = [
    {Nome: "Açai de carne", Quantidade: 7892, Preço: 3.59},
    {Nome: "Polenta de maçã", Quantidade: 5, Preço: 9.99},
    {Nome: "Macarrão com oregano", Quantidade: 3, Preço: 50.99},
    {Nome: "PC Gamer Pichau, AMD Ryzen 9 5900XT, GeForce RTX 5070 12GB, 16GB DDR4, SSD 1TB", Quantidade: 327, Preço: 7999.99},
]
produtos.forEach(Mercado =>
    console.log(`Nome: ${Mercado.Nome}, Quantidade: ${Mercado.Quantidade}, Preço: ${Mercado.Preço}, Total: R$${(Mercado.Quantidade * Mercado.Preço).toFixed(2)}`)
)