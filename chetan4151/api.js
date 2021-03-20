const fetch = require("node-fetch");
fetch("http://api.weatherapi.com/v1/current.json?key=1274933ef26f439e90e95401211703&q=Roorkee")
  .then(response => response.json())
  .then(data => console.log(data));
