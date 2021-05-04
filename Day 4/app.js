var rockPlayerImg = new Image();
var rockComputerImg = new Image();
var paperPlayerImg = new Image();
var paperComputerImg = new Image();
var scissorsPlayerImg = new Image();
var scissorsComputerImg = new Image();

var playerSum = 0;
var computerSum = 0;

var computerMove, playerMove;
var winner, score;

const rpsLogic = plyChoice => {
  playerMove = plyChoice.className;
  computerMove = compRandomMove();
  winner = mainLogic(playerMove, computerMove);
  score = scoreTracker(winner);
  setTimeout(displayResults, 3000);
  loadingGify();
  setTimeout(loadingScr, 3000);
};

const loadingGify = () => {
  var pgif = new Image();
  plyDiv = document.getElementById("loading-scr");
  pgif.src = "images/rps.gif";
  pgif.id = "pimggif";
  plyDiv.appendChild(pgif);

  var cgif = new Image();
  compDiv = document.getElementById("comp-loading-scr");
  cgif.src = "images/rps.gif";
  cgif.id = "cimggif";
  compDiv.appendChild(cgif);
};

const displayResults = () => {
  document.getElementById("result-player").innerHTML = score[0];
  document.getElementById("result-comp").innerHTML = score[1];
};

const scoreTracker = ([plyScore, compScore]) => {
  if (plyScore === 1) {
    playerSum += 1;
  } else if (compScore === 1) {
    computerSum += 1;
  }
  return [playerSum, computerSum];
};

const compRandomMove = () => {
  var rpsMoves = ["rock", "paper", "scissors"];
  return rpsMoves[Math.floor(Math.random() * 3)];
};

const mainLogic = (playerMove, computerMove) => {
  const movesObj = {
    rock: {
      scissors: 1,
      rock: 0.5,
      paper: 0,
    },
    paper: {
      rock: 1,
      paper: 0.5,
      scissors: 0,
    },
    scissors: {
      paper: 1,
      scissors: 0.5,
      rock: 0,
    },
  };

  var plyScore = movesObj[playerMove][computerMove];
  var compScore = movesObj[computerMove][playerMove];
  return [plyScore, compScore];
};

const loadingScr = () => {
  if (computerMove == "rock") {
    rockComputerImg.src = "./images/rock.JPG";
    rockComputerImg.className = "rockCircle";
    rockComputerImg.id = "crid";
    compDiv.appendChild(rockComputerImg);
    document.getElementById("cimggif").remove();
    setTimeout(() => {
      rockComputerImg.remove();
    }, 3000);
  } else if (computerMove == "paper") {
    paperComputerImg.src = "./images/paper.JPG";
    paperComputerImg.className = "paperCircle";
    paperComputerImg.id = "cpid";
    compDiv.appendChild(paperComputerImg);
    document.getElementById("cimggif").remove();
    setTimeout(() => {
      paperComputerImg.remove();
    }, 3000);
  } else if (computerMove == "scissors") {
    scissorsComputerImg.src = "./images/scissors.JPG";
    scissorsComputerImg.className = "scissorsCircle";
    scissorsComputerImg.id = "csid";
    compDiv.appendChild(scissorsComputerImg);
    document.getElementById("cimggif").remove();
    setTimeout(() => {
      scissorsComputerImg.remove();
    }, 3000);
  }
  if (playerMove == "rock") {
    rockPlayerImg.src = "./images/rock.JPG";
    rockPlayerImg.className = "rockCircle";
    rockPlayerImg.id = "prid";
    plyDiv.appendChild(rockPlayerImg);
    document.getElementById("pimggif").remove();
    setTimeout(() => {
      rockPlayerImg.remove();
    }, 3000);
  } else if (playerMove == "paper") {
    paperPlayerImg.src = "./images/paper.JPG";
    paperPlayerImg.className = "paperCircle";
    paperPlayerImg.id = "ppid";
    plyDiv.appendChild(paperPlayerImg);
    document.getElementById("pimggif").remove();
    setTimeout(() => {
      paperPlayerImg.remove();
    }, 3000);
  } else if (playerMove == "scissors") {
    scissorsPlayerImg.src = "./images/scissors.JPG";
    scissorsPlayerImg.className = "scissorsCircle";
    scissorsPlayerImg.id = "psid";
    plyDiv.appendChild(scissorsPlayerImg);
    document.getElementById("pimggif").remove();
    setTimeout(() => {
      scissorsPlayerImg.remove();
    }, 3000);
  }
};
