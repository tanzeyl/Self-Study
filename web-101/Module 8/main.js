let c = document.getElementById("myCanvas");
let ctx = c.getContext("2d");

let drawLine = (x, y) => {
  ctx.lineTo(x, y);
  ctx.stroke();
};

let drawCircle = (x, y, r, sAngle, eAngle, color) => {
  ctx.beginPath();
  ctx.arc(x, y, r, sAngle, eAngle);
  ctx.fillStyle = color;
  ctx.fill();
  ctx.stroke();
};

//Head
drawCircle(250, 250, 150, 0, 2 * Math.PI, "transparent");

//Eyes
let drawEyes = (radius, color) => {
  drawCircle(300, 200, radius, 0, 2 * Math.PI, color);
  drawCircle(200, 200, radius, 0, 2 * Math.PI, color);
};

//Nose
let drawNose = (type) => {
  if (type === "crooked") {
    ctx.moveTo(250, 225);
    drawLine(200, 275);
    ctx.moveTo(200, 275);
    drawLine(250, 275);
  } else {
    drawCircle(250, 250, 20, 0, Math.PI, "transparent");
    ctx.moveTo(230, 250);
    drawLine(250, 225);
    ctx.moveTo(270, 250);
    drawLine(250, 225);
  }
};

//Mouth
let drawMouth = (expression) => {
  if (expression === "surprised") {
    drawCircle(250, 325, 40, 0, 2 * Math.PI, "transparent");
  } else if (expression === "happy") {
    drawCircle(250, 300, 40, 0, Math.PI, "transparent");
  } else {
    ctx.moveTo(200, 325);
    drawLine(300, 325);
  }
};

let getRndInteger = (min, max) => {
  return Math.floor(Math.random() * (max - min)) + min;
};

let drawRandomFace = () => {
  let eyeRadius = getRndInteger(1, 20);
  let eyeColor = ["blue", "brown", "green"][getRndInteger(0, 3)];
  let noseShape = ["crooked", "button"][getRndInteger(0, 2)];
  let expression = ["surprised", "happy", "flat"][getRndInteger(0, 3)];
  drawEyes(eyeRadius, eyeColor);
  drawNose(noseShape);
  drawMouth(expression);
};

drawRandomFace();
