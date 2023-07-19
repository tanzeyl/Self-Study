let fetchBtn = document.getElementById("fetch");
fetchBtn.addEventListener("click", getData);

function getData() {
  let xhr = new XMLHttpRequest();
  xhr.open("GET", "https://jsonplaceholder.typicode.com/todos/1", true);
  xhr.onprogress = function () {
    console.log("Progressing.");
  };
  xhr.onload = function () {
    document.getElementById("data").innerHTML = xhr.responseText;
  };
  xhr.send();
}

let popBtn = document.getElementById("populate");
popBtn.addEventListener("click", getEmployeeData);

function getEmployeeData() {
  xhr = new XMLHttpRequest();
  xhr.open("GET", "data.json", true);

  xhr.onprogress = function () {
    console.log("Progressing!");
  };

  xhr.onload = function () {
    if (this.status === 200) {
      let obj = JSON.parse(this.responseText);
      let name = obj["name"];
      let birth = obj["birth"];
      let age = obj["age"];
      let pets = obj["pets"];
      html = "<p>";
      html += `Name: ${name}, Birth: ${birth} and Age: ${age}.<br/>`;
      html += "<strong>PETS</strong><br/>";
      for (let i = 0; i < pets.length; i++) {
        html += `Animal: ${pets[i]["animal"]} and Name: ${pets[i]["name"]} <br/>`;
      }
      html += "</p>";
      document.getElementById("table").innerHTML = html;
    } else {
      console.log("Some error occured!");
    }
  };

  xhr.send();
}
