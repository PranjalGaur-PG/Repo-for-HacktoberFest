// const but = document.querySelector("#myBut");
// but.addEventListener("click", function () {
//   console.log("But Clic");
// });
// but.click();

const b1 = Buffer.from("Node.js");
const b2 = Buffer.from(" is awesome");
const b4 = Buffer.concat([b1, b2], 5);
console.log(b4.toString());
