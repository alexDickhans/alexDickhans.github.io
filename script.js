function $(id) {
    return document.getElementById(id);
}

function replaceStart() {
    replace();
    setInterval(replace, 3000);
}

function replace() {
    console.log("Replacing");
    $("year").innerText = new Date().getFullYear();
}


