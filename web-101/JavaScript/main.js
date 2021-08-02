let password = "hh";
if (password.length >= 8) {
  console.log("Password is valid.");
} else {
  console.log("Sorry, password is too short.");
}

let email = "ktanzeel80@outlook.com";
if (email.includes("gmail.com")) {
  console.log("You can not sign up using a Gmail account.");
} else {
  console.log("Email is valid.");
}

let old_password = "abdef";
let new_password = "abcdef";
if (old_password === new_password) {
  console.log("Passwords match.");
} else {
  console.log("Password do not match.");
}

let countries = ["India", "Australia", "Canada"];
console.log("Before sort:", countries);
countries.sort();
console.log("After sort:", countries);

let essay = "Hello, my name is Tanzeel Khan. I am from Kanpur, Uttar Pradesh.";
let words = essay.split(" ");
console.log("There are " + words.length + " words in your essay.");

let ipAddress = "172.32.0.1";
let octets = ipAddress.split(".");
let classA = octets[0] == "10";
let oct2 = Number(octets[1]);
let classB = octets[0] == "172" && oct2 >= 16 && oct2 <= 31;
let classC = octets[0] == "192" && octets[1] == "168";
let privateIp = classA || classB || classC;
console.log(privateIp);
