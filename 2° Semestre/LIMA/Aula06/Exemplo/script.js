const nome = document.querySelector("#nome")
const botao = document.querySelector("#botao")
const mensagem = document.querySelector("#mensagem")
const body = document.querySelector("body")

botao.addEventListener("click",function(){
    mensagem.textContent = `Ola ${nome.value}`

    body.style.transition = `background ${tempo.value}s ease`
    body.style.backgroundColor = `${cor.value}`
    if(nome.value === "Verity"){
        body.style.backgroundImage = `url(verity.jpg)`
    }else if(nome.value === "Veracidade"){
        body.style.backgroundImage = `url(veracidade.jpg)`;
    }else{
        body.style.backgroundImage = "none";
    }
})