function getTxt(msg){
    var req = new XMLHttpRequest();
    if(msg == 0)
        req.open("GET", "/req/txt/00.txt", true);
    else if(msg == 1)
        req.open("GET", "/req/txt/01.txt", true);
    else if(msg == 2)
        req.open("GET", "/req/txt/2.txt", true);
    else if(msg == 3)
        req.open("GET", "/req/txt/3.txt", true);
    else if(msg == 4)
        req.open("GET", "/req/txt/4.txt", true);
    else if(msg == 5)
        req.open("GET", "/req/txt/5.txt", true);
    else if(msg == 6)
        req.open("GET", "/req/txt/6.txt", true);
    else if(msg == 7)
        req.open("GET", "/req/txt/7.txt", true);


    req.setRequestHeader("Content-Type", "text/plain");
    req.setRequestHeader("x-priority", "Low");

    req.send();
}

function getImg(){
    var req = new XMLHttpRequest();
    req.open("GET", "/req/img/sky.jpg", true);
    req.setRequestHeader("x-priority", "High");
    req.send();
}