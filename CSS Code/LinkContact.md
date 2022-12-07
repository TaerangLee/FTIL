## LinkContact 


`화면 클릭할 경우에 다음 페이지로 넘어가는 코드`

    const clickBox = document.querySelector(".write2"); 

    clickBox.addEventListener("click", () => {
        window.location = './Class2.html';
    })